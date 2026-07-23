/*
 * XREFs of RtlpWakeConditionVariable @ 0x1800638F4
 * Callers:
 *     RtlWakeConditionVariable @ 0x1800638C0 (RtlWakeConditionVariable.c)
 *     RtlpWakeSingle @ 0x18006621C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800662E4 (RtlpOptimizeConditionVariableWaitList.c)
 * Callees:
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     ZwAlertThreadByThreadId @ 0x180093FE0 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpWakeConditionVariable(volatile signed __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdx
  unsigned int v8; // r11d
  bool i; // zf
  _QWORD *v10; // r9
  unsigned int v11; // r8d
  unsigned __int64 *v12; // rcx
  unsigned __int64 *v13; // rax
  signed __int64 v14; // rtt
  __int64 *v15; // r9
  __int64 *v16; // rsi
  volatile signed __int64 *v17; // r10
  int v18; // ebx
  bool v19; // bl
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // rtt
  __int64 *v23; // r8
  bool v24; // di
  signed __int64 v25; // rdx
  int v26; // ecx
  unsigned __int64 v27; // rtt
  __int64 *v29; // [rsp+20h] [rbp-10h] BYREF
  signed __int64 v30; // [rsp+68h] [rbp+38h]
  unsigned int v31; // [rsp+78h] [rbp+48h] BYREF

  v30 = a2;
  v3 = (unsigned __int64 *)&v29;
  v4 = a2;
  v29 = 0LL;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = 0;
  for ( i = (v4 & 7) == 7; ; i = (v4 & 7) == 7 )
  {
    v10 = (_QWORD *)v6;
    if ( i )
      break;
    v11 = a3 + (v4 & 7);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      do
      {
        v21 = v10;
        v10 = (_QWORD *)*v10;
        v10[2] = v21;
      }
      while ( !v10[1] );
      v4 = v30;
    }
    v12 = (unsigned __int64 *)v10[1];
    if ( v11 <= v8 )
      goto LABEL_21;
    do
    {
      v13 = (unsigned __int64 *)v12[2];
      if ( !v13 )
        break;
      *v3 = (unsigned __int64)v12;
      ++v8;
      *v12 = 0LL;
      v3 = v12;
      *(_QWORD *)(v6 + 8) = v13;
      v12 = v13;
      *v13 = 0LL;
    }
    while ( v11 > v8 );
    v4 = v30;
    if ( v11 <= v8 )
    {
LABEL_21:
      v22 = v4;
      v4 = _InterlockedCompareExchange64(a1, v6, v4);
      if ( v22 == v4 )
        goto LABEL_9;
    }
    else
    {
      v14 = v30;
      v4 = _InterlockedCompareExchange64(a1, 0LL, v30);
      if ( v14 == v4 )
      {
        *v3 = (unsigned __int64)v12;
        *v12 = 0LL;
        goto LABEL_9;
      }
    }
    v30 = v4;
    v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v4 = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
  *v3 = v4;
LABEL_9:
  v15 = v29;
  if ( v29 )
  {
    do
    {
      v16 = (__int64 *)*v15;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v15 + 9, 1u) )
      {
        v17 = (volatile signed __int64 *)v29[5];
        if ( v17 )
        {
          v18 = *((_DWORD *)v15 + 9);
          v31 = 0;
          v19 = (v18 & 1) == 0;
          while ( 1 )
          {
            v20 = *v17;
            if ( (*v17 & 1) == 0 || v19 && (v20 & 2) == 0 && (v20 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
              break;
            v23 = v29;
            v24 = 0;
            v29[2] = 0LL;
            if ( (v20 & 2) != 0 )
            {
              *((_DWORD *)v23 + 8) = -1;
              v23[1] = 0LL;
              v25 = (unsigned __int64)v23 | v20 & 8 | 7;
              *v23 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
              v24 = (v20 & 4) == 0;
            }
            else
            {
              v23[1] = (__int64)v23;
              *((_DWORD *)v23 + 8) = v20 >> 4;
              if ( (int)(v20 >> 4) <= 1 )
                v25 = (unsigned __int64)v23 | 3;
              else
                v25 = (unsigned __int64)v23 | 0xB;
              v26 = v20 >> 4;
              if ( !v26 )
                v26 = -2;
              *((_DWORD *)v23 + 8) = v26;
            }
            v27 = v20;
            v4 = _InterlockedCompareExchange64(v17, v25, v20);
            if ( v27 == v4 )
            {
              if ( v24 )
                LODWORD(v4) = RtlpOptimizeSRWLockList(v17, v25);
              goto LABEL_15;
            }
            RtlBackoff(&v31);
            _m_prefetchw((const void *)v17);
          }
        }
        _InterlockedOr((volatile signed __int32 *)v15 + 9, 4u);
        LODWORD(v4) = ZwAlertThreadByThreadId((HANDLE)v29[3]);
      }
LABEL_15:
      v29 = v16;
      v15 = v16;
    }
    while ( v16 );
  }
  return v4;
}

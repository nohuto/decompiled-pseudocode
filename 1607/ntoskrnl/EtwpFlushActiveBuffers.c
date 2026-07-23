/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1404F3420
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpRequestFlushTimer @ 0x1400873CC (EtwpRequestFlushTimer.c)
 *     EtwpLockUnlockBufferList @ 0x1400921C4 (EtwpLockUnlockBufferList.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400EB050 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400EB628 (EtwpPrepareDirtyBuffer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpAdjustFreeBuffers @ 0x140490C50 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140491D60 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpFlushBuffer @ 0x140491DBC (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404B9890 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  int v2; // r13d
  __int64 *v5; // r15
  int v6; // ebp
  __int64 v7; // rax
  signed __int64 v8; // r11
  int v9; // r12d
  __int64 v10; // r14
  unsigned __int64 *v11; // rdi
  _QWORD *v12; // rdx
  ULONG ActiveProcessorCount; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int32 v16; // eax
  signed __int64 i; // rcx
  signed __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD **v22; // rdi
  __int64 v23; // rbx
  __int64 *v24; // r14
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // eax
  char v31; // bp
  unsigned int v32; // r12d
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  void (__fastcall *v35)(_QWORD, __int64, __int64); // r14
  __int64 v36; // r15
  bool v37; // zf
  char v38; // [rsp+20h] [rbp-148h]
  char v40; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  if ( !*((_QWORD *)a1 + 100) && !*((_QWORD *)a1 + 45) )
  {
    if ( a1[52] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v5 = (__int64 *)&v40;
  if ( *((_QWORD *)a1 + 109) )
    v5 = (__int64 *)*((_QWORD *)a1 + 109);
  v38 = 0;
  v6 = 0;
  if ( (a1[3] & 0x40000) != 0 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
    if ( v7 )
    {
      *v5 = v7;
      v6 = 1;
    }
    goto LABEL_38;
  }
  v9 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (unsigned __int64 *)v5;
    while ( 1 )
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v12 = a1 + 32;
      }
      else
      {
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        v8 = 0LL;
        if ( v9 >= ActiveProcessorCount )
          v14 = 0LL;
        else
          v14 = KiProcessorBlock[v10];
        v12 = (_QWORD *)(*(_QWORD *)(v14 + 24536) + 8 * (*a1 + 8LL));
      }
      v15 = *v12 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v15 )
        goto LABEL_36;
      if ( v2 )
        break;
      v21 = *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
      if ( v21 )
      {
        *v11 = v21;
        *(_QWORD *)(v15 + 32) = v8;
LABEL_35:
        ++v6;
        ++v11;
      }
LABEL_36:
      --v9;
      if ( --v10 < 0 )
        goto LABEL_37;
    }
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), a1[1]);
    if ( v16 <= a1[1] )
      *(_DWORD *)(v15 + 4) = v16;
    _m_prefetchw(v12);
    for ( i = *v12; (v15 ^ i) <= 0xF; i = v18 )
    {
      v18 = _InterlockedCompareExchange64(v12, v8, i);
      if ( i == v18 )
        break;
    }
    v19 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v15 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), -(i & 0xF));
      EtwpPrepareDirtyBuffer((__int64)a1, v19);
      v8 = 0LL;
      *v11 = v15;
    }
    else
    {
      if ( v19 )
      {
        do
        {
          v20 = *(_QWORD *)(v19 + 32);
          if ( v20 == v15 )
            break;
          v19 = *(_QWORD *)(v19 + 32);
        }
        while ( v20 );
      }
      *(_QWORD *)(v19 + 32) = v8;
      *v11 = v15;
      v38 = 1;
    }
    goto LABEL_35;
  }
LABEL_37:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_38:
  v22 = 0LL;
  if ( v6 > 0 )
  {
    v23 = v6;
    v24 = &v5[v6 - 1];
    do
    {
      v25 = 0LL;
      v26 = 1LL;
      if ( v23 > 1 )
      {
        v27 = 0LL;
        do
        {
          if ( *(_QWORD *)(v5[v26] + 16) > *(_QWORD *)(v5[v27] + 16) )
          {
            v25 = v26;
            v27 = v26;
          }
          ++v26;
        }
        while ( v26 < v23 );
      }
      v28 = v5[v25];
      v29 = *(_QWORD *)(v28 + 32);
      v5[v25] = v29;
      if ( !v29 )
      {
        --v23;
        v5[v25] = *v24--;
      }
      if ( *(int *)(v28 + 12) <= 0
        && (v30 = *(_DWORD *)(v28 + 4), v30 <= 0x48)
        && (v30 || *(_DWORD *)(v28 + 8) <= 0x48u) )
      {
        *(_WORD *)(v28 + 52) = 0;
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v28, 0);
      }
      else
      {
        *(_QWORD *)(v28 + 32) = v22;
        v22 = (_QWORD **)(v28 + 32);
      }
    }
    while ( v23 > 0 );
    v2 = a2;
  }
  v31 = 0;
  v32 = 0;
  if ( v22 )
  {
    v33 = *v22;
    do
    {
      if ( !v33 )
        v31 = a2 != 0;
      v34 = (__int64)(v22 - 4);
      EtwpAdjustFreeBuffers((__int64)a1);
      EtwpWaitForBufferReferenceCount(v34);
      *(_QWORD *)(v34 + 32) = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        v35 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v34 + 56);
        v36 = *(_QWORD *)(v34 + 64);
        *(_QWORD *)(v34 + 56) = 0LL;
        *(_QWORD *)(v34 + 64) = 0LL;
      }
      v32 = EtwpFlushBuffer((__int64)a1, v34, v31);
      v37 = (a1[3] & 0x40000) == 0;
      *(_WORD *)(v34 + 52) = 0;
      if ( v37 )
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v34, 0);
      else
        v35(v32, v34, v36);
      v22 = (_QWORD **)v33;
      if ( v33 )
        v33 = (_QWORD *)*v33;
    }
    while ( v22 );
    if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v38) )
      EtwpRequestFlushTimer((__int64)a1, 0);
  }
  else if ( v2 && (a1[204] & 8) != 0 && !a1[106] && a1[86] )
  {
    EtwpRealtimeSendEmptyMarker((__int16 *)a1);
  }
  return v32;
}

/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1404A1BD0
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 * Callees:
 *     EtwpPrepareDirtyBuffer @ 0x14006364C (EtwpPrepareDirtyBuffer.c)
 *     EtwpEnqueueFreeBuffer @ 0x14006367C (EtwpEnqueueFreeBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400637C4 (EtwpRequestFlushTimer.c)
 *     EtwpLockUnlockBufferList @ 0x140065B9C (EtwpLockUnlockBufferList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpFlushBuffer @ 0x1404A1FE0 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404A210C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpAdjustFreeBuffers @ 0x1404A2138 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404ACD84 (EtwpRealtimeSendEmptyMarker.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 *v7; // r12
  unsigned int v8; // eax
  int v9; // ebp
  __int64 v10; // rax
  bool v11; // cf
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // r15
  unsigned __int64 *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int32 v18; // eax
  signed __int64 i; // rcx
  signed __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD **v24; // rdi
  __int64 v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned __int16 v32; // bp
  unsigned int v33; // r12d
  _QWORD *v34; // rbx
  _QWORD **v35; // rdi
  _QWORD *v36; // r14
  _QWORD *v37; // r15
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  char v41; // [rsp+20h] [rbp-148h]
  int v42; // [rsp+24h] [rbp-144h]
  char v43; // [rsp+30h] [rbp-138h] BYREF

  v4 = (int)a2;
  v42 = (int)a2;
  if ( !*((_QWORD *)a1 + 102) && !*((_QWORD *)a1 + 47) )
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v7 = (__int64 *)&v43;
  if ( *((_QWORD *)a1 + 111) )
    v7 = (__int64 *)*((_QWORD *)a1 + 111);
  v8 = a1[3];
  v9 = 0;
  v41 = 0;
  if ( (v8 & 0x40000) != 0 )
  {
    v10 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
    if ( v10 )
    {
      *v7 = v10;
      v9 = 1;
    }
    goto LABEL_40;
  }
  v11 = (v8 & 0x10000000) != 0;
  v12 = 1;
  if ( !v11 )
    v12 = KeNumberProcessors_0;
  v13 = v12 - 1;
  v14 = v12 - 1;
  if ( v12 - 1 >= 0 )
  {
    v15 = (unsigned __int64 *)v7;
    while ( 1 )
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        a2 = a1 + 36;
      }
      else
      {
        if ( v13 >= (unsigned int)KeNumberProcessors_0 )
          v16 = 0LL;
        else
          v16 = KiProcessorBlock[v14];
        a2 = (_QWORD *)(*(_QWORD *)(v16 + 24536) + 8 * (*a1 + 8LL));
      }
      v17 = *a2 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v17 )
        goto LABEL_38;
      if ( v4 )
        break;
      v23 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
      if ( v23 )
      {
        *v15 = v23;
        *(_QWORD *)(v17 + 32) = 0LL;
LABEL_37:
        ++v9;
        ++v15;
      }
LABEL_38:
      --v13;
      if ( --v14 < 0 )
        goto LABEL_39;
    }
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), a1[1]);
    if ( v18 <= a1[1] )
      *(_DWORD *)(v17 + 4) = v18;
    _m_prefetchw(a2);
    for ( i = *a2; (v17 ^ i) <= 0xF; i = v20 )
    {
      v20 = _InterlockedCompareExchange64(a2, 0LL, i);
      if ( i == v20 )
        break;
    }
    v21 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v17 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), -(i & 0xF));
      EtwpPrepareDirtyBuffer((__int64)a1, v21);
      *v15 = v17;
    }
    else
    {
      if ( v21 )
      {
        do
        {
          v22 = *(_QWORD *)(v21 + 32);
          if ( v22 == v17 )
            break;
          v21 = *(_QWORD *)(v21 + 32);
        }
        while ( v22 );
      }
      *(_QWORD *)(v21 + 32) = 0LL;
      *v15 = v17;
      v41 = 1;
    }
    goto LABEL_37;
  }
LABEL_39:
  EtwpLockUnlockBufferList((__int64)a1, (__int64)a2, a3, a4 * 8);
LABEL_40:
  v24 = 0LL;
  if ( v9 > 0 )
  {
    v25 = v9;
    v26 = &v7[v9 - 1];
    do
    {
      v27 = 0LL;
      v28 = 1LL;
      if ( v25 > 1 )
      {
        a4 = 0LL;
        do
        {
          a3 = 8 * v28;
          if ( *(_QWORD *)(v7[v28] + 16) > *(_QWORD *)(v7[a4] + 16) )
          {
            v27 = v28;
            a4 = v28;
          }
          ++v28;
        }
        while ( v28 < v25 );
      }
      v29 = v7[v27];
      v30 = *(_QWORD *)(v29 + 32);
      v7[v27] = v30;
      if ( !v30 )
      {
        --v25;
        v7[v27] = *v26--;
      }
      if ( *(int *)(v29 + 12) <= 0
        && (v31 = *(_DWORD *)(v29 + 4), v31 <= 0x48)
        && (v31 || *(_DWORD *)(v29 + 8) <= 0x48u) )
      {
        *(_WORD *)(v29 + 52) = 0;
        EtwpEnqueueFreeBuffer((__int64)a1, (unsigned int *)v29, a3, a4 * 8);
      }
      else
      {
        *(_QWORD *)(v29 + 32) = v24;
        v24 = (_QWORD **)(v29 + 32);
      }
    }
    while ( v25 > 0 );
  }
  v32 = 0;
  v33 = 0;
  if ( v24 )
  {
    v34 = *v24;
    do
    {
      if ( !v34 )
        v32 = v42 != 0;
      v35 = v24 - 4;
      EtwpAdjustFreeBuffers(a1);
      EtwpWaitForBufferReferenceCount(v35);
      v35[4] = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        v36 = v35[7];
        v37 = v35[8];
        v35[7] = 0LL;
        v35[8] = 0LL;
      }
      v33 = EtwpFlushBuffer(a1, v35, v32);
      v40 = (a1[3] & 0x40000) == 0;
      *((_WORD *)v35 + 26) = 0;
      if ( v40 )
        EtwpEnqueueFreeBuffer((__int64)a1, (unsigned int *)v35, v38, v39);
      else
        ((void (__fastcall *)(_QWORD, _QWORD **, _QWORD *))v36)(v33, v35, v37);
      v24 = (_QWORD **)v34;
      if ( v34 )
        v34 = (_QWORD *)*v34;
    }
    while ( v24 );
    if ( a1[56] && v42 && ((a1[3] & 0x10000000) == 0 || v41) )
      EtwpRequestFlushTimer((__int64)a1, 0);
  }
  else if ( v4 && (a1[208] & 8) != 0 && !a1[110] && a1[90] )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v33;
}

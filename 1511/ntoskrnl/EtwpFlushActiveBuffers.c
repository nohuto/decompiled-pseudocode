/*
 * XREFs of EtwpFlushActiveBuffers @ 0x140471024
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 * Callees:
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14009C2E4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     EtwpLockUnlockBufferList @ 0x1400CFE24 (EtwpLockUnlockBufferList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpAdjustFreeBuffers @ 0x14046E540 (EtwpAdjustFreeBuffers.c)
 *     EtwpCompleteBuffer @ 0x1404B0A54 (EtwpCompleteBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1404B25D0 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404CAC9C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpFlushBuffer @ 0x1404CACEC (EtwpFlushBuffer.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  __int64 *v4; // r15
  int v5; // edi
  __int16 v6; // bp
  signed __int64 v7; // r11
  signed int v8; // r12d
  unsigned __int64 *v9; // r14
  __int64 Prcb; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD **v13; // r14
  __int64 v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned __int16 v22; // r12
  __int64 v23; // r15
  _QWORD *v24; // rbx
  unsigned __int64 v26; // rax
  unsigned __int32 v27; // eax
  signed __int64 i; // rcx
  signed __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  char v33; // [rsp+20h] [rbp-148h]
  char v34; // [rsp+30h] [rbp-138h] BYREF

  if ( *((_QWORD *)a1 + 102) || *((_QWORD *)a1 + 47) )
  {
    v4 = (__int64 *)&v34;
    v33 = 0;
    v5 = 0;
    v6 = 1;
    if ( *((_QWORD *)a1 + 111) )
      v4 = (__int64 *)*((_QWORD *)a1 + 111);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v31 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
      if ( v31 )
      {
        *v4 = v31;
        v5 = 1;
      }
    }
    else
    {
      v8 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
      if ( v8 >= 0 )
      {
        v9 = (unsigned __int64 *)v4;
        while ( 1 )
        {
          if ( (a1[3] & 0x10000000) != 0 )
          {
            v11 = a1 + 36;
          }
          else
          {
            Prcb = KeGetPrcb(v8);
            v7 = 0LL;
            v11 = (_QWORD *)(*(_QWORD *)(Prcb + 24536) + 8 * (*a1 + 8LL));
          }
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v12 )
            goto LABEL_11;
          if ( a2 )
            break;
          v26 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
          if ( v26 )
          {
            *v9 = v26;
            *(_QWORD *)(v12 + 32) = v7;
LABEL_51:
            ++v5;
            ++v9;
          }
LABEL_11:
          if ( --v8 < 0 )
            goto LABEL_12;
        }
        v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), a1[1]);
        if ( v27 <= a1[1] )
          *(_DWORD *)(v12 + 4) = v27;
        _m_prefetchw(v11);
        for ( i = *v11; (v12 ^ i) <= 0xF; i = v29 )
        {
          v29 = _InterlockedCompareExchange64(v11, v7, i);
          if ( i == v29 )
            break;
        }
        v30 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v12 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v30);
          v7 = 0LL;
        }
        else
        {
          if ( v30 )
          {
            do
            {
              v32 = *(_QWORD *)(v30 + 32);
              if ( v32 == v12 )
                break;
              v30 = *(_QWORD *)(v30 + 32);
            }
            while ( v32 );
          }
          *(_QWORD *)(v30 + 32) = v7;
          v33 = 1;
        }
        *v9 = v12;
        goto LABEL_51;
      }
LABEL_12:
      EtwpLockUnlockBufferList((__int64)a1);
    }
    v13 = 0LL;
    if ( v5 > 0 )
    {
      v14 = v5;
      v15 = &v4[v5 - 1];
      do
      {
        v16 = 0LL;
        v17 = 1LL;
        if ( v14 > 1 )
        {
          v18 = 0LL;
          do
          {
            if ( *(_QWORD *)(v4[v17] + 16) > *(_QWORD *)(v4[v18] + 16) )
            {
              v16 = v17;
              v18 = v17;
            }
            ++v17;
          }
          while ( v17 < v14 );
        }
        v19 = v4[v16];
        v20 = *(_QWORD *)(v19 + 32);
        v4[v16] = v20;
        if ( !v20 )
        {
          --v14;
          v4[v16] = *v15--;
        }
        if ( *(int *)(v19 + 12) <= 0
          && (v21 = *(_DWORD *)(v19 + 4), v21 <= 0x48)
          && (v21 || *(_DWORD *)(v19 + 8) <= 0x48u) )
        {
          EtwpCompleteBuffer(a1, v19, 0LL);
        }
        else
        {
          *(_QWORD *)(v19 + 32) = v13;
          v13 = (_QWORD **)(v19 + 32);
        }
      }
      while ( v14 > 0 );
    }
    v22 = 0;
    LODWORD(v23) = 0;
    if ( v13 )
    {
      if ( !a2 )
        v6 = 0;
      v24 = *v13;
      do
      {
        if ( !v24 )
          v22 = v6;
        EtwpAdjustFreeBuffers((__int64)a1);
        EtwpWaitForBufferReferenceCount(v13 - 4);
        v23 = (unsigned int)EtwpFlushBuffer(a1, v13 - 4, v22);
        EtwpCompleteBuffer(a1, v13 - 4, v23);
        v13 = (_QWORD **)v24;
        if ( v24 )
          v24 = (_QWORD *)*v24;
      }
      while ( v13 );
      if ( a1[56] && a2 && ((a1[3] & 0x10000000) == 0 || v33) )
        EtwpRequestFlushTimer((__int64)a1, 0);
    }
    else if ( a2 && (a1[208] & 8) != 0 && !a1[110] && a1[90] )
    {
      EtwpRealtimeSendEmptyMarker(a1);
    }
    return (unsigned int)v23;
  }
  else
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
}

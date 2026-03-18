/*
 * XREFs of GreGetBounds @ 0x1C0054F60
 * Callers:
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBounds(int a1, __m128i *a2, char a3)
{
  __m128i *v6; // rdi
  __int64 v7; // rbx
  signed __int32 v8; // eax
  unsigned int v9; // r14d
  _DWORD *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  signed __int32 v14; // eax
  __int64 v15; // rax
  __m128i v16; // xmm0
  int v17; // edx
  int v18; // r8d
  __m128i v19; // xmm0
  __m128i *v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  __m128i v24; // [rsp+20h] [rbp-49h]
  unsigned int v25; // [rsp+3Ch] [rbp-2Dh]
  unsigned int v26; // [rsp+54h] [rbp-15h]
  _QWORD v27[2]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v28[80]; // [rsp+70h] [rbp+7h] BYREF
  char v29; // [rsp+D0h] [rbp+67h] BYREF
  char v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v27[0] = 0LL;
  v27[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v28);
  v6 = 0LL;
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    goto LABEL_26;
  v7 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v29);
  _m_prefetchw((const void *)(v7 + 8));
  v8 = *(_DWORD *)(v7 + 8);
  if ( (*(_BYTE *)(v7 + 15) & 0x20) != 0 )
  {
LABEL_10:
    KeLeaveCriticalRegion();
    v27[0] = 0LL;
    goto LABEL_11;
  }
  while ( (*(_BYTE *)(v7 + 15) & 0x40) == 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_9:
      _m_prefetchw((const void *)(v7 + 8));
      v8 = *(_DWORD *)(v7 + 8);
      if ( (*(_BYTE *)(v7 + 15) & 0x20) != 0 )
        goto LABEL_10;
    }
    else
    {
      if ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 | 1, v8)
        || (*(_BYTE *)(v7 + 15) & 0x40) != 0 )
      {
        goto LABEL_9;
      }
      *((_QWORD *)gpentPushLock + (unsigned __int16)a1) = 0LL;
      *(_BYTE *)(v7 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v7 + 8));
      v25 = *(_DWORD *)(v7 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v7 + 8), v25);
      v8 = v25;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)a1, 0LL);
  if ( *(_BYTE *)(v7 + 14) == 1 && *(_WORD *)(v7 + 12) == HIWORD(a1) )
  {
    v6 = *(__m128i **)v7;
    ++*(_DWORD *)(*(_QWORD *)v7 + 8LL);
  }
  if ( (*(_BYTE *)(v7 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)a1, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v7 + 8));
    _InterlockedExchange((volatile __int32 *)(v7 + 8), *(_DWORD *)(v7 + 8) & 0xFFFFFFFE);
  }
  KeLeaveCriticalRegion();
LABEL_26:
  v27[0] = v6;
  if ( !v6 )
    goto LABEL_11;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      v6[2].m128i_i32[1] |= 0x40u;
    else
      v6[2].m128i_i32[1] |= 0x20u;
    goto LABEL_35;
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (a3 & 4) != 0 )
      v6[2].m128i_i32[1] &= ~0x40u;
    else
      v6[2].m128i_i32[1] &= ~0x20u;
LABEL_35:
    v6 = (__m128i *)v27[0];
  }
  if ( (a3 & 4) != 0 )
  {
    v15 = v6[98].m128i_i64[0];
    if ( !v15
      || (a3 & 3) != 0
      || (v16 = *(__m128i *)(v15 + 88),
          v17 = _mm_cvtsi128_si32(v16),
          v24 = v16,
          v18 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8)),
          v17 == v18)
      || v16.m128i_i32[1] == v16.m128i_i32[3] )
    {
      v19 = v6[92];
      goto LABEL_43;
    }
  }
  else
  {
    v19 = v6[91];
LABEL_43:
    v24 = v19;
    v17 = v19.m128i_i32[0];
    v18 = v19.m128i_i32[2];
  }
  if ( v17 == v18 || v24.m128i_i32[1] == v24.m128i_i32[3] || v17 >= v18 || v24.m128i_i32[1] >= v24.m128i_i32[3] )
  {
LABEL_11:
    v9 = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v20 = (__m128i *)((char *)v6 + 1416);
    if ( (v6[2].m128i_i32[2] & 1) == 0 )
      v20 = v6 + 88;
    v21 = v20->m128i_i32[1];
    v24.m128i_i32[1] += v21;
    v24.m128i_i32[3] += v21;
    v24.m128i_i32[0] = v20->m128i_i32[0] + v17;
    v24.m128i_i32[2] = v20->m128i_i32[0] + v18;
    *a2 = v24;
  }
  if ( (a3 & 4) != 0 )
  {
    v6[92].m128i_i32[0] = 0x7FFFFFFF;
    v9 = 1;
    *(_DWORD *)(v27[0] + 1476LL) = 0x7FFFFFFF;
    *(_DWORD *)(v27[0] + 1480LL) = 0x80000000;
    *(_DWORD *)(v27[0] + 1484LL) = 0x80000000;
  }
  else
  {
    v6[91].m128i_i32[0] = 0x7FFFFFFF;
    v9 = 1;
    *(_DWORD *)(v27[0] + 1460LL) = 0x7FFFFFFF;
    *(_DWORD *)(v27[0] + 1464LL) = 0x80000000;
    *(_DWORD *)(v27[0] + 1468LL) = 0x80000000;
  }
  v6 = (__m128i *)v27[0];
LABEL_12:
  if ( !v6 )
    goto LABEL_67;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v27);
  v10 = (_DWORD *)v27[0];
  v11 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v12 = (unsigned __int16)*(_DWORD *)v27[0];
  v13 = 3 * v12;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v30);
  _m_prefetchw((const void *)(v11 + 24 * v12 + 8));
  v14 = *(_DWORD *)(v11 + 24 * v12 + 8);
  if ( (*(_BYTE *)(v11 + 24 * v12 + 15) & 0x20) != 0 )
    goto LABEL_66;
  while ( (*(_BYTE *)(v11 + 24 * v12 + 15) & 0x40) == 0 )
  {
    if ( (v14 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
    }
    else if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24 * v12 + 8), v14 | 1, v14)
           && (*(_BYTE *)(v11 + 24 * v12 + 15) & 0x40) == 0 )
    {
      *((_QWORD *)gpentPushLock + v12) = 0LL;
      *(_BYTE *)(v11 + 24 * v12 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v11 + 24 * v12 + 8));
      v26 = *(_DWORD *)(v11 + 24 * v12 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v11 + 24 * v12 + 8), v26);
      v14 = v26;
      continue;
    }
    _m_prefetchw((const void *)(v11 + 24 * v12 + 8));
    v14 = *(_DWORD *)(v11 + 24 * v12 + 8);
    if ( (*(_BYTE *)(v11 + 24 * v12 + 15) & 0x20) != 0 )
      goto LABEL_66;
  }
  v22 = 8 * v12;
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + v22, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v10 + 14) == 5
    && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*v10);
  }
  --v10[2];
  if ( (*(_BYTE *)(v11 + 8 * v13 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + v22, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v11 + 8 * v13 + 8));
    _InterlockedExchange((volatile __int32 *)(v11 + 8 * v13 + 8), *(_DWORD *)(v11 + 8 * v13 + 8) & 0xFFFFFFFE);
  }
LABEL_66:
  KeLeaveCriticalRegion();
LABEL_67:
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v28);
  return v9;
}

/*
 * XREFs of GreGetBounds @ 0x1C0030A80
 * Callers:
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C00443D0 (CreateCacheDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

__int64 __fastcall GreGetBounds(int a1, __m128i *a2, char a3)
{
  __int16 v4; // r15d^2
  __m128i *v6; // rdi
  __int64 v7; // rsi
  char *v8; // rbx
  bool v9; // zf
  signed __int32 v10; // eax
  unsigned int v11; // r15d
  _BYTE *SystemArgument2; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  signed __int32 v15; // eax
  __int64 v16; // rax
  __m128i v17; // xmm0
  int v18; // edx
  int v19; // r8d
  __m128i v20; // xmm0
  __m128i *v21; // rcx
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // rsi
  __m128i v26; // [rsp+20h] [rbp-50h]
  _QWORD v27[3]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-24h]
  int v29; // [rsp+50h] [rbp-20h]
  unsigned int v30; // [rsp+64h] [rbp-Ch]
  int v31; // [rsp+68h] [rbp-8h]
  char v32; // [rsp+B0h] [rbp+40h] BYREF
  char v33; // [rsp+C8h] [rbp+58h] BYREF

  v4 = HIWORD(a1);
  v27[0] = 0LL;
  v27[1] = 0LL;
  v6 = 0LL;
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    goto LABEL_26;
  v7 = (unsigned __int16)a1;
  v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v32);
  _m_prefetchw(v8 + 8);
  v9 = (v8[15] & 0x20) == 0;
  v10 = *((_DWORD *)v8 + 2);
  v28 = v10;
  if ( !v9 )
  {
LABEL_10:
    KeLeaveCriticalRegion();
    v27[0] = 0LL;
    goto LABEL_11;
  }
  while ( (v8[15] & 0x40) == 0 )
  {
    if ( (v10 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_9:
      _m_prefetchw(v8 + 8);
      v9 = (v8[15] & 0x20) == 0;
      v10 = *((_DWORD *)v8 + 2);
      v28 = v10;
      if ( !v9 )
        goto LABEL_10;
    }
    else
    {
      v29 = v10 | 1;
      if ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 2, v10 | 1, v10) || (v8[15] & 0x40) != 0 )
        goto LABEL_9;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v7) = 0LL;
      v8[15] |= 0x40u;
      _m_prefetchw(v8 + 8);
      v28 = *((_DWORD *)v8 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v8 + 2, v28);
      v10 = v28;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7, 0LL);
  if ( v8[14] == 1 && *((_WORD *)v8 + 6) == v4 )
  {
    v6 = *(__m128i **)v8;
    ++*(_DWORD *)(*(_QWORD *)v8 + 8LL);
  }
  if ( (v8[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7);
  }
  else
  {
    _m_prefetchw(v8 + 8);
    v28 = *((_DWORD *)v8 + 2) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)v8 + 2, v28);
  }
  KeLeaveCriticalRegion();
LABEL_26:
  v27[0] = v6;
  if ( !v6 )
    goto LABEL_11;
  if ( (a3 & 1) != 0 )
  {
    v6[2].m128i_i32[1] |= (a3 & 4) != 0 ? 0x40u : 0x20u;
  }
  else if ( (a3 & 2) != 0 )
  {
    if ( (a3 & 4) != 0 )
      v6[2].m128i_i32[1] &= ~0x40u;
    else
      v6[2].m128i_i32[1] &= ~0x20u;
  }
  if ( (a3 & 4) != 0 )
  {
    v16 = v6[96].m128i_i64[1];
    if ( !v16
      || (a3 & 3) != 0
      || (v17 = *(__m128i *)(v16 + 88),
          v18 = _mm_cvtsi128_si32(v17),
          v26 = v17,
          v19 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8)),
          v18 == v19)
      || v17.m128i_i32[1] == v17.m128i_i32[3] )
    {
      v20 = v6[92];
      goto LABEL_42;
    }
  }
  else
  {
    v20 = v6[91];
LABEL_42:
    v26 = v20;
    v18 = v20.m128i_i32[0];
    v19 = v20.m128i_i32[2];
  }
  if ( v18 == v19 || v26.m128i_i32[1] == v26.m128i_i32[3] || v18 >= v19 || v26.m128i_i32[1] >= v26.m128i_i32[3] )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v21 = (__m128i *)((char *)v6 + 1416);
    if ( (v6[2].m128i_i32[2] & 1) == 0 )
      v21 = v6 + 88;
    v22 = v21->m128i_i32[1];
    v26.m128i_i32[1] += v22;
    v26.m128i_i32[3] += v22;
    v26.m128i_i32[0] = v21->m128i_i32[0] + v18;
    v26.m128i_i32[2] = v21->m128i_i32[0] + v19;
    *a2 = v26;
  }
  if ( (a3 & 4) != 0 )
  {
    v6[92].m128i_i32[0] = 0x7FFFFFFF;
    v11 = 1;
    v6[92].m128i_i32[1] = 0x7FFFFFFF;
    v6[92].m128i_i32[2] = 0x80000000;
    v6[92].m128i_i32[3] = 0x80000000;
  }
  else
  {
    v6[91].m128i_i32[0] = 0x7FFFFFFF;
    v11 = 1;
    v6[91].m128i_i32[1] = 0x7FFFFFFF;
    v6[91].m128i_i32[2] = 0x80000000;
    v6[91].m128i_i32[3] = 0x80000000;
  }
LABEL_12:
  if ( !v6 )
    return v11;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v27);
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v13 = (unsigned __int16)*(_DWORD *)v27[0];
  v14 = 3 * v13;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v33);
  _m_prefetchw(&SystemArgument2[24 * v13 + 8]);
  v9 = (SystemArgument2[24 * v13 + 15] & 0x20) == 0;
  v15 = *(_DWORD *)&SystemArgument2[24 * v13 + 8];
  v30 = v15;
  if ( !v9 )
    goto LABEL_64;
  while ( (SystemArgument2[24 * v13 + 15] & 0x40) == 0 )
  {
    if ( (v15 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
    }
    else
    {
      v31 = v15 | 1;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)&SystemArgument2[24 * v13 + 8], v15 | 1, v15)
        && (SystemArgument2[24 * v13 + 15] & 0x40) == 0 )
      {
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v13) = 0LL;
        SystemArgument2[24 * v13 + 15] |= 0x40u;
        _m_prefetchw(&SystemArgument2[24 * v13 + 8]);
        v30 = *(_DWORD *)&SystemArgument2[24 * v13 + 8] & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * v13 + 8], v30);
        v15 = v30;
        continue;
      }
    }
    _m_prefetchw(&SystemArgument2[24 * v13 + 8]);
    v9 = (SystemArgument2[24 * v13 + 15] & 0x20) == 0;
    v15 = *(_DWORD *)&SystemArgument2[24 * v13 + 8];
    v30 = v15;
    if ( !v9 )
      goto LABEL_64;
  }
  v23 = 8 * v13;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v13, 0LL);
  v24 = v27[0];
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v27[0] + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v27[0]);
  }
  --*(_DWORD *)(v24 + 8);
  if ( (SystemArgument2[8 * v14 + 15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v23);
  }
  else
  {
    _m_prefetchw(&SystemArgument2[8 * v14 + 8]);
    v30 = *(_DWORD *)&SystemArgument2[8 * v14 + 8] & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)&SystemArgument2[8 * v14 + 8], v30);
  }
LABEL_64:
  KeLeaveCriticalRegion();
  return v11;
}

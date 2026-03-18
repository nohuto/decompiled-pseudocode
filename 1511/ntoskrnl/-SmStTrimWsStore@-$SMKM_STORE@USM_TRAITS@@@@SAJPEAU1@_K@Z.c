/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020326C
 * Callers:
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140657C4C (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400B3380 (RtlFindNextForwardRunClearCapped.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140203568 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // r14
  bool v6; // zf
  _QWORD *v7; // rbx
  signed __int64 *v8; // r13
  unsigned int v9; // r12d
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 v12; // r14
  int NextForwardRunClearCapped; // eax
  unsigned int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rbx
  int v22; // [rsp+20h] [rbp-B9h]
  unsigned int i; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A1h]
  __int64 v25; // [rsp+40h] [rbp-99h]
  __int64 v26; // [rsp+48h] [rbp-91h] BYREF
  _QWORD *v27; // [rsp+50h] [rbp-89h]
  $D4FCF91253F76F57393CBFE908971F67 v28; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v29[10]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v30[8]; // [rsp+B0h] [rbp-29h] BYREF

  v24 = a2;
  KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)&v28);
  if ( (*(_BYTE *)(a1 + 4485) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 5016), -1LL);
    v27 = v5;
    if ( v5 == (_QWORD *)-1LL )
    {
      v4 = -1073740682;
    }
    else
    {
      v4 = 0;
      if ( !v5 || !*v5 || (v6 = a2 == 0, v7 = v5 + 1, !v6) )
        v7 = 0LL;
      v8 = (signed __int64 *)(a1 + 4488);
      v25 = (__int64)v7;
      v9 = 0;
      StLockAcquireShared((struct VLOCK *)(a1 + 4488));
      if ( v7 )
      {
        v11 = 0;
        i = 0;
LABEL_11:
        v12 = v25;
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v12, v11, 0xFFFFFFFF, &i);
          if ( !NextForwardRunClearCapped )
            break;
          v11 = i;
          v14 = i + NextForwardRunClearCapped;
          if ( i < v14 )
          {
            v15 = v14;
            v16 = 8LL * i;
            do
            {
              if ( (*(_QWORD *)(v16 + *(_QWORD *)(a1 + 4680)) & 0x7FFFFFFFFFFF0000LL) != 0 )
              {
                v17 = v9;
                v29[v9++] = v11;
                v30[v17] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v11, 0, v10, 4u);
                if ( v9 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v29, (unsigned int)v30, 8, v22, 0LL);
                  v9 = 0;
                }
              }
              ++v11;
              v16 += 8LL;
            }
            while ( v11 < v15 );
            i = v11;
            goto LABEL_11;
          }
        }
        v5 = v27;
        v8 = (signed __int64 *)(a1 + 4488);
        v7 = (_QWORD *)v25;
      }
      v18 = 0;
      v19 = v24;
      v26 = v24;
      for ( i = 0; v18 < *(_DWORD *)(a1 + 4676); i = ++v18 )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * v18) & 0x7FFFFFFFFFFF0000LL) != 0
          && (!v7 || _bittest64((const signed __int64 *)v7[1], v18)) )
        {
          v20 = v9;
          v29[v9++] = v18;
          v30[v20] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v18, 0, v10, 4u);
          v19 = v24;
          if ( v9 == 8 )
          {
            SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
              a1,
              (unsigned int)v29,
              (unsigned int)v30,
              8,
              v22,
              (unsigned __int64)&v26 & -(__int64)(v24 != 0));
            v19 = v24;
            v9 = 0;
            if ( v24 )
            {
              if ( !v26 )
                goto LABEL_31;
            }
          }
        }
        else
        {
          v19 = v24;
        }
        v7 = (_QWORD *)v25;
      }
      if ( v9 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v29,
          (unsigned int)v30,
          v9,
          v22,
          (unsigned __int64)&v26 & -(__int64)(v19 != 0));
LABEL_31:
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      _InterlockedExchange64((volatile __int64 *)(a1 + 5016), (__int64)v5);
    }
  }
  KiUnstackDetachProcess(&v28, 0LL);
  return v4;
}

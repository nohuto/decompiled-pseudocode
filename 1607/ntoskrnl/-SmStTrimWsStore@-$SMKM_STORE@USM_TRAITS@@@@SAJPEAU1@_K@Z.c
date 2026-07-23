/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CDC0
 * Callers:
 *     SmStoreCompressionStop @ 0x14054C23C (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140696FD0 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140002088 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400177F0 (RtlFindNextForwardRunClearCapped.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D0BC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
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
  __int64 v25; // [rsp+40h] [rbp-99h] BYREF
  __int64 v26; // [rsp+48h] [rbp-91h]
  _QWORD *v27; // [rsp+50h] [rbp-89h]
  _BYTE v28[48]; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v29[10]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v30[8]; // [rsp+B0h] [rbp-29h] BYREF

  v24 = a2;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6424), 0, (__int64)v28);
  if ( (*(_BYTE *)(a1 + 5861) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6408), -1LL);
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
      v8 = (signed __int64 *)(a1 + 5864);
      v26 = (__int64)v7;
      v9 = 0;
      StLockAcquireShared((struct VLOCK *)(a1 + 5864));
      if ( v7 )
      {
        v11 = 0;
        i = 0;
LABEL_11:
        v12 = v26;
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
              if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6056) + v16) & 0x7FFFFFFFFFFF0000LL) != 0 )
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
        v8 = (signed __int64 *)(a1 + 5864);
        v7 = (_QWORD *)v26;
      }
      v18 = 0;
      v19 = v24;
      v25 = v24;
      for ( i = 0; v18 < *(_DWORD *)(a1 + 6052); i = ++v18 )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6056) + 8LL * v18) & 0x7FFFFFFFFFFF0000LL) != 0
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
              (unsigned __int64)&v25 & -(__int64)(v24 != 0));
            v19 = v24;
            v9 = 0;
            if ( v24 )
            {
              if ( !v25 )
                goto LABEL_31;
            }
          }
        }
        else
        {
          v19 = v24;
        }
        v7 = (_QWORD *)v26;
      }
      if ( v9 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v29,
          (unsigned int)v30,
          v9,
          v22,
          (unsigned __int64)&v25 & -(__int64)(v19 != 0));
LABEL_31:
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      _InterlockedExchange64((volatile __int64 *)(a1 + 6408), (__int64)v5);
    }
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v28, 0);
  return v4;
}

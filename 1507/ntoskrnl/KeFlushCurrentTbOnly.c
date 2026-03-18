/*
 * XREFs of KeFlushCurrentTbOnly @ 0x140203CA8
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 *     MmUpdateHiberMappings @ 0x1403F02FC (MmUpdateHiberMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x1407C47D0 (MiInitializePfnsForValidMappings.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140183710 (KiSetUserTbFlushPending.c)
 */

void __fastcall KeFlushCurrentTbOnly(int a1)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-50h]
  __int128 v7; // [rsp+30h] [rbp-40h]
  __int128 v8; // [rsp+40h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-20h]

  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
    {
      if ( KiFlushPcid )
      {
        v8 = 2uLL;
        _EAX = 1;
        __asm { invpcid eax, [rbp+var_30] }
        goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( KiFlushPcid )
    {
      v6 = 2uLL;
      _EAX = 1;
      __asm { invpcid eax, [rbp+var_50] }
      return;
    }
LABEL_17:
    v5 = __readcr3();
    __writecr3(v5);
    return;
  }
  _EAX = 1;
  if ( a1 == 1 )
  {
    if ( KiFlushPcid )
    {
      v7 = 2uLL;
      __asm { invpcid eax, [rbp+var_40] }
      return;
    }
    goto LABEL_17;
  }
  if ( !KiFlushPcid )
  {
LABEL_15:
    v4 = __readcr4();
    if ( (v4 & 0x20080) != 0 )
    {
      __writecr4(v4 ^ 0x80);
      __writecr4(v4);
      return;
    }
    goto LABEL_17;
  }
  v9 = 2uLL;
  __asm { invpcid eax, [rbp+var_20] }
LABEL_13:
  if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    KiSetUserTbFlushPending();
}

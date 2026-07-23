/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1401D5EF0
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     MmUpdateHiberMappings @ 0x1403C9630 (MmUpdateHiberMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x14078F8AC (MiInitializePfnsForValidMappings.c)
 *     MiZeroBootMappings @ 0x14078F9DC (MiZeroBootMappings.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14015EE60 (KiSetUserTbFlushPending.c)
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
        v6 = 2uLL;
        _EAX = 1;
        __asm { invpcid eax, [rbp+var_50] }
        goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( KiFlushPcid )
    {
      v7 = 2uLL;
      _EAX = 1;
      __asm { invpcid eax, [rbp+var_40] }
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
      v8 = 2uLL;
      __asm { invpcid eax, [rbp+var_30] }
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

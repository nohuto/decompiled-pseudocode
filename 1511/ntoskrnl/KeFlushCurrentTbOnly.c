/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1401C6F54
 * Callers:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MmUpdateHiberMappings @ 0x14039DF40 (MmUpdateHiberMappings.c)
 *     MiZeroBootMappings @ 0x140745DDC (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140745E40 (MiInitializePfnsForValidMappings.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140154B20 (KiSetUserTbFlushPending.c)
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

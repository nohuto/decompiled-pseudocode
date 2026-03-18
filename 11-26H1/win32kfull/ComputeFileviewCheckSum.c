/*
 * XREFs of ComputeFileviewCheckSum @ 0x140140440
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x140140298 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ?GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z @ 0x1401FEB48 (-GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z.c)
 *     FNTCacheUseable @ 0x140294364 (FNTCacheUseable.c)
 *     FNTCachepClose @ 0x14031BBBC (FNTCachepClose.c)
 *     ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x14034D6D0 (-CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeFileviewCheckSum(_DWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // rdx

  result = 0LL;
  v3 = &a1[a2 >> 2];
  while ( a1 < v3 )
    result = (unsigned int)(*a1++ + 257 * result);
  if ( (unsigned int)result < 2 )
    return 2LL;
  return result;
}

/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1400EC1DC
 * Callers:
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1403E3390 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  result = MiRemoveLockedPageChargeAndDecRef(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}

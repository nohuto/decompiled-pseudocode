/*
 * XREFs of MiReturnPfnReferenceCount @ 0x1400FBAC0
 * Callers:
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404C4CA4 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  result = MiRemoveLockedPageChargeAndDecRef(a1, v3, v4, v5);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}

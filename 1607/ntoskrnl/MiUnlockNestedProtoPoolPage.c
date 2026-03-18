/*
 * XREFs of MiUnlockNestedProtoPoolPage @ 0x1400B3968
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009E2E0 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiUnlockNestedProtoPoolPage(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1);
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(a1, v2, v3, v4);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

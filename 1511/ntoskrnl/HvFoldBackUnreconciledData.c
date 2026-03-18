/*
 * XREFs of HvFoldBackUnreconciledData @ 0x1405E69A4
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlMergeBitMaps @ 0x1400E1998 (RtlMergeBitMaps.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  RtlMergeBitMaps(a1 + 96, a1 + 2904);
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 96));
  v3 = *(_BYTE *)(a1 + 2896) == 0;
  *(_DWORD *)(a1 + 112) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 175) = 1;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  HvFreeUnreconciledData(a1);
}

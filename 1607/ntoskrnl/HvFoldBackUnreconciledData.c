/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140605EFC
 * Callers:
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlNumberOfSetBits @ 0x1400767D0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x14009CD90 (RtlMergeBitMaps.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
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

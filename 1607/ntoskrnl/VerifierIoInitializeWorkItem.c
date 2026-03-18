/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x14070566C
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x140013C40 (MmIsSessionAddress.c)
 *     IoSizeofWorkItem @ 0x1400AA590 (IoSizeofWorkItem.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401E6950 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x140702C44 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoInitializeWorkItem(__int64 a1, void *a2)
{
  ULONG v4; // eax

  v4 = IoSizeofWorkItem();
  VfUtilCheckKernelAddress((unsigned __int64)a2, v4);
  if ( MmIsSessionAddress((unsigned __int64)a2) )
    VerifierBugCheckIfAppropriate(196, 304, (int)a2, 0, 0LL);
  if ( (MmVerifierData & 2) != 0 && !MmIsNonPagedSystemAddressValid(a2) )
    VerifierBugCheckIfAppropriate(196, 305, (int)a2, 0, 0LL);
  return pXdvIoInitializeWorkItem(a1, a2);
}

/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x1406B95E0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     IoSizeofWorkItem @ 0x1400EA0AC (IoSizeofWorkItem.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401D5650 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierIoInitializeWorkItem(PVOID IoObject, struct _IO_WORKITEM *a2)
{
  ULONG v4; // eax

  v4 = IoSizeofWorkItem();
  VfUtilCheckKernelAddress((unsigned __int64)a2, v4);
  if ( MmIsSessionAddress((__int64)a2) )
    VerifierBugCheckIfAppropriate(196, 304, (int)a2, 0, 0LL);
  if ( (MmVerifierData & 2) != 0 && !MmIsNonPagedSystemAddressValid(a2) )
    VerifierBugCheckIfAppropriate(196, 305, (int)a2, 0, 0LL);
  pXdvIoInitializeWorkItem(IoObject, a2);
}

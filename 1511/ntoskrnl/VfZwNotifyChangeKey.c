/*
 * XREFs of VfZwNotifyChangeKey @ 0x1406D280C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        void *a4,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG a6,
        BOOLEAN a7,
        PVOID Buffer,
        ULONG a9,
        BOOLEAN a10)
{
  __int64 v14; // r8
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    if ( v14 )
    {
      ViZwCheckVirtualAddress(v14, retaddr);
      if ( (unsigned int)a4 > 6 && (unsigned int)((_DWORD)a4 - 32) > 0x1F )
        VerifierBugCheckIfAppropriate(0xC4u, 0xFCuLL, retaddr, (ULONG_PTR)a4, 0LL);
    }
    ViZwCheckVirtualAddress((int)IoStatusBlock, retaddr);
    ViZwCheckVirtualAddress((int)Buffer, retaddr);
  }
  return pXdvZwNotifyChangeKey(KeyHandle, Event, ApcRoutine, a4, IoStatusBlock, a6, a7, Buffer, a9, a10);
}

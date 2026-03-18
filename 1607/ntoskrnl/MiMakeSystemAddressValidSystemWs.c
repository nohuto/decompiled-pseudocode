/*
 * XREFs of MiMakeSystemAddressValidSystemWs @ 0x14010C248
 * Callers:
 *     MiLockPagedAddress @ 0x14010B9BC (MiLockPagedAddress.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5DD4 (MmFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValidSystemWs(__int64 a1, ULONG_PTR a2, KIRQL a3)
{
  __int64 v6; // rdx
  int v7; // eax
  ULONG_PTR v8; // rbx
  LONG *SharedVm; // rbx
  KIRQL v10; // al

  if ( MiIsAddressValid(a2) )
    return 0LL;
  do
  {
    LOBYTE(v6) = a3;
    MiUnlockWorkingSetExclusive(a1, v6);
    v7 = MmAccessFault(0LL, a2, 0, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      MmFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 2uLL, v8, 0LL, a2);
    }
    SharedVm = MiGetSharedVm(a1);
    v10 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a3 = v10;
  }
  while ( !MiIsAddressValid(a2) );
  return 1LL;
}

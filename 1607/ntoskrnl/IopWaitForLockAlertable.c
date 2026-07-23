/*
 * XREFs of IopWaitForLockAlertable @ 0x1400078E4
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopWaitForLockAlertable(PVOID Object, KPROCESSOR_MODE a2, char a3)
{
  BOOLEAN v6; // al
  KPROCESSOR_MODE v7; // cl
  NTSTATUS result; // eax

  do
  {
    if ( !a3 && a2 != 1 )
    {
      v6 = 0;
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
    v6 = 1;
    if ( !a3 )
      goto LABEL_4;
    v7 = a2;
LABEL_5:
    result = KeWaitForSingleObject(Object, Executive, v7, v6, 0LL);
  }
  while ( (result == 257 || result == 192) && !a3 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 );
  return result;
}

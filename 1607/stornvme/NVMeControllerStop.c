/*
 * XREFs of NVMeControllerStop @ 0x1C0007424
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C000520C (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0005340 (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C00053E4 (FreeProcessorInfo.c)
 *     IoQueuesDeletion @ 0x1C0005C68 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C0005DA8 (IoQueuesFreeResources.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000753C (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C0007A84 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerStop(__int64 a1)
{
  char v2; // di

  v2 = IoQueuesDeletion(a1);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 3232) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  FreeProcessorInfo(a1);
  FreeMsiInfo(a1);
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1184));
  memset((void *)(a1 + 1184), 0, 0x7F8uLL);
  *(_DWORD *)(a1 + 148) = 0;
  return v2;
}

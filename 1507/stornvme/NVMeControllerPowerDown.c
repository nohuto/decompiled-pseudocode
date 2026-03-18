/*
 * XREFs of NVMeControllerPowerDown @ 0x1C0004B18
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 *     NVMeHwStartIo @ 0x1C00020E0 (NVMeHwStartIo.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C0003C44 (IoQueuesDeletion.c)
 */

__int64 __fastcall NVMeControllerPowerDown(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 5;
  if ( *(unsigned __int8 *)(a1 + 43) >= 5u )
    v1 = *(unsigned __int8 *)(a1 + 43);
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, waiting %us seconds...\n");
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFA | 4;
  IoQueuesDeletion(a1);
  v3 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 104) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v6, 0);
  v4 = 100 * v1;
  if ( v4 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 104) + 28LL) & 0xC) == 8 )
        break;
      StorPortStallExecution(10000LL);
      ++v3;
    }
    while ( v3 < v4 );
  }
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, took %ums\n", 10 * v3);
}

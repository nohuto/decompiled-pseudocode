/*
 * XREFs of NVMeControllerPowerDown @ 0x1C0006FD8
 * Callers:
 *     NVMeHwStartIo @ 0x1C0002530 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C0005C68 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeControllerPowerDown(__int64 a1)
{
  unsigned int v2; // edi
  int *v3; // rcx
  int v4; // r9d
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = *(int **)(a1 + 3232);
  if ( v3 )
  {
    v4 = *v3;
    LODWORD(Size) = v3[1];
    NVMeSetHostMemoryBuffer(a1, 0, 0, v4, v3 + 2, Size);
  }
  v5 = 5;
  if ( *(unsigned __int8 *)(a1 + 43) >= 5u )
    v5 = *(unsigned __int8 *)(a1 + 43);
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, waiting %us seconds...\n", v5);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFA | 4;
  IoQueuesDeletion(a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v8, 0);
  v6 = 100 * v5;
  if ( v6 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 112) + 28LL) & 0xC) == 8 )
        break;
      StorPortExtendedFunction(81LL, a1, 10000LL);
      ++v2;
    }
    while ( v2 < v6 );
  }
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D3, took %ums\n", 10 * v2);
}

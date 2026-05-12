/*
 * XREFs of RaidGetTotalStorPoFxDeviceSize @ 0x1C00293E8
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C002AA9C (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002BE68 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x1C0029344 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x1C0029380 (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidGetTotalStorPoFxDeviceSize(int *a1)
{
  unsigned int v2; // ebx
  char *StorPoFxComponent; // rax
  int v4; // r9d
  int v5; // r10d
  char *v6; // rdi
  int v7; // esi
  unsigned int v8; // edx
  char *StorPoFxFState; // rax
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  while ( 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(a1, v2++);
    v6 = StorPoFxComponent;
    if ( !StorPoFxComponent )
      break;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v6, v8);
      v8 = v10 + 1;
      if ( !StorPoFxFState )
        break;
      v11 = 0;
      if ( *(_DWORD *)StorPoFxFState == 1 )
        v11 = 32;
      v7 += v11;
    }
  }
  return (unsigned int)(v5 + v4);
}

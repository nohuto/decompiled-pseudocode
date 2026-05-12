/*
 * XREFs of RaidGetTotalStorPoFxDeviceSize @ 0x1C001938C
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C0019138 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002F9A8 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     RaidGetStorPoFxFState @ 0x1C000F358 (RaidGetStorPoFxFState.c)
 *     RaidGetStorPoFxComponent @ 0x1C000F4A4 (RaidGetStorPoFxComponent.c)
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

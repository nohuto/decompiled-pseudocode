/*
 * XREFs of IopAddRunTimeTriageDataBlocks @ 0x1401F4458
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     IopAddTriageDumpDataBlock @ 0x14016F7DC (IopAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x1401F49E4 (IopGetMaxValidMemorySize.c)
 */

__int64 __fastcall IopAddRunTimeTriageDataBlocks(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r10
  unsigned int v12; // r9d
  unsigned __int64 v13; // r10
  int v14; // r8d
  __int64 v15; // r10
  unsigned int v16; // r11d
  int MaxValidMemorySize; // eax
  _WORD *v18; // rbx
  unsigned __int64 v19; // r9
  __int64 result; // rax

  v6 = 0;
  v7 = *(_QWORD *)(a4 + 248) - 1LL;
  v12 = 256;
  v13 = v7 & 0xFFFFFFFFFFFFF000uLL;
  if ( v13 )
  {
    do
    {
      if ( !MiIsAddressValid(v13) )
        break;
      v16 += v14;
      if ( !v15 )
        break;
      v13 = v15 - 4096;
    }
    while ( v16 < v12 );
    v6 = v12;
    if ( v16 < v12 )
      v6 = v16;
  }
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a4 + 248), v12);
  IopAddTriageDumpDataBlock(a1, a2, a3, *(_QWORD *)(a4 + 248) - v6, MaxValidMemorySize + v6);
  v18 = &IopRunTimeContextOffsets;
  do
  {
    v19 = *(_QWORD *)((unsigned __int16)*v18 + a4);
    if ( v19 < a5 || v19 >= a6 )
      IopAddTriageDumpDataBlock(a1, a2, a3, v19 & 0xFFFFFFFFFFFFF000uLL, 0x1000u);
    ++v18;
    result = 0xFFFFLL;
  }
  while ( *v18 != 0xFFFF );
  return result;
}

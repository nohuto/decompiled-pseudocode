/*
 * XREFs of IopAddRunTimeTriageDataBlocks @ 0x1401C6DFC
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401C5708 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     IopAddTriageDumpDataBlock @ 0x14014B970 (IopAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x1401C7384 (IopGetMaxValidMemorySize.c)
 */

__int64 __fastcall IopAddRunTimeTriageDataBlocks(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebp
  unsigned int v11; // edi
  unsigned __int64 v12; // rbx
  int v13; // esi
  int MaxValidMemorySize; // eax
  _WORD *v15; // rbx
  unsigned __int64 v16; // r9
  __int64 result; // rax

  v6 = 0;
  v11 = 0;
  v12 = (*(_QWORD *)(a4 + 248) - 1LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v12 )
  {
    v13 = v12 & 0xFFF;
    do
    {
      if ( !MiIsAddressValid(v12) )
        break;
      v11 += v13;
      if ( !v12 )
        break;
      v12 -= 4096LL;
      v13 = 4096;
    }
    while ( v11 < 0x100 );
    v6 = 256;
    if ( v11 < 0x100 )
      v6 = v11;
  }
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a4 + 248), 256LL);
  IopAddTriageDumpDataBlock(a1, a2, a3, *(_QWORD *)(a4 + 248) - v6, MaxValidMemorySize + v6);
  v15 = &IopRunTimeContextOffsets;
  do
  {
    v16 = *(_QWORD *)((unsigned __int16)*v15 + a4);
    if ( v16 < a5 || v16 >= a6 )
      IopAddTriageDumpDataBlock(a1, a2, a3, v16 & 0xFFFFFFFFFFFFF000uLL, 0x1000u);
    ++v15;
    result = 0xFFFFLL;
  }
  while ( *v15 != 0xFFFF );
  return result;
}

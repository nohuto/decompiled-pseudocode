/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x1404686D4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 */

unsigned __int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  char v1; // si
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // edx
  unsigned __int64 result; // rax

  v1 = 0;
  v3 = 1;
  if ( (*(_DWORD *)(a1 + 768) & 0x20000) != 0 )
    goto LABEL_12;
  v4 = ExGenRandom(1);
  v5 = (unsigned __int8)v4;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 768) |= 0x2000000u;
  if ( *(_QWORD *)(a1 + 1144) > 0x100000000uLL && (*(_DWORD *)(a1 + 768) & 0x2000000) != 0 )
  {
    v1 = 1;
    v5 = v4 & 0xFFFFFF;
    if ( ((unsigned int)v4 & 0xFFFFFF) <= 0x10000 )
      v5 = 0x10000;
  }
  if ( !v5 )
    v5 = 1;
  v3 = v5;
  if ( !v1 )
LABEL_12:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 768), 0xFDFFFFFF);
  MEMORY[0xFFFFF58010804208] = v3;
  result = (unsigned __int64)v3 << 16;
  MEMORY[0xFFFFF58010804238] = result;
  return result;
}

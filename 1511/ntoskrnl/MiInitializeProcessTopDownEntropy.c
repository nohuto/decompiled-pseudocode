/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x140462B64
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 */

unsigned __int64 __fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  char *v4; // rbx

  result = *(unsigned int *)(a1 + 1724);
  if ( (result & 1) == 0 && (!a2 || (*(_DWORD *)(a1 + 768) & 0x20000) == 0) )
  {
    v4 = (char *)MEMORY[0xFFFFF58010804200];
    if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
    {
LABEL_8:
      result = (unsigned __int64)&v4[-65536 * (unsigned __int8)ExGenRandom(1)];
      MEMORY[0xFFFFF58010804200] = result;
      return result;
    }
    if ( !a2 )
    {
      v4 = (char *)MmHighestUserAddress
         + 0x10000 * (unsigned int)((unsigned int)ExGenRandom(1) % 0x20000LL)
         - 0x9FFFEFFFFLL;
      goto LABEL_8;
    }
    if ( !a3 )
    {
      v4 = (char *)MmHighestUserAddress - 0x9FFFEFFFFLL;
      goto LABEL_8;
    }
    v4 = *(char **)(a1 + 960);
    result = (unsigned __int64)MmHighestUserAddress - 0x9FFFEFFFFLL;
    if ( v4 > (char *)MmHighestUserAddress - 0x9FFFEFFFFLL )
    {
      result = 0xFFFFFFF800010001uLL;
      if ( v4 < (char *)MmHighestUserAddress - 0x7FFFEFFFFLL )
        goto LABEL_8;
    }
  }
  return result;
}

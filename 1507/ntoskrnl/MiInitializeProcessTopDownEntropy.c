/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x140467C98
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 */

char *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2, char a3)
{
  char *result; // rax
  char *v4; // rbx

  result = (char *)*(unsigned int *)(a1 + 1716);
  if ( ((unsigned __int8)result & 1) == 0 && (!a2 || (*(_DWORD *)(a1 + 768) & 0x20000) == 0) )
  {
    v4 = (char *)MEMORY[0xFFFFF58010804240];
    if ( *(_QWORD *)(a1 + 1144) <= 0x100000000uLL )
    {
LABEL_8:
      MEMORY[0xFFFFF58010804240] = &v4[-65536 * (unsigned __int8)ExGenRandom(1)];
      MEMORY[0xFFFFF58010804248] = MEMORY[0xFFFFF58010804240];
      result = (char *)(MEMORY[0xFFFFF580108042F8] - ((unsigned __int8)ExGenRandom(1) << 16));
      MEMORY[0xFFFFF580108042F8] = result;
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
    result = (char *)MmHighestUserAddress - 0x9FFFEFFFFLL;
    if ( v4 > (char *)MmHighestUserAddress - 0x9FFFEFFFFLL )
    {
      result = (char *)MmHighestUserAddress - 0x7FFFEFFFFLL;
      if ( v4 < (char *)MmHighestUserAddress - 0x7FFFEFFFFLL )
        goto LABEL_8;
    }
  }
  return result;
}

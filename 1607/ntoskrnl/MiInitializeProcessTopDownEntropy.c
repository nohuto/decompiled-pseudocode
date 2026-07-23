/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x14046C68C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 */

void __fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 768) & 0x20000) == 0 )
  {
    v3 = qword_140327FD0;
    v4 = *(_QWORD *)(qword_140327FD0 + 276840456);
    if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
    {
LABEL_6:
      *(_QWORD *)(v3 + 276840456) = v4 - ((unsigned __int8)ExGenRandom(1) << 16);
      return;
    }
    if ( !a2 )
    {
      v4 = ((unsigned int)((unsigned int)ExGenRandom(1) % 0x20000LL) << 16) + 0x7FF600000000LL;
      goto LABEL_6;
    }
    if ( !a3 )
    {
      v4 = 0x7FF600000000LL;
      goto LABEL_6;
    }
    v4 = *(_QWORD *)(a1 + 960);
    if ( (unsigned __int64)(v4 - 0x7FF600000001LL) <= 0x1FFFFFFFELL )
      goto LABEL_6;
  }
}

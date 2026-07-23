/*
 * XREFs of HvpFillFileName @ 0x14047EF84
 * Callers:
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void *__fastcall HvpFillFileName(__int64 a1, unsigned __int16 *a2)
{
  void *v2; // rdi
  void *result; // rax
  unsigned int v5; // edx
  unsigned __int16 v6; // ax
  unsigned int v7; // ecx

  v2 = (void *)(a1 + 48);
  result = memset((void *)(a1 + 48), 0, 0x40uLL);
  v5 = 0;
  if ( a2 )
  {
    v6 = *a2;
    if ( *a2 < 0x40u )
    {
      v7 = v6;
    }
    else
    {
      v7 = 62;
      v5 = v6 - 62;
    }
    return memmove(v2, (const void *)(*((_QWORD *)a2 + 1) + v5), v7);
  }
  return result;
}

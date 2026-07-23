/*
 * XREFs of PspInheritMitigationOptions @ 0x14046FB54
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInheritMitigationOptions(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int i; // ecx
  unsigned int v6; // r9d
  __int64 v7; // rax

  v2 = 0LL;
  for ( i = 0; i < 0x40; i += 4 )
  {
    v6 = a1 & 0xF;
    a1 >>= 4;
    v7 = a2 & 0xF;
    a2 >>= 4;
    if ( (v6 & 4) == 0 && (v7 & 3) != 0 )
      v2 |= v7 << i;
    else
      v2 |= (unsigned __int64)v6 << i;
  }
  return v2;
}

/*
 * XREFs of MmEnablePAT @ 0x1403FB064
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmEnablePAT()
{
  __int64 v0; // rdx
  unsigned __int64 *v1; // rcx
  __int64 v2; // r8
  unsigned __int64 *v3; // rcx
  unsigned __int64 result; // rax

  byte_14034EBA8 = 1;
  if ( byte_14034EBA9 != 1 )
  {
    v0 = 7LL;
    v1 = (unsigned __int64 *)&unk_1403D02D8;
    v2 = 7LL;
    do
    {
      *v1 = *v1 & 0xFFFFFFFFFFFFFFE7uLL | 8;
      ++v1;
      --v2;
    }
    while ( v2 );
    v3 = (unsigned __int64 *)&unk_1403D03D8;
    do
    {
      result = *v3 & 0xFFFFFFFFFFFFFFE7uLL | 8;
      *v3++ = result;
      --v0;
    }
    while ( v0 );
  }
  return result;
}

/*
 * XREFs of RtlpDeleteData @ 0x18007B3D0
 * Callers:
 *     RtlDeleteAce @ 0x18007B350 (RtlDeleteAce.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

unsigned __int64 __fastcall RtlpDeleteData(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r10d
  char *v6; // rcx
  char v7; // al
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  v5 = a2;
  if ( a2 < a3 )
  {
    v6 = (char *)(a2 + a1);
    do
    {
      v7 = *v6;
      v8 = v5 - a2;
      ++v5;
      ++v6;
      *(_BYTE *)(v8 + a1) = v7;
    }
    while ( v5 < a3 );
  }
  result = a3 - a2;
  if ( a3 >= a2 )
    return (unsigned __int64)memset((void *)(a1 + (unsigned int)result), 0, a2);
  return result;
}

/*
 * XREFs of ExpIsPoolTagPrintable @ 0x1406D52E4
 * Callers:
 *     ExAllocatePoolSanityChecks @ 0x1406D5018 (ExAllocatePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpIsPoolTagPrintable(unsigned int a1)
{
  unsigned int v1; // r9d
  char *v2; // r8
  unsigned int v3; // r10d
  char v5; // [rsp+10h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &v5;
  v3 = 0;
  while ( 1 )
  {
    *v2 = a1 >> v3;
    if ( (unsigned __int8)((a1 >> v3) - 97) <= 0x19u )
      *v2 = (a1 >> v3) - 32;
    if ( (unsigned __int8)(*v2 - 48) <= 9u || (unsigned __int8)(*v2 - 65) <= 0x19u )
      break;
    v3 += 8;
    ++v2;
    if ( v3 >= 0x20 )
      return v1;
  }
  return 1;
}

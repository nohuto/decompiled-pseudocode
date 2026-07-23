/*
 * XREFs of PspHardenMitigationOptions @ 0x1404CE2A0
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspHardenMitigationOptions(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // r8d

  v1 = *a1;
  v2 = 0;
  if ( *a1 == 1118993 )
    return 0LL;
  if ( (v1 & 3) != 1 )
  {
    v2 = -1073741811;
    v1 = v1 & 0xFFFFFFFFFFFFFFFCuLL | 1;
  }
  if ( (v1 & 0x300) != 0x300 )
  {
    v1 |= 0x300uLL;
    v2 = -1073741811;
  }
  if ( (v1 & 0x3000) != 0x1000 )
  {
    v2 = -1073741811;
    v1 = v1 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
  }
  if ( (v1 & 0x30) != 0x10 )
  {
    v2 = -1073741811;
    v1 = v1 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
  }
  if ( (v1 & 0x30000) != 0x10000 )
  {
    v2 = -1073741811;
    v1 = v1 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
  }
  if ( (((v1 & 0x300000) - 0x100000) & 0xFFFFFFFFFFEFFFFFuLL) != 0
    && (PspSystemMitigationOptions & 0x300000) != 0x200000 )
  {
    v2 = -1073741811;
    v1 = v1 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
  }
  *a1 = v1;
  return v2;
}

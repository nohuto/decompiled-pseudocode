/*
 * XREFs of TriageGetLoaderEntry @ 0x14023DEF8
 * Callers:
 *     VfTriageAddDrivers @ 0x1407D16BC (VfTriageAddDrivers.c)
 *     ViTriageSameDriversFromDump @ 0x1407D19A8 (ViTriageSameDriversFromDump.c)
 * Callees:
 *     TriagepVerifyDump @ 0x1407D3D8C (TriagepVerifyDump.c)
 */

__int64 __fastcall TriageGetLoaderEntry(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int16 v7; // cx

  v2 = a2;
  if ( !(unsigned __int8)TriagepVerifyDump()
    || (unsigned int)v2 >= *(_DWORD *)((unsigned int)TriageImagePageSize + a1 + 52) )
  {
    return 0LL;
  }
  _mm_lfence();
  v5 = a1 + *(unsigned int *)((unsigned int)TriageImagePageSize + a1 + 48);
  v6 = *(unsigned int *)(144 * v2 + v5);
  result = 144 * v2 + v5 + 8;
  v7 = 2 * *(_WORD *)(v6 + a1);
  *(_WORD *)(result + 88) = v7;
  *(_WORD *)(result + 90) = v7;
  *(_QWORD *)(result + 96) = v6 + a1 + 4;
  return result;
}

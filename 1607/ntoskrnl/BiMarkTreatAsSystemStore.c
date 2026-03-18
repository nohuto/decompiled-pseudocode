/*
 * XREFs of BiMarkTreatAsSystemStore @ 0x14053BADC
 * Callers:
 *     BiLoadSystemStore @ 0x14053B5E0 (BiLoadSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiDeleteRegistryValue @ 0x14053C69C (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x14053E21C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiMarkTreatAsSystemStore(__int64 a1)
{
  BOOL v2; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v2 = *(_DWORD *)P != 0;
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( v2 )
      return BiSetRegistryValue(a1, L"TreatAsSystem", L"Description");
  }
  result = BiDeleteRegistryValue(a1, L"TreatAsSystem", L"Description");
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}

/*
 * XREFs of BiMarkTreatAsSystemStore @ 0x1404FB1AC
 * Callers:
 *     BiLoadSystemStore @ 0x1404FACDC (BiLoadSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x1404FD7D8 (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x14068E22C (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiMarkTreatAsSystemStore(__int64 a1, char a2)
{
  BOOL v3; // ebx
  __int64 result; // rax
  int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v5) = a2;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v6) >= 0
    && (v3 = *(_DWORD *)P != 0, ExFreePoolWithTag(P, 0), v3) )
  {
    v5 = 1;
    return BiSetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &v5, 4);
  }
  else
  {
    result = BiDeleteRegistryValue(a1);
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  return result;
}

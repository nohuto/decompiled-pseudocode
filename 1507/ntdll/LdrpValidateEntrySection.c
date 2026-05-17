/*
 * XREFs of LdrpValidateEntrySection @ 0x180040E84
 * Callers:
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 */

bool __fastcall LdrpValidateEntrySection(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, *(_QWORD *)(a1 + 48), 0LL, &v4);
  v2 = *(_DWORD *)(v4 + 40);
  return !v2 || !*(_QWORD *)(a1 + 56) || v2 >= *(_DWORD *)(v4 + 84);
}

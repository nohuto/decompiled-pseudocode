/*
 * XREFs of BiSetObjectDescription @ 0x1406D27BC
 * Callers:
 *     BiCreateObject @ 0x1406D246C (BiCreateObject.c)
 * Callees:
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiSetRegistryValue @ 0x14053E75C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetObjectDescription(void *a1, __int64 a2)
{
  __int64 result; // rax
  bool v5; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  result = BiCreateKey(a1, L"Description", 0x20019u, 1u, &Handle, &v5);
  if ( (int)result >= 0 )
  {
    BiCloseKey(Handle);
    return BiSetRegistryValue(a1, L"Type", L"Description", 4u, (void *)(a2 + 4), 4u);
  }
  return result;
}

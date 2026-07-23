/*
 * XREFs of LdrpAllocateUnicodeString @ 0x18000FD18
 * Callers:
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall LdrpAllocateUnicodeString(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 StringRoutine; // rax

  v2 = 0;
  v3 = a2 + 2;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (unsigned int)(a2 + 2) > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else if ( (v3 & 1) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    StringRoutine = NtdllpAllocateStringRoutine(v3);
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( StringRoutine )
      *(_WORD *)(a1 + 2) = v3;
    else
      return (unsigned int)-1073741801;
  }
  return v2;
}

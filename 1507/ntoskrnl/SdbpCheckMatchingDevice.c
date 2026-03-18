/*
 * XREFs of SdbpCheckMatchingDevice @ 0x1407026B4
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // ebx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 960);
  v7 = 0;
  *a1 = 0;
  if ( v6 && (FirstTag = SdbFindFirstTag(a3, a5, 24577)) != 0 && (StringTagPtr = SdbGetStringTagPtr(a3, FirstTag)) != 0 )
  {
    v7 = 1;
    *a1 = v6(StringTagPtr);
    if ( a6 )
      *(_DWORD *)(a6 + 80) = 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v7;
}

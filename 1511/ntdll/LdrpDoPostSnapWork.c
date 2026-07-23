/*
 * XREFs of LdrpDoPostSnapWork @ 0x1800408DC
 * Callers:
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpDoPostSnapWork(__int64 a1)
{
  PVOID *v1; // rdx
  __int64 v3; // r8
  NTSTATUS result; // eax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  ULONG OldProtect; // [rsp+40h] [rbp+8h] BYREF

  v1 = (PVOID *)(a1 + 96);
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 96)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v1,
                   (PSIZE_T)(a1 + 104),
                   *(_DWORD *)(a1 + 128),
                   &OldProtect),
        v3 = (unsigned int)result,
        result >= 0) )
  {
    v5 = *(_QWORD **)(a1 + 144);
    if ( v5 && *v5 != *(_QWORD *)(a1 + 136) )
      __fastfail(0x13u);
    v6 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v6 + 110) )
      return v3;
    result = LdrpHandleTlsData(v6, v1, v3);
    LODWORD(v3) = result;
    if ( result >= 0 )
      return v3;
  }
  return result;
}

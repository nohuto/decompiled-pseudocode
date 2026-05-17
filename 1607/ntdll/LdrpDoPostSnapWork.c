/*
 * XREFs of LdrpDoPostSnapWork @ 0x18002DE4C
 * Callers:
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpDoPostSnapWork(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 96;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 96)
    || (result = ZwProtectVirtualMemory(-1LL, v1, a1 + 104, *(unsigned int *)(a1 + 128), &v7),
        v3 = (unsigned int)result,
        (int)result >= 0) )
  {
    v5 = *(_QWORD **)(a1 + 144);
    if ( v5 && *v5 != *(_QWORD *)(a1 + 136) )
      __fastfail(0x13u);
    v6 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v6 + 110) )
      return (unsigned int)v3;
    result = LdrpHandleTlsData(v6, v1, v3);
    LODWORD(v3) = result;
    if ( (int)result >= 0 )
      return (unsigned int)v3;
  }
  return result;
}

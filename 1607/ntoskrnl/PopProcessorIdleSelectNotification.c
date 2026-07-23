/*
 * XREFs of PopProcessorIdleSelectNotification @ 0x140204928
 * Callers:
 *     <none>
 * Callees:
 *     PopTranslateDependencyArray @ 0x140204BFC (PopTranslateDependencyArray.c)
 */

__int64 __fastcall PopProcessorIdleSelectNotification(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  ULONG_PTR v4; // rsi
  unsigned __int8 (__fastcall *v6)(_QWORD, __int64, ULONG_PTR); // r9
  __int64 v7; // r14

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v2 && (v6 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, ULONG_PTR))(v2 + 104)) != 0LL )
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( v6(*(_QWORD *)(a1 + 72), 3LL, a2) )
      PopTranslateDependencyArray(v4, a2, 0x700uLL, *(_DWORD *)(a2 + 16), v7);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}

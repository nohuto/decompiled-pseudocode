/*
 * XREFs of PopProcessorQueryCoordiantedDependencyNotification @ 0x140204AE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopProcessorQueryCoordiantedDependencyNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned __int8 (__fastcall *v6)(__int64, __int64, __int64); // r9
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v2 && (v6 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(v2 + 104)) != 0LL )
  {
    if ( v6(v4, 30LL, a2) )
    {
      v7 = *(_QWORD *)(a2 + 16);
      if ( v7 )
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(v7 + 168);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}

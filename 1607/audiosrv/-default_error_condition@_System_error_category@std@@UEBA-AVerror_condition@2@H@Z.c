/*
 * XREFs of ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x1800516F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_System_error_category::default_error_condition(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  __int64 *v6; // rax

  v5 = std::_Winerror_map(a3);
  if ( v5 )
  {
    *(_DWORD *)a2 = v5;
    v6 = (__int64 *)&std::_Error_objects<int>::_Generic_object;
  }
  else
  {
    *(_DWORD *)a2 = a3;
    v6 = &std::_Error_objects<int>::_System_object;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return a2;
}

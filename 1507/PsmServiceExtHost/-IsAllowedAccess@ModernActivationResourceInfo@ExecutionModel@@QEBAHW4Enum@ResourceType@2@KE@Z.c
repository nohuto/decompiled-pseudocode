/*
 * XREFs of ?IsAllowedAccess@ModernActivationResourceInfo@ExecutionModel@@QEBAHW4Enum@ResourceType@2@KE@Z @ 0x180036430
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180037F90 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::IsAllowedAccess(_QWORD *a1, int a2, int a3, char a4)
{
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  _QWORD *j; // rax

  v5 = a1 + 3;
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    if ( *(int *)(i[2] + 4LL * a2 + 1544) < 101 )
      return 1LL;
  }
  if ( a3 == 2 && (unsigned int)(a2 - 22) <= 4 && a4 )
  {
    for ( j = (_QWORD *)*a1; j != a1; j = (_QWORD *)*j )
    {
      if ( *(int *)(j[2] + 4LL * a2 + 1544) < 101 )
        return 1LL;
    }
  }
  return 0LL;
}

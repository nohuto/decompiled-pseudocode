/*
 * XREFs of RmpPsmAppFamilyEnumerateActivityHostGetNext @ 0x180004B50
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPsmAppFamilyEnumerateActivityHostGetNext(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  __int64 v3; // r8

  v1 = (_QWORD *)*a1;
  result = 0LL;
  if ( *a1 )
  {
    v3 = v1[1];
    if ( v3 )
      result = v3 - 8;
    *a1 = result;
    return *v1;
  }
  return result;
}

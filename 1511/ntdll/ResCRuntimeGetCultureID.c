/*
 * XREFs of ResCRuntimeGetCultureID @ 0x1800F7234
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCRuntimeViewLoadCultureMap @ 0x1800F7628 (ResCRuntimeViewLoadCultureMap.c)
 *     ResCGetCultureID @ 0x1800FB024 (ResCGetCultureID.c)
 *     ResCReloadCultureMap @ 0x1800FB180 (ResCReloadCultureMap.c)
 */

__int64 __fastcall ResCRuntimeGetCultureID(__int64 a1, __int64 a2)
{
  PVOID v2; // rbx
  int v3; // ebp
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax

  v2 = ResRuntimeView;
  v3 = 0;
  if ( !ResRuntimeView || !a2 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
  if ( !*((_QWORD *)ResRuntimeView + 1) )
  {
    if ( !(unsigned int)ResCRuntimeViewLoadCultureMap(ResRuntimeView) )
      return 0LL;
    v3 = 1;
  }
  v5 = *((_QWORD *)v2 + 1);
  if ( !v5 )
    return 0LL;
  v6 = ResCGetCultureID(v5, a2);
  if ( !v6 && !v3 )
  {
    v7 = ResCReloadCultureMap(*((PVOID *)v2 + 1));
    *((_QWORD *)v2 + 1) = v7;
    if ( v7 )
      return (unsigned int)ResCGetCultureID(v7, a2);
  }
  return v6;
}

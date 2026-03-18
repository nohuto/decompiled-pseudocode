/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x1C00445E8
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x1C00445E8 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0044754 (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C00445E8 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1)
{
  int NameSpaceObject; // ebx
  _QWORD *v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int Src; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+34h] [rbp-14h]

  NameSpaceObject = 0;
  if ( a1 == gpnsNameSpaceRoot )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      ReferenceObjectEx(gpnsNameSpaceOverrideRoot);
      *v3 = gpnsNameSpaceOverrideRoot;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    NameSpaceObject = GetNameSpaceObject("^");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v6, &v5);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 32);
        v8 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src);
        DereferenceObjectEx(v5);
      }
      DereferenceObjectEx(v6);
    }
  }
  return (unsigned int)NameSpaceObject;
}

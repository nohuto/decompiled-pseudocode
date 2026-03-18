/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x1C005BD70
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x1C005BD70 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005BEE0 (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005BD70 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1)
{
  int NameSpaceObject; // ebx
  _QWORD *v3; // rdx
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-20h]
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
        Src = *(_DWORD *)(a1 + 40);
        v8 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src);
        DereferenceObjectEx(v5);
      }
      DereferenceObjectEx(v6);
    }
  }
  return (unsigned int)NameSpaceObject;
}

/*
 * XREFs of AMLIApplyNextNamespaceOverride @ 0x1C004484C
 * Callers:
 *     AMLIApplyNamespaceOverride @ 0x1C0005B60 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004484C (AMLIApplyNextNamespaceOverride.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004484C (AMLIApplyNextNamespaceOverride.c)
 */

__int64 __fastcall AMLIApplyNextNamespaceOverride(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int NameSpaceObject; // ebx
  __int16 v5; // ax
  struct _EX_RUNDOWN_REF *v6; // rcx
  int NamespaceOverride; // eax
  struct _EX_RUNDOWN_REF *v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  int Src; // [rsp+40h] [rbp-10h] BYREF
  char v12; // [rsp+44h] [rbp-Ch]

  v2 = *(_QWORD *)(a1 + 24);
  v10 = a2;
  v12 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      Src = *(_DWORD *)(v2 + 32);
      NameSpaceObject = GetNameSpaceObject(&Src);
      if ( *(_WORD *)(v2 + 58) )
      {
        if ( NameSpaceObject < 0 )
        {
          if ( NameSpaceObject != -1073741772 )
            goto LABEL_15;
          NameSpaceObject = CreateNameSpaceObject(
                              gpheapGlobal,
                              (unsigned __int8 *)&Src,
                              v10,
                              *(struct _EX_RUNDOWN_REF **)(v10 + 40),
                              &v9,
                              0);
          if ( NameSpaceObject < 0 )
            goto LABEL_15;
          v5 = 256;
        }
        else
        {
          v5 = 128;
        }
        v6 = v9;
        LOWORD(v9[7].Count) |= v5;
      }
      else
      {
        if ( NameSpaceObject < 0 )
        {
          if ( NameSpaceObject == -1073741772 )
            NameSpaceObject = 0;
          goto LABEL_15;
        }
        NamespaceOverride = AMLIApplyNextNamespaceOverride(v2, v9);
        v6 = v9;
        NameSpaceObject = NamespaceOverride;
      }
      DereferenceObjectEx((__int64)v6);
      v9 = 0LL;
LABEL_15:
      v2 = *(_QWORD *)(v2 + 8);
      if ( NameSpaceObject < 0 || v2 == *(_QWORD *)(a1 + 24) )
        return (unsigned int)NameSpaceObject;
    }
  }
  return 0;
}

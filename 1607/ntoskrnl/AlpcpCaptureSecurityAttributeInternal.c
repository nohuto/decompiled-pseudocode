/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x1404B9944
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x1404B98BC (AlpcpCaptureSecurityAttribute32.c)
 * Callees:
 *     AlpcReferenceBlobByHandle @ 0x14040AB18 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteBlob @ 0x14040AC68 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttributeInternal(
        unsigned __int64 *Object,
        int a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        _QWORD *a4,
        __int64 a5)
{
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rdi
  __int64 result; // rax
  char v12; // bl
  ULONG_PTR v13; // rdx
  ULONG_PTR v14[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  if ( *a4 != -2LL )
  {
    v8 = Object[2];
    if ( v8 )
    {
      v9 = AlpcReferenceBlobByHandle((_QWORD *)(v8 + 40), *a4, AlpcSecurityType);
      v10 = v9;
      if ( v9 )
      {
        if ( Object == *(unsigned __int64 **)(v9 + 24) )
        {
          if ( (a2 & 0x10000) != 0 )
          {
            if ( AlpcpDeleteBlob(v9) )
              AlpcpDereferenceBlobEx(v10, 1);
            AlpcpDereferenceBlobEx(v10, 1);
            v10 = 0LL;
          }
          *(_QWORD *)(a5 + 32) = v10;
          return 0LL;
        }
        else
        {
          AlpcpDereferenceBlobEx(v9, 1);
          return 3221225506LL;
        }
      }
    }
    return 3221225480LL;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    v12 = 1;
  }
  else
  {
    if ( (a2 & 0x10000) != 0 )
      return 3221225480LL;
    v12 = 0;
  }
  result = AlpcpCreateSecurityContext(Object, v12, a3, v14);
  if ( (int)result >= 0 )
  {
    v13 = v14[0];
    *(_QWORD *)(a5 + 32) = v14[0];
    if ( v12 )
      *a4 = *(_QWORD *)(v13 + 8);
  }
  return result;
}

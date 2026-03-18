/*
 * XREFs of AlpcpCaptureSecurityAttributeInternal @ 0x14054279C
 * Callers:
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140542714 (AlpcpCaptureSecurityAttribute32.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR v13; // rbx
  __int64 result; // rax
  char v15; // si
  ULONG_PTR v16; // rdx
  signed __int64 v17; // rdi
  bool v18; // cc
  ULONG_PTR BugCheckParameter4; // rdi
  signed __int64 v20; // rax
  signed __int64 v21; // rdi
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (a2 & 0xFFFCFFFF) != 0 || (a2 & 0x30000) == 0x30000 )
    return 3221225485LL;
  if ( *a4 != -2LL )
  {
    v8 = Object[2];
    if ( v8 )
    {
      v9 = AlpcReferenceBlobByHandle((_QWORD *)(v8 + 40), *a4, AlpcSecurityType, (__int64)a4);
      BugCheckParameter2[0] = v9;
      v13 = v9;
      if ( v9 )
      {
        if ( Object == *(unsigned __int64 **)(v9 + 24) )
        {
          if ( (a2 & 0x10000) != 0 )
          {
            if ( AlpcpDeleteBlob(v9, v10, v11, v12) )
            {
              v20 = _InterlockedDecrement64((volatile signed __int64 *)(v13 - 24));
              if ( v20 > 0 )
              {
                v13 = BugCheckParameter2[0];
              }
              else
              {
                if ( v20 )
                  KeBugCheckEx(0x18u, 0LL, BugCheckParameter2[0], 0x21uLL, v20);
                v13 = BugCheckParameter2[0];
                AlpcpDestroyBlob(BugCheckParameter2[0]);
              }
            }
            v21 = _InterlockedDecrement64((volatile signed __int64 *)(v13 - 24));
            if ( v21 <= 0 )
            {
              if ( v21 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2[0], 0x21uLL, v21);
              AlpcpDestroyBlob(BugCheckParameter2[0]);
            }
            v13 = 0LL;
          }
          *(_QWORD *)(a5 + 32) = v13;
          return 0LL;
        }
        else
        {
          v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v18 = v17 <= 1;
          BugCheckParameter4 = v17 - 1;
          if ( v18 )
          {
            if ( BugCheckParameter4 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2[0], 0x21uLL, BugCheckParameter4);
            AlpcpDestroyBlob(BugCheckParameter2[0]);
          }
          return 3221225506LL;
        }
      }
    }
    return 3221225480LL;
  }
  if ( (a2 & 0x20000) != 0 )
  {
    v15 = 1;
  }
  else
  {
    if ( (a2 & 0x10000) != 0 )
      return 3221225480LL;
    v15 = 0;
  }
  result = AlpcpCreateSecurityContext(Object, v15, a3, BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v16 = BugCheckParameter2[0];
    *(_QWORD *)(a5 + 32) = BugCheckParameter2[0];
    if ( v15 )
      *a4 = *(_QWORD *)(v16 + 8);
  }
  return result;
}

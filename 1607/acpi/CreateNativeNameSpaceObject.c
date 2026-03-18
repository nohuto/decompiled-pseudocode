/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C0005530
 * Callers:
 *     InitializeNativeNamespace @ 0x1C000547C (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     SetClearAssociatedNativeObjectNoLock @ 0x1C000577C (SetClearAssociatedNativeObjectNoLock.c)
 *     GetNextNameSegment @ 0x1C0005798 (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdx
  int NameSpaceObject; // ebx
  _BYTE *ObjectPath; // r13
  bool v14; // zf
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  int NextNameSegment; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r8
  KIRQL v23; // r8
  __int64 v24; // rdx
  _BYTE *v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+48h] [rbp-38h]
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h]
  __int64 *v33; // [rsp+68h] [rbp-18h]
  _BYTE Src[8]; // [rsp+70h] [rbp-10h] BYREF

  v33 = a8;
  v31 = gpNativeNameSpaceOwner;
  v8 = 0LL;
  v29 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v32 = gpheapGlobal;
  v30 = gpnsNameSpaceRoot;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v26);
    if ( ObjectPath )
    {
      DereferenceObjectEx(0LL, v11);
      v14 = *ObjectPath == 92;
      v15 = ObjectPath;
      v26 = ObjectPath;
      if ( v14 )
      {
        v15 = ObjectPath + 1;
        v26 = ObjectPath + 1;
      }
      NameSpaceObject = GetNameSpaceObject(v15);
      if ( NameSpaceObject >= 0 )
      {
        FreeNameSpaceObjects(v27);
        v27 = 0LL;
      }
      v9 = v30;
      ReferenceObjectEx(v30, v16);
      Src[4] = 0;
      v10 = v29;
      ReferenceObjectEx(v29, v17);
      while ( v15 )
      {
        NextNameSegment = GetNextNameSegment(v15, Src, &v26);
        NameSpaceObject = NextNameSegment;
        if ( NextNameSegment < 0 )
        {
          if ( NextNameSegment == -1073741197 )
            NameSpaceObject = 0;
          break;
        }
        NameSpaceObject = GetNameSpaceObject(Src);
        if ( NameSpaceObject < 0 )
        {
          v8 = v28;
          goto LABEL_16;
        }
        v19 = CreateNameSpaceObject(v32, Src, v10, v31, &v27, 0x20000);
        v8 = v28;
        NameSpaceObject = v19;
        v21 = v27;
        if ( v19 < 0 )
        {
          if ( v19 != -1073741771 )
            break;
          NameSpaceObject = 0;
        }
        else
        {
          *(_WORD *)(v27 + 64) |= 0xA00u;
          LOBYTE(v22) = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          SetClearAssociatedNativeObjectNoLock(v8, v21, v22);
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v23);
        }
        DereferenceObjectEx(v10, v20);
        v27 = 0LL;
        v10 = v21;
        DereferenceObjectEx(v9, v24);
        v15 = v26;
        v9 = v8;
        v8 = 0LL;
        v28 = 0LL;
      }
      if ( NameSpaceObject >= 0 )
      {
        *v33 = v10;
        v10 = 0LL;
      }
LABEL_16:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      NameSpaceObject = -1073741670;
    }
  }
  if ( v9 )
    DereferenceObjectEx(v9, v11);
  if ( v10 )
    DereferenceObjectEx(v10, v11);
  if ( v8 )
    DereferenceObjectEx(v8, v11);
  return (unsigned int)NameSpaceObject;
}

/*
 * XREFs of CreateNativeNameSpaceObject @ 0x1C000535C
 * Callers:
 *     InitializeNativeNamespace @ 0x1C00052A8 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0043380 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     SetClearAssociatedNativeObjectNoLock @ 0x1C0005770 (SetClearAssociatedNativeObjectNoLock.c)
 *     GetNextNameSegment @ 0x1C000578C (GetNextNameSegment.c)
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
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
  int NameSpaceObject; // ebx
  _BYTE *ObjectPath; // r13
  bool v13; // zf
  void *v14; // rdi
  int NextNameSegment; // eax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r8
  KIRQL v19; // r8
  _BYTE *v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 *v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  _BYTE Src[8]; // [rsp+70h] [rbp-10h] BYREF

  v27 = a8;
  v25 = gpNativeNameSpaceOwner;
  v8 = 0LL;
  v24 = gpnsNativeNameSpaceOverrideRoot;
  v9 = 0LL;
  v10 = 0LL;
  v28 = gpheapGlobal;
  v26 = gpnsNameSpaceRoot;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2);
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = (_BYTE *)GetObjectPath(v21);
    if ( ObjectPath )
    {
      DereferenceObjectEx(0LL);
      v13 = *ObjectPath == 92;
      v14 = ObjectPath;
      v21 = ObjectPath;
      if ( v13 )
      {
        v14 = ObjectPath + 1;
        v21 = ObjectPath + 1;
      }
      NameSpaceObject = GetNameSpaceObject(v14);
      if ( NameSpaceObject >= 0 )
      {
        FreeNameSpaceObjects(v22);
        v22 = 0LL;
      }
      v9 = v26;
      ReferenceObjectEx(v26);
      Src[4] = 0;
      v10 = v24;
      ReferenceObjectEx(v24);
      while ( v14 )
      {
        NextNameSegment = GetNextNameSegment(v14, Src, &v21);
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
          v8 = v23;
          goto LABEL_16;
        }
        v16 = CreateNameSpaceObject(v28, Src, v10, v25, &v22, 0x20000);
        v8 = v23;
        NameSpaceObject = v16;
        v17 = v22;
        if ( v16 < 0 )
        {
          if ( v16 != -1073741771 )
            break;
          NameSpaceObject = 0;
        }
        else
        {
          *(_WORD *)(v22 + 56) |= 0xA00u;
          LOBYTE(v18) = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
          SetClearAssociatedNativeObjectNoLock(v8, v17, v18);
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v19);
        }
        DereferenceObjectEx(v10);
        v22 = 0LL;
        v10 = v17;
        DereferenceObjectEx(v9);
        v14 = v21;
        v9 = v8;
        v8 = 0LL;
        v23 = 0LL;
      }
      if ( NameSpaceObject >= 0 )
      {
        *v27 = v10;
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
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)NameSpaceObject;
}

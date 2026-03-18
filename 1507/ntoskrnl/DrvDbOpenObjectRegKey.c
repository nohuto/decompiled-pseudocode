/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1404DDA8C
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404DD4E0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404DD708 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x14054FC98 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14054FDA0 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140557CC8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x14058871C (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1405887F4 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14071ACCC (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14071ADA0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x14071AF6C (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14071B094 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14071B138 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14071B1DC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x14071BE78 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14071C6B8 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14071C7D0 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x14071D50C (DrvDbDispatchDriverFile.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1404DDC38 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DDCF8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404DDE94 (DrvDbGetObjectDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 **a1, __int64 *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 *v7; // rsi
  int v8; // ebx
  __int64 **i; // r14
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  int Tree; // eax
  char *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-8h] BYREF
  const WCHAR *v20; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v22; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A8h] [rbp+58h]
  HANDLE *v24; // [rsp+B0h] [rbp+60h]
  _DWORD *v25; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, const WCHAR *);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, HANDLE *);
  v25 = va_arg(va1, _DWORD *);
  v17 = 0LL;
  v18 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v20, (const WCHAR **)va, &v18);
  v7 = v18;
  v8 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v18 || (v7 = a2) != 0LL )
    {
      v12 = DrvDbAcquireDatabaseNodeBaseKey(a1, v7, a3, &v17);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( v12 == -1073740697 )
          v8 = -1073741772;
        goto LABEL_17;
      }
      if ( !(_BYTE)v23 )
      {
        v13 = 0LL;
        if ( *a1 )
          v13 = **a1;
        v8 = SysCtxRegOpenKey(v13, v17, v20, 0, v22, v24);
        if ( v8 >= 0 && v25 )
          *v25 = 2;
        goto LABEL_17;
      }
      Tree = PnpCtxRegCreateTree((unsigned int)*a1, (_DWORD)v17, (_DWORD)v20, 0, v22, 0LL, (__int64)v24, (__int64)v25);
LABEL_33:
      v8 = Tree;
      goto LABEL_17;
    }
    for ( i = (__int64 **)a1[2]; i != a1 + 2; i = (__int64 **)*i )
    {
      v7 = (__int64 *)i;
      v10 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v17);
      v8 = v10;
      if ( v10 == -1073740697 )
      {
        v8 = -1073741772;
      }
      else
      {
        if ( v10 < 0 )
          break;
        if ( *a1 )
          v11 = **a1;
        else
          v11 = 0LL;
        v8 = SysCtxRegOpenKey(v11, v17, v20, 0, v22, v24);
        DrvDbReleaseDatabaseNodeBaseKey(a1, i);
        v17 = 0LL;
        if ( v8 != -1073741772 )
          return (unsigned int)v8;
      }
    }
    if ( v8 == -1073741772 && (_BYTE)v23 )
    {
      v7 = a1[4];
      v15 = DrvDbAcquireDatabaseNodeBaseKey(a1, v7, a3, &v17);
      v8 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073740697 )
          v8 = -1073741662;
        goto LABEL_17;
      }
      Tree = PnpCtxRegCreateTree((unsigned int)*a1, (_DWORD)v17, (_DWORD)v20, 0, v22, 0LL, (__int64)v24, 0LL);
      goto LABEL_33;
    }
  }
LABEL_17:
  if ( v17 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v7);
  return (unsigned int)v8;
}

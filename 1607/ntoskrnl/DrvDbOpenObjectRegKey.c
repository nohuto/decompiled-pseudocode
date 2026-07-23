/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1404DEEA4
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404B8C04 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404B8CDC (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x1404E5974 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1404E6E34 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1404E7460 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140576810 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1406E1204 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1406E12D8 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x1406E14A4 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1406E15CC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1406E1670 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E1714 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x1406E243C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1406E2BDC (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x1406E2CF4 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x1406E3BD0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1404DEB08 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1404DF04C (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 **a1, const UNICODE_STRING *a2, int a3, ...)
{
  int ObjectDatabaseNode; // eax
  const UNICODE_STRING *v7; // rsi
  int Tree; // ebx
  const UNICODE_STRING *i; // r14
  int v10; // eax
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  const UNICODE_STRING *v17; // [rsp+48h] [rbp-8h] BYREF
  wchar_t *v19; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v21; // [rsp+A0h] [rbp+50h]
  __int64 v22; // [rsp+A8h] [rbp+58h]
  __int64 v23; // [rsp+B0h] [rbp+60h]
  _DWORD *v24; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, wchar_t *);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _DWORD *);
  v16 = 0LL;
  v17 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode((__int64)a1, v19, (wchar_t **)va, &v17);
  v7 = v17;
  Tree = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v17 || (v7 = a2) != 0LL )
    {
      v13 = DrvDbAcquireDatabaseNodeBaseKey(a1, (__int64)v7, a3, &v16);
      Tree = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073740697 )
          Tree = -1073741772;
        goto LABEL_20;
      }
      if ( !(_BYTE)v22 )
      {
        LODWORD(v14) = 0;
        if ( *a1 )
          v14 = **a1;
        Tree = SysCtxRegOpenKey(v14, v16, (_DWORD)v19, 0, v21, v23);
        if ( Tree >= 0 && v24 )
          *v24 = 2;
        goto LABEL_20;
      }
LABEL_32:
      Tree = PnpCtxRegCreateTree(*a1);
      goto LABEL_20;
    }
    for ( i = (const UNICODE_STRING *)a1[2]; i != (const UNICODE_STRING *)(a1 + 2); i = *(const UNICODE_STRING **)&i->Length )
    {
      v7 = i;
      v10 = DrvDbAcquireDatabaseNodeBaseKey(a1, (__int64)i, a3, &v16);
      Tree = v10;
      if ( v10 == -1073740697 )
      {
        Tree = -1073741772;
      }
      else
      {
        if ( v10 < 0 )
          break;
        if ( *a1 )
          v11 = **a1;
        else
          LODWORD(v11) = 0;
        Tree = SysCtxRegOpenKey(v11, v16, (_DWORD)v19, 0, v21, v23);
        DrvDbReleaseDatabaseNodeBaseKey(a1, i);
        v16 = 0LL;
        if ( Tree != -1073741772 )
          return (unsigned int)Tree;
      }
    }
    if ( Tree == -1073741772 && (_BYTE)v22 )
    {
      v7 = (const UNICODE_STRING *)a1[4];
      v15 = DrvDbAcquireDatabaseNodeBaseKey(a1, (__int64)v7, a3, &v16);
      Tree = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073740697 )
          Tree = -1073741662;
        goto LABEL_20;
      }
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v16 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v7);
  return (unsigned int)Tree;
}

/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1404442A0
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404437A8 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x140445038 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14045D4D8 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x1404C6A64 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404C6B3C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1405422FC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14069AD0C (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14069ADE0 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x14069AFAC (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14069B0D4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14069B178 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14069B21C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x14069B8BC (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14069BA8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14069C05C (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14069C174 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x14069CEB0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140444448 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404444DC (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140444650 (DrvDbGetObjectDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x140444C98 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 **a1, __int64 *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 *v7; // rsi
  int v8; // ebx
  __int64 **i; // r14
  int v10; // eax
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int Tree; // eax
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v22; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A8h] [rbp+58h]
  __int64 v24; // [rsp+B0h] [rbp+60h]
  _DWORD *v25; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _DWORD *);
  v17 = 0LL;
  v18 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v20, (__int64 *)va, &v18);
  v7 = v18;
  v8 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v18 || (v7 = a2) != 0LL )
    {
      v13 = DrvDbAcquireDatabaseNodeBaseKey(a1, v7, a3, &v17);
      v8 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073740697 )
          v8 = -1073741772;
        goto LABEL_20;
      }
      if ( !(_BYTE)v23 )
      {
        v14 = 0LL;
        if ( *a1 )
          v14 = **a1;
        v8 = SysCtxRegOpenKey(v14, v17, v20, 0, v22, v24);
        if ( v8 >= 0 && v25 )
          *v25 = 2;
        goto LABEL_20;
      }
      Tree = PnpCtxRegCreateTree((unsigned int)*a1, v17, v20, 0, v22, 0LL, v24, (__int64)v25);
LABEL_33:
      v8 = Tree;
      goto LABEL_20;
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
        goto LABEL_20;
      }
      Tree = PnpCtxRegCreateTree((unsigned int)*a1, v17, v20, 0, v22, 0LL, v24, 0LL);
      goto LABEL_33;
    }
  }
LABEL_20:
  if ( v17 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v7);
  return (unsigned int)v8;
}

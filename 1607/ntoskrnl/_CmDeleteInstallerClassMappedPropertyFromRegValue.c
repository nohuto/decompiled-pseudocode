/*
 * XREFs of _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1406DCD58
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x1406DF048 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DA9EC (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassMappedPropertyFromRegValue(__int64 a1, int a2, void *a3, __int64 a4)
{
  int v4; // r10d
  HANDLE v5; // rbx
  int v6; // edi
  DEVPROPKEY **v9; // r9
  __int64 v10; // r8
  __int64 *v12; // r15
  DEVPROPKEY *v13; // rdx
  DEVPROPKEY **v14; // r14
  const WCHAR *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+28h] [rbp-40h]
  HANDLE Handle; // [rsp+40h] [rbp-28h] BYREF
  HANDLE v23; // [rsp+48h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0;
  v23 = 0LL;
  v9 = &off_1406EB3D0;
  v10 = 0LL;
  v12 = (__int64 *)a1;
  do
  {
    v13 = *v9;
    v14 = v9;
    if ( v4 == (*v9)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v13->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v13->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v13->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v14 = 0LL;
    v10 = (unsigned int)(v10 + 1);
    v9 += 4;
  }
  while ( (unsigned int)v10 < 0xD );
  if ( !v14 )
    return (unsigned int)-1073741802;
  if ( a3 )
  {
LABEL_12:
    v15 = (const WCHAR *)v14[2];
    if ( *(_DWORD *)(a4 + 16) != 2 )
      goto LABEL_22;
    v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
      v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
    if ( v16 )
    {
LABEL_22:
      if ( a3 )
        v5 = a3;
    }
    else
    {
      if ( a3 )
        LODWORD(v5) = (_DWORD)a3;
      v17 = PnpOpenPropertiesKey(v12, (int)v5, 0LL, 2, 0, v21, &Handle);
      v6 = v17;
      if ( v17 == -1073741772 )
      {
        v6 = 0;
        goto LABEL_29;
      }
      if ( v17 < 0 )
        goto LABEL_29;
      v5 = Handle;
    }
    v18 = PnpCtxRegDeleteValue(a1, v5, v15);
    if ( v18 != -1073741772 )
    {
      if ( v18 == -1073741444 )
        goto LABEL_29;
      if ( v18 < 0 )
      {
        v6 = v18;
        goto LABEL_29;
      }
    }
    PnpCtxRegDeleteValue(v19, v5, &word_1405841A0);
    goto LABEL_29;
  }
  v6 = CmOpenInstallerClassRegKey((int)v12, a2, v10, (__int64)v9, 2, 0, (__int64)&v23, 0LL);
  if ( v6 >= 0 )
  {
    v5 = v23;
    goto LABEL_12;
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v6;
}

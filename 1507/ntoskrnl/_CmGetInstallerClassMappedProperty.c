/*
 * XREFs of _CmGetInstallerClassMappedProperty @ 0x14057EA60
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14057E91C (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14057EC8C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14058BBD8 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14058C574 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14058C670 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInstallerClassMappedProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InstallerClassMappedPropertyFromRegProp; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // r8
  unsigned int v16; // r9d
  DEVPROPKEY *v17; // rdx
  DEVPROPKEY **v18; // r8
  unsigned int v19; // r9d
  DEVPROPKEY *v20; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx

  InstallerClassMappedPropertyFromRegProp = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &CmClassRegPropMap;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v23 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v23 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v23 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 3;
      if ( (unsigned int)a4 >= 9 )
        goto LABEL_6;
    }
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                a2,
                                                a3,
                                                a5,
                                                a6,
                                                a7,
                                                a8,
                                                (__int64)a9);
    if ( InstallerClassMappedPropertyFromRegProp != -1073741802 )
      return InstallerClassMappedPropertyFromRegProp;
LABEL_6:
    v15 = &off_1407231B0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
      {
        v22 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v22 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v22 )
          break;
      }
      ++v16;
      v15 += 4;
      if ( v16 >= 0xC )
        goto LABEL_9;
    }
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegValue(
                                                a1,
                                                a2,
                                                a3,
                                                a5,
                                                a6,
                                                a7,
                                                a8,
                                                (__int64)a9);
    if ( InstallerClassMappedPropertyFromRegProp != -1073741802 )
      return InstallerClassMappedPropertyFromRegProp;
LABEL_9:
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_10;
    v24 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v24
      || (InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                      a1,
                                                      a2,
                                                      (_DWORD)v15,
                                                      a6,
                                                      a7,
                                                      a8,
                                                      (__int64)a9),
          InstallerClassMappedPropertyFromRegProp == -1073741802) )
    {
LABEL_10:
      v18 = &off_140721C18;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_DWORD *)(a5 + 16) == (*v18)->pid )
        {
          v25 = *(_QWORD *)a5 - *(_QWORD *)&v20->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v20->fmtid.Data1 )
            v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v20->fmtid.Data4;
          if ( !v25 )
            break;
        }
        ++v19;
        v18 += 2;
        if ( v19 >= 2 )
          return InstallerClassMappedPropertyFromRegProp;
      }
      return (unsigned int)CmGetInstallerClassMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
    }
  }
  return InstallerClassMappedPropertyFromRegProp;
}

/*
 * XREFs of _CmGetInstallerClassMappedProperty @ 0x1404D82B4
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404D81A8 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404D843C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404D8638 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406DD98C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDC68 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
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
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // rcx
  DEVPROPKEY **v22; // r8
  unsigned int v23; // r9d
  DEVPROPKEY *v24; // rdx
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
        v21 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v21 )
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
    v15 = &off_1406EB2A0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
      {
        v19 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v19 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v19 )
          break;
      }
      ++v16;
      v15 += 4;
      if ( v16 >= 0xD )
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
      goto LABEL_25;
    v18 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v18
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
LABEL_25:
      v22 = &off_1406E9A20;
      v23 = 0;
      while ( 1 )
      {
        v24 = *v22;
        if ( *(_DWORD *)(a5 + 16) == (*v22)->pid )
        {
          v25 = *(_QWORD *)a5 - *(_QWORD *)&v24->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v24->fmtid.Data1 )
            v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v24->fmtid.Data4;
          if ( !v25 )
            break;
        }
        ++v23;
        v22 += 2;
        if ( v23 >= 2 )
          return InstallerClassMappedPropertyFromRegProp;
      }
      return (unsigned int)CmGetInstallerClassMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
    }
  }
  return InstallerClassMappedPropertyFromRegProp;
}

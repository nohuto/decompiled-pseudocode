/*
 * XREFs of _CmGetInstallerClassMappedProperty @ 0x140460640
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404604F8 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14046043C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140513B78 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140698370 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassMappedProperty(
        _QWORD *a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InstallerClassMappedPropertyFromRegValue; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // r8
  unsigned int v16; // r9d
  DEVPROPKEY *v17; // rdx
  __int64 v18; // rax
  DEVPROPKEY **v19; // r8
  unsigned int v20; // r9d
  DEVPROPKEY *v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int InstallerClassMappedPropertyFromRegProp; // eax

  InstallerClassMappedPropertyFromRegValue = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &CmClassRegPropMap;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v24 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v24 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 3;
      if ( (unsigned int)a4 >= 9 )
        goto LABEL_6;
    }
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                (_DWORD)a1,
                                                (_DWORD)a2,
                                                a3,
                                                a5,
                                                (__int64)a6,
                                                a7,
                                                a8,
                                                (__int64)a9);
    InstallerClassMappedPropertyFromRegValue = InstallerClassMappedPropertyFromRegProp;
    if ( InstallerClassMappedPropertyFromRegProp != -1073741802 )
      return InstallerClassMappedPropertyFromRegValue;
LABEL_6:
    v15 = &off_1406A2FC0;
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
    InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromRegValue(
                                                 (_DWORD)a1,
                                                 (_DWORD)a2,
                                                 a3,
                                                 a5,
                                                 (__int64)a6,
                                                 a7,
                                                 a8,
                                                 (__int64)a9);
    if ( InstallerClassMappedPropertyFromRegValue != -1073741802 )
      return InstallerClassMappedPropertyFromRegValue;
LABEL_9:
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_14;
    v18 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v18
      || (InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                       a1,
                                                       a2,
                                                       (__int64)v15,
                                                       a6,
                                                       a7,
                                                       a8,
                                                       a9),
          InstallerClassMappedPropertyFromRegValue == -1073741802) )
    {
LABEL_14:
      v19 = &off_1406A19D8;
      v20 = 0;
      while ( 1 )
      {
        v21 = *v19;
        if ( *(_DWORD *)(a5 + 16) == (*v19)->pid )
        {
          v25 = *(_QWORD *)a5 - *(_QWORD *)&v21->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v21->fmtid.Data1 )
            v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v21->fmtid.Data4;
          if ( !v25 )
            break;
        }
        ++v20;
        v19 += 2;
        if ( v20 >= 2 )
          return InstallerClassMappedPropertyFromRegValue;
      }
      return (unsigned int)CmGetInstallerClassMappedPropertyFromComposite(
                             (_DWORD)a1,
                             (_DWORD)a2,
                             a3,
                             a5,
                             (__int64)a6,
                             a7,
                             a8,
                             (__int64)a9);
    }
  }
  return InstallerClassMappedPropertyFromRegValue;
}

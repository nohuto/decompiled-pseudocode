/*
 * XREFs of _CmSetInstallerClassMappedProperty @ 0x1406DF048
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404BB7AC (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x1406D90AC (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1406DCCFC (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1406DCD58 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406DF270 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1406DF2E8 (_CmSetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406DF42C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetInstallerClassMappedProperty(
        __int64 *a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  unsigned int v11; // edi
  DEVPROPKEY **v12; // r9
  unsigned int v13; // r10d
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  DEVPROPKEY **v16; // rdx
  unsigned int v17; // r9d
  DEVPROPKEY *v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  DEVPROPKEY **v23; // rdx
  unsigned int v24; // r8d
  DEVPROPKEY *v25; // r9
  __int64 v26; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &CmClassRegPropMap;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v15 )
          break;
      }
      ++v13;
      v12 += 3;
      if ( v13 >= 9 )
        goto LABEL_11;
    }
    v11 = CmSetInstallerClassMappedPropertyFromRegProp((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, a5, a6, a7, a8);
    if ( v11 != -1073741802 )
      return v11;
LABEL_11:
    v16 = &off_1406EB3D0;
    v17 = 0;
    while ( 1 )
    {
      v18 = *v16;
      if ( *(_DWORD *)(a5 + 16) == (*v16)->pid )
      {
        v19 = *(_QWORD *)a5 - *(_QWORD *)&v18->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v18->fmtid.Data1 )
          v19 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v18->fmtid.Data4;
        if ( !v19 )
          break;
      }
      ++v17;
      v16 += 4;
      if ( v17 >= 0xD )
        goto LABEL_24;
    }
    if ( a6 < 2 )
      v20 = CmDeleteInstallerClassMappedPropertyFromRegValue((__int64)a1, (int)a2, a3, a5);
    else
      v20 = CmSetInstallerClassMappedPropertyFromRegValue((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, a5, a6, a7, a8);
    v11 = v20;
    if ( v20 >= 0 )
      PnpObjectRaisePropertyChangeEvent((__int64)a1, (__int64)a2, 2LL, (__int64)a3, 0LL, a5);
    if ( v11 != -1073741802 )
      return v11;
LABEL_24:
    if ( *(_DWORD *)(a5 + 16) != 2 )
      goto LABEL_34;
    v21 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data1 )
      v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassCoInstallers.fmtid.Data4;
    if ( v21 )
      goto LABEL_34;
    if ( a6 < 2 )
      v22 = CmDeleteInstallerClassMappedPropertyFromCoInstallers(a1, a2);
    else
      v22 = CmSetInstallerClassMappedPropertyFromCoInstallers((_DWORD)a1, (_DWORD)a2, (_DWORD)v18, a6, a7, a8);
    v11 = v22;
    if ( v22 >= 0 )
      PnpObjectRaisePropertyChangeEvent((__int64)a1, (__int64)a2, 2LL, (__int64)a3, 0LL, a5);
    if ( v11 == -1073741802 )
    {
LABEL_34:
      v23 = &off_1406E9B50;
      v24 = 0;
      while ( 1 )
      {
        v25 = *v23;
        if ( *(_DWORD *)(a5 + 16) == (*v23)->pid )
        {
          v26 = *(_QWORD *)a5 - *(_QWORD *)&v25->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v25->fmtid.Data1 )
            v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v25->fmtid.Data4;
          if ( !v26 )
            break;
        }
        ++v24;
        v23 += 2;
        if ( v24 >= 2 )
          return v11;
      }
      return (unsigned int)-1073741790;
    }
  }
  return v11;
}

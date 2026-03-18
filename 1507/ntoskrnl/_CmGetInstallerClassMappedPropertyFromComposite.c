/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromComposite @ 0x14058C670
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14057EA60 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14071842C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r15
  unsigned int *v9; // rsi
  __int64 v11; // r14
  int v14; // r10d
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  __int64 v17; // rax
  int ObjectProperty; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  unsigned int v24; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  v24 = 0;
  *a5 = 0;
  v14 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v15 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  if ( v16 != 10 )
    goto LABEL_8;
  v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
    v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
  if ( v20 )
  {
LABEL_8:
    if ( v16 == 4 )
    {
      v17 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_Configurable;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_Configurable )
        v17 = *(_QWORD *)(a4 + 8) - 0x4B88D2ECD9DBB9A9LL;
      if ( !v17 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           a2,
                           2u,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_DeviceClass_ConfigurableOverride,
                           (__int64)v8,
                           v11,
                           v15,
                           (__int64)&v24,
                           0);
        v14 = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
        {
LABEL_23:
          *v9 = v24;
          return (unsigned int)v14;
        }
        if ( ObjectProperty == -1073741275 )
        {
          v14 = PnpGetObjectProperty(
                  a1,
                  a2,
                  2u,
                  a3,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ClassInstaller,
                  (__int64)v8,
                  0LL,
                  0,
                  (__int64)&v24,
                  0);
          if ( v14 == -1073741275 )
            v14 = PnpGetObjectProperty(
                    a1,
                    a2,
                    2u,
                    a3,
                    0LL,
                    (__int64)&DEVPKEY_DeviceClass_ClassCoInstallers,
                    (__int64)v8,
                    0LL,
                    0,
                    (__int64)&v24,
                    0);
          if ( v14 >= 0 || v14 == -1073741789 || v14 == -1073741275 )
          {
            *v9 = 1;
            *v8 = 17;
            if ( v15 < *v9 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              *(_BYTE *)v11 = (v14 != -1073741275) - 1;
              return 0;
            }
          }
        }
      }
    }
  }
  else
  {
    v21 = PnpGetObjectProperty(
            a1,
            a2,
            2u,
            a3,
            0LL,
            (__int64)&DEVPKEY_DeviceClass_Name,
            (__int64)v8,
            v11,
            v15,
            (__int64)&v24,
            0);
    v14 = v21;
    switch ( v21 )
    {
      case 0:
        goto LABEL_23;
      case -1073741789:
        goto LABEL_23;
      case -1073741275:
        v22 = PnpGetObjectProperty(
                a1,
                a2,
                2u,
                a3,
                0LL,
                (__int64)&DEVPKEY_DeviceClass_ClassName,
                (__int64)v8,
                v11,
                v15,
                (__int64)&v24,
                0);
        v14 = v22;
        if ( v22 == -1073741789 || !v22 )
          goto LABEL_23;
        break;
    }
  }
  return (unsigned int)v14;
}

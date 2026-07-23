/*
 * XREFs of _CmSetDeviceMappedProperty @ 0x14050B6D4
 * Callers:
 *     _PnpDispatchDevice @ 0x1404E3594 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmIsRootDevice @ 0x14050CCF4 (_CmIsRootDevice.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DCADC (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DCBFC (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DEAFC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DECE8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x1406DEE94 (_CmSetDeviceMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmSetDeviceMappedProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        PLARGE_INTEGER Time,
        int a8)
{
  unsigned int v11; // ebx
  DEVPROPKEY **v12; // r8
  unsigned int v13; // r9d
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // r8
  __int64 v16; // r9
  DEVPROPKEY *v17; // rdx
  DEVPROPKEY **v18; // r8
  unsigned int v19; // r9d
  DEVPROPKEY *v20; // rdx
  DEVPROPKEY **v21; // rdx
  unsigned int v22; // r8d
  DEVPROPKEY *v23; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax

  v11 = -1073741802;
  if ( !a4 )
  {
    if ( !(unsigned __int8)CmIsRootDevice(a2) )
    {
      v12 = &CmDeviceRegPropMap;
      v13 = 0;
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
        {
          v27 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
            v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
          if ( !v27 )
            break;
        }
        ++v13;
        v12 += 3;
        if ( v13 >= 0x21 )
          goto LABEL_7;
      }
      v11 = CmSetDeviceMappedPropertyFromRegProp(a1, (_DWORD)a2, a3, a5, a6, (__int64)Time, a8);
      if ( v11 != -1073741802 )
        return v11;
LABEL_7:
      v15 = &off_1406EC540;
      v16 = 0LL;
      while ( 1 )
      {
        v17 = *v15;
        if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
        {
          v26 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
            v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
          if ( !v26 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        v15 += 4;
        if ( (unsigned int)v16 >= 0xD )
          goto LABEL_10;
      }
      if ( a6 < 2 )
        CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(a1, a2, a5, v16);
      else
        CmSetDeviceMappedPropertyFromDriverKeyRegValue(a1, (int)a2, a5, a6, Time, a8);
      v11 = -1073741802;
LABEL_10:
      v18 = &off_1406E9ED0;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_DWORD *)(a5 + 16) == (*v18)->pid )
        {
          v28 = *(_QWORD *)a5 - *(_QWORD *)&v20->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v20->fmtid.Data1 )
            v28 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v20->fmtid.Data4;
          if ( !v28 )
            break;
        }
        ++v19;
        v18 += 4;
        if ( v19 >= 2 )
          goto LABEL_13;
      }
      if ( a6 < 2 )
        v29 = CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(a1, a2, a3, a5);
      else
        v29 = CmSetDeviceMappedPropertyFromInstanceKeyRegValue(a1, (_DWORD)a2, a3, a5, a6, (__int64)Time, a8);
      v11 = v29;
      if ( v29 >= 0 )
        PnpObjectRaisePropertyChangeEvent(a1, (__int64)a2, 1LL, a3, 0LL, a5);
      if ( v11 != -1073741802 )
        return v11;
LABEL_13:
      v21 = &off_1406EB930;
      v22 = 0;
      while ( 1 )
      {
        v23 = *v21;
        if ( *(_DWORD *)(a5 + 16) == (*v21)->pid )
        {
          v25 = *(_QWORD *)a5 - *(_QWORD *)&v23->fmtid.Data1;
          if ( *(_QWORD *)a5 == *(_QWORD *)&v23->fmtid.Data1 )
            v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v23->fmtid.Data4;
          if ( !v25 )
            break;
        }
        ++v22;
        v21 += 2;
        if ( v22 >= 0x18 )
          return v11;
      }
    }
    return (unsigned int)-1073741790;
  }
  return v11;
}

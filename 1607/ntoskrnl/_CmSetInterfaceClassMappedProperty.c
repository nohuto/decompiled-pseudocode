/*
 * XREFs of _CmSetInterfaceClassMappedProperty @ 0x1406DF750
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1404D95D4 (_PnpDispatchInterfaceClass.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1406D9468 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1406DCEEC (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406DF88C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetInterfaceClassMappedProperty(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  unsigned int v11; // ebx
  DEVPROPKEY **v12; // r9
  int v13; // r10d
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  DEVPROPKEY **v17; // rdx
  int v18; // r8d
  DEVPROPKEY *v19; // r9
  __int64 v20; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &off_1406E98A8;
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
      v12 += 2;
      if ( v13 )
        goto LABEL_16;
    }
    if ( a6 < 2 )
      v16 = CmDeleteInterfaceClassMappedPropertyFromRegValue(a1, a2, a3, a5);
    else
      v16 = CmSetInterfaceClassMappedPropertyFromRegValue((_DWORD)a1, a2, a3, a5, a6, a7, a8);
    v11 = v16;
    if ( v16 >= 0 )
      PnpObjectRaisePropertyChangeEvent((__int64)a1, a2, 4LL, a3, 0LL, a5);
    if ( v11 != -1073741802 )
      return v11;
LABEL_16:
    v17 = &off_1406E9978;
    v18 = 0;
    while ( 1 )
    {
      v19 = *v17;
      if ( *(_DWORD *)(a5 + 16) == (*v17)->pid )
      {
        v20 = *(_QWORD *)a5 - *(_QWORD *)&v19->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v19->fmtid.Data1 )
          v20 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v19->fmtid.Data4;
        if ( !v20 )
          break;
      }
      ++v18;
      v17 += 2;
      if ( v18 )
        return v11;
    }
    return (unsigned int)-1073741790;
  }
  return v11;
}

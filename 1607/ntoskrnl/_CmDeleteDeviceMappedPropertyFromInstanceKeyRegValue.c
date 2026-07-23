/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DCBFC
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14050B6D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  int v4; // ebp
  DEVPROPKEY **v5; // r10
  int v7; // ebx
  HANDLE v8; // rdx
  unsigned int v10; // r11d
  __int64 v11; // r15
  DEVPROPKEY *v12; // r8
  DEVPROPKEY **v13; // rdi
  int v14; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = &off_1406E9ED0;
  v7 = 0;
  v8 = 0LL;
  Handle[0] = 0LL;
  v10 = 0;
  v11 = a1;
  do
  {
    v12 = *v5;
    v13 = v5;
    if ( v4 == (*v5)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v12->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v13 = 0LL;
    ++v10;
    v5 += 4;
  }
  while ( v10 < 2 );
  if ( !v13 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_12;
  v7 = CmOpenDeviceRegKey(v11, a2, 0x10u, 0, 2, 0, (__int64)Handle, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Handle[0];
LABEL_12:
    if ( a3 )
      v8 = a3;
    v14 = PnpCtxRegDeleteValue(a1, v8, (const WCHAR *)v13[2]);
    if ( v14 != -1073741772 && v14 != -1073741444 && v14 < 0 )
      v7 = v14;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v7;
}

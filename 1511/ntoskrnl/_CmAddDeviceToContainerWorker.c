/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x1404ED090
 * Callers:
 *     _CmAddDeviceToContainer @ 0x1404ECF48 (_CmAddDeviceToContainer.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140459F5C (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x14045D0B0 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     _CmCreateDeviceContainer @ 0x1404ED26C (_CmCreateDeviceContainer.c)
 *     _PnpCtxRegDeleteKey @ 0x140692804 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteDeviceContainer @ 0x140694AF0 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int DeviceContainer; // eax
  __int64 v11; // r9
  HANDLE v12; // r14
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rcx
  int Value; // eax
  _BYTE v18[4]; // [rsp+40h] [rbp-30h] BYREF
  ULONG v19; // [rsp+44h] [rbp-2Ch] BYREF
  ULONG v20; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v23; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v23 = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  *a5 = 0;
  v18[0] = 0;
  v20 = 0;
  v19 = 0;
  DeviceContainer = CmCreateDeviceContainer(a1, a2, (_DWORD)a3, (unsigned int)&v23, (__int64)v18);
  v12 = v23;
  v13 = DeviceContainer;
  if ( DeviceContainer >= 0 )
  {
    v13 = PnpCtxRegCreateKey(a1, (char *)v23, L"BaseContainers", v11, 4u, 0LL, &v22, &v20);
    if ( v13 >= 0 )
    {
      v13 = PnpCtxRegCreateKey(a1, (char *)v22, a3, v14, 3u, 0LL, &Handle, &v19);
      if ( v13 >= 0 )
      {
        if ( v19 == 2 )
        {
          LODWORD(a5) = 0;
          Value = PnpCtxRegQueryValue(v15, Handle, a4, 0LL, 0LL, (unsigned int *)&a5);
          v13 = Value;
          if ( Value == -1073741772 || Value == -1073741444 )
          {
            v13 = 0;
          }
          else if ( !Value )
          {
            *v5 = 1;
            goto LABEL_9;
          }
        }
        if ( v13 >= 0 && !*v5 )
        {
          v13 = PnpCtxRegSetValue(v15, Handle, (__int64)a4, 0LL, 0LL, 0);
          if ( v13 >= 0 )
            PnpObjectRaisePropertyChangeEvent(a1, (__int64)a4, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
        }
      }
    }
  }
  if ( v13 == -1073741444 )
    v13 = -1073741772;
  if ( v13 < 0 )
  {
    if ( v19 == 1 )
      PnpCtxRegDeleteKey(a1, Handle, 0LL);
    if ( v20 == 1 )
      PnpCtxRegDeleteKey(a1, v22, 0LL);
    if ( v18[0] == 1 )
      CmDeleteDeviceContainer(a1, a2);
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( v22 )
    ZwClose(v22);
  if ( v12 )
    ZwClose(v12);
  return (unsigned int)v13;
}

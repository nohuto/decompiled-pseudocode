/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x140486C80
 * Callers:
 *     _CmAddDeviceToContainer @ 0x140485F54 (_CmAddDeviceToContainer.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     _CmCreateDeviceContainer @ 0x140486094 (_CmCreateDeviceContainer.c)
 *     _PnpCtxRegCreateKey @ 0x14048706C (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x1404870E4 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x140504098 (_PnpCtxRegQueryValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1405067F4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D7080 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteDeviceContainer @ 0x1406D9A10 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int v7; // r12d
  int v10; // eax
  int v11; // r9d
  HANDLE v12; // r14
  int Key; // ebx
  int v14; // r9d
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[4]; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+44h] [rbp-2Ch] BYREF
  int v20; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v23; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v23 = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  v7 = a3;
  *a5 = 0;
  v18[0] = 0;
  v20 = 0;
  v19 = 0;
  v10 = CmCreateDeviceContainer(a1, a2, a3, &v23, v18);
  v12 = v23;
  Key = v10;
  if ( v10 >= 0 )
  {
    Key = PnpCtxRegCreateKey(
            a1,
            (_DWORD)v23,
            (unsigned int)L"BaseContainers",
            v11,
            4,
            0LL,
            (__int64)&v22,
            (__int64)&v20);
    if ( Key >= 0 )
    {
      Key = PnpCtxRegCreateKey(a1, (_DWORD)v22, v7, v14, 3, 0LL, (__int64)&Handle, (__int64)&v19);
      if ( Key >= 0 )
      {
        if ( v19 == 2 )
        {
          LODWORD(a5) = 0;
          v16 = PnpCtxRegQueryValue(v15, Handle, a4, 0LL, 0LL, &a5);
          Key = v16;
          if ( v16 == -1073741772 || v16 == -1073741444 )
          {
            Key = 0;
          }
          else if ( !v16 )
          {
            *v5 = 1;
            goto LABEL_9;
          }
        }
        if ( Key >= 0 && !*v5 )
        {
          Key = PnpCtxRegSetValue(v15, Handle, a4, 0LL, 0LL, 0);
          if ( Key >= 0 )
            PnpObjectRaisePropertyChangeEvent(a1, a4, 1, 0, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
        }
      }
    }
  }
  if ( Key == -1073741444 )
    Key = -1073741772;
  if ( Key < 0 )
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
  return (unsigned int)Key;
}

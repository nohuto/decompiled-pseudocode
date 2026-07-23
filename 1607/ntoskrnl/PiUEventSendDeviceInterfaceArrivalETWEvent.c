/*
 * XREFs of PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404CEFD8
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCbCopyNW @ 0x1401239E0 (RtlStringCbCopyNW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C (_CmSetDeviceInterfacePathFormat.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 */

void __fastcall PiUEventSendDeviceInterfaceArrivalETWEvent(int *a1, const WCHAR *a2)
{
  ULONG v2; // r12d
  PVOID v5; // rbx
  PVOID v6; // rdi
  wchar_t *v7; // rsi
  __int64 v8; // rax
  void *v9; // r14
  int v10; // eax
  HANDLE v11; // rcx
  ULONG v12; // r13d
  SIZE_T v13; // r15
  wchar_t *PoolWithTag; // rax
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v17; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  PVOID v22[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v24; // [rsp+E0h] [rbp-20h] BYREF
  char v25; // [rsp+E2h] [rbp-1Eh] BYREF
  __int16 v26; // [rsp+12Ah] [rbp+2Ah]

  v2 = 0;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v5 = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  P = 0LL;
  v22[0] = 0LL;
  v6 = 0LL;
  v17 = 0;
  LODWORD(v18) = 0;
  memset(UserData, 0, sizeof(UserData));
  v7 = 0LL;
  Handle = 0LL;
  if ( (Microsoft_Windows_PnPMgrTriggerProviderEnableBits & 1) != 0 )
  {
    if ( PnpStringFromGuid(a1, &v24) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      v8 = IopDeviceObjectFromSymbolicName(&DestinationString);
      v9 = (void *)v8;
      if ( v8 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) != -40LL )
        {
          v10 = CmOpenDeviceRegKey(
                  PiPnpRtlCtx,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) + 48LL),
                  16,
                  0,
                  983103,
                  0,
                  (__int64)&Handle,
                  0LL);
          v11 = Handle;
          if ( v10 < 0 )
            v11 = 0LL;
          Handle = v11;
          if ( (int)PnpGetObjectProperty(
                      0x59706E50u,
                      0x200uLL,
                      (__int64)v11,
                      0LL,
                      (__int64)&DEVPKEY_Device_HardwareIds,
                      (__int64)&v16,
                      (__int64)&P,
                      (__int64)&v17,
                      0) >= 0
            && v16 == 8210 )
          {
            v6 = P;
            v12 = v17;
          }
          else
          {
            v6 = P;
            if ( P )
            {
              ExFreePoolWithTag(P, 0x59706E50u);
              v6 = 0LL;
            }
            v12 = 0;
          }
          if ( (int)PnpGetObjectProperty(
                      0x59706E50u,
                      0x200uLL,
                      (__int64)Handle,
                      0LL,
                      (__int64)&DEVPKEY_Device_CompatibleIds,
                      (__int64)&v16,
                      (__int64)v22,
                      (__int64)&v18,
                      0) >= 0
            && v16 == 8210 )
          {
            v5 = v22[0];
            v2 = v18;
          }
          else
          {
            v5 = v22[0];
            if ( v22[0] )
            {
              ExFreePoolWithTag(v22[0], 0x59706E50u);
              v5 = 0LL;
            }
          }
          v13 = DestinationString.Length + 2LL;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x59706E50u);
          v7 = PoolWithTag;
          if ( PoolWithTag && RtlStringCbCopyNW(PoolWithTag, v13, DestinationString.Buffer, v13) >= 0 )
          {
            CmSetDeviceInterfacePathFormat(v15, v7, 0LL);
            UserData[0].Ptr = (ULONGLONG)&v25;
            UserData[3].Size = v2;
            UserData[1].Size = DestinationString.Length + 2;
            v26 = 0;
            *(_QWORD *)&UserData[0].Size = 74LL;
            UserData[1].Ptr = (ULONGLONG)v7;
            UserData[1].Reserved = 0;
            UserData[2].Ptr = (ULONGLONG)v6;
            UserData[2].Size = v12;
            UserData[2].Reserved = 0;
            UserData[3].Ptr = (ULONGLONG)v5;
            UserData[3].Reserved = 0;
            EtwWrite(Microsoft_Windows_PnPMgrTriggerProviderHandle, &Symbol_DeviceArrivalEvent, 0LL, 4u, UserData);
          }
        }
        ObfDereferenceObject(v9);
        if ( v6 )
          ExFreePoolWithTag(v6, 0x59706E50u);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x59706E50u);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x59706E50u);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
}

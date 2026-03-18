/*
 * XREFs of PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbCopyNW @ 0x14014A260 (RtlStringCbCopyNW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140458398 (_CmSetDeviceInterfacePathFormat.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 */

void __fastcall PiUEventSendDeviceInterfaceArrivalETWEvent(int *a1, const WCHAR *a2)
{
  unsigned int v2; // r12d
  PVOID v4; // rbx
  PVOID v5; // rdi
  wchar_t *v6; // rsi
  __int64 v7; // rax
  void *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  HANDLE v11; // rcx
  unsigned int v12; // r13d
  SIZE_T v13; // r15
  wchar_t *PoolWithTag; // rax
  __int64 v15; // rcx
  int v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+28h] [rbp-D8h]
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  PVOID v24; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v26; // [rsp+E0h] [rbp-20h] BYREF
  char v27; // [rsp+E2h] [rbp-1Eh] BYREF
  __int16 v28; // [rsp+12Ah] [rbp+2Ah]

  v2 = 0;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v4 = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  P = 0LL;
  v24 = 0LL;
  v5 = 0LL;
  LODWORD(v21) = 0;
  v19 = 0;
  memset(UserData, 0, sizeof(UserData));
  v6 = 0LL;
  Handle = 0LL;
  if ( (Microsoft_Windows_PnPMgrTriggerProviderEnableBits & 1) != 0 )
  {
    if ( PnpStringFromGuid(a1, &v26) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      v7 = IopDeviceObjectFromSymbolicName((__int64)&DestinationString);
      v8 = (void *)v7;
      if ( v7 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 40LL;
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) != -40LL )
        {
          v10 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 48LL),
                  0x10u,
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
                      *(_QWORD *)(v9 + 8),
                      1,
                      (__int64)v11,
                      v16,
                      (__int64)&DEVPKEY_Device_HardwareIds,
                      (__int64)&v18,
                      &P,
                      &v21,
                      0) >= 0
            && v18 == 8210 )
          {
            v5 = P;
            v12 = v21;
          }
          else
          {
            v5 = P;
            if ( P )
            {
              ExFreePoolWithTag(P, 0x59706E50u);
              v5 = 0LL;
            }
            v12 = 0;
          }
          if ( (int)PnpGetObjectProperty(
                      0x59706E50u,
                      0x200uLL,
                      *(_QWORD *)(v9 + 8),
                      1,
                      (__int64)Handle,
                      v17,
                      (__int64)&DEVPKEY_Device_CompatibleIds,
                      (__int64)&v18,
                      &v24,
                      &v19,
                      0) >= 0
            && v18 == 8210 )
          {
            v4 = v24;
            v2 = v19;
          }
          else
          {
            v4 = v24;
            if ( v24 )
            {
              ExFreePoolWithTag(v24, 0x59706E50u);
              v4 = 0LL;
            }
          }
          v13 = DestinationString.Length + 2LL;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x59706E50u);
          v6 = PoolWithTag;
          if ( PoolWithTag && RtlStringCbCopyNW(PoolWithTag, v13, DestinationString.Buffer, v13) >= 0 )
          {
            CmSetDeviceInterfacePathFormat(v15, v6, 0);
            UserData[0].Ptr = (ULONGLONG)&v27;
            *(_QWORD *)&UserData[3].Size = v2;
            *(_QWORD *)&UserData[1].Size = (unsigned int)DestinationString.Length + 2;
            v28 = 0;
            *(_QWORD *)&UserData[0].Size = 74LL;
            UserData[1].Ptr = (ULONGLONG)v6;
            UserData[2].Ptr = (ULONGLONG)v5;
            *(_QWORD *)&UserData[2].Size = v12;
            UserData[3].Ptr = (ULONGLONG)v4;
            EtwWrite(Microsoft_Windows_PnPMgrTriggerProviderHandle, &Symbol_DeviceArrivalEvent, 0LL, 4u, UserData);
          }
        }
        ObfDereferenceObject(v8);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x59706E50u);
        if ( v4 )
          ExFreePoolWithTag(v4, 0x59706E50u);
        if ( v6 )
          ExFreePoolWithTag(v6, 0x59706E50u);
      }
    }
    if ( Handle )
      ZwClose(Handle);
  }
}

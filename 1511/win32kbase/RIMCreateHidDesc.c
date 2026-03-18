/*
 * XREFs of RIMCreateHidDesc @ 0x1C000F564
 * Callers:
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 * Callees:
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C000EE90 (WPP_RECORDER_SF_qDD.c)
 *     RIMFreeHidDesc @ 0x1C000EF6C (RIMFreeHidDesc.c)
 *     RIMSearchHidTLCInfo @ 0x1C000F164 (RIMSearchHidTLCInfo.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000F23C (RIMGetDeviceObjectPointer.c)
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000F9CC (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C000FB48 (DbgPrintRIM.c)
 *     RIMHidGetCaps @ 0x1C000FB7C (RIMHidGetCaps.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C007B95C (RIMAllocateAndLinkHidTLCInfo.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C007DAB4 (WPP_RECORDER_SF_DDq.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00C427C (WPP_RECORDER_SF_qD.c)
 *     rimHidP_GetCollectionDescription @ 0x1C00C4488 (rimHidP_GetCollectionDescription.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C5D50 (RIMIDECreateHIDDesc.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  int v10; // edx
  struct _DEVICE_OBJECT *v11; // rsi
  PIRP v12; // rax
  struct _FILE_OBJECT *v13; // r12
  int v14; // edx
  NTSTATUS Status; // eax
  int v16; // edx
  void *v17; // rbx
  PIRP v18; // rax
  NTSTATUS v19; // eax
  int v20; // edx
  int Caps; // eax
  int v22; // edx
  int v23; // edx
  unsigned int v24; // edx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // r8
  int v27; // eax
  int v28; // edx
  char v29; // cl
  __int64 v30; // rcx
  __int64 *v31; // rax
  unsigned __int16 v32; // dx
  int v33; // r8d
  __int64 v34; // rbx
  int v35; // edx
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // r10
  int v40; // r9d
  char OutputBufferLength; // [rsp+28h] [rbp-A1h]
  BOOLEAN InternalDeviceIoControl[8]; // [rsp+30h] [rbp-99h]
  char InternalDeviceIoControla; // [rsp+30h] [rbp-99h]
  PKEVENT v44; // [rsp+38h] [rbp-91h]
  HANDLE Handle; // [rsp+50h] [rbp-79h] BYREF
  PVOID v46; // [rsp+58h] [rbp-71h] BYREF
  PVOID Object; // [rsp+60h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-61h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-49h] BYREF
  ULONG OutputBuffer[4]; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int16 v51; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int16 v52; // [rsp+A2h] [rbp-27h]
  __int16 v53; // [rsp+A4h] [rbp-25h]
  __int16 v54; // [rsp+A8h] [rbp-21h]

  v4 = a2;
  v6 = 0LL;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    10,
    (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  if ( (*(_DWORD *)(v4 + 176) & 0x800) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)(v4 + 200),
           v7,
           3u,
           &Handle,
           &v46,
           (PDEVICE_OBJECT *)&Object);
    if ( v9 < 0 )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        11,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
        v9);
      return v6;
    }
    v11 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v12 = IoBuildDeviceIoControlRequest(0xB01A8u, v11, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v13 = (struct _FILE_OBJECT *)v46;
    v14 = (int)v12;
    if ( v12 )
    {
      v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v46;
      Status = IofCallDriver(v11, v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          3,
          13,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          Status);
        goto LABEL_60;
      }
      v17 = (void *)Win32AllocPoolNonPaged(OutputBuffer[0], 1886417746LL);
      if ( v17 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v18 = IoBuildDeviceIoControlRequest(0xB0193u, v11, 0LL, 0, v17, OutputBuffer[0], 0, &Event, &IoStatusBlock);
        if ( v18 )
        {
          v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
          v19 = IofCallDriver(v11, v18);
          if ( v19 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v19 = IoStatusBlock.Status;
          }
          if ( v19 )
          {
            LOBYTE(v20) = 3;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              3,
              16,
              (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
              v19);
          }
          else
          {
            Caps = RIMHidGetCaps(a1, v11, v17, &v51);
            if ( Caps == 1114112 )
            {
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                v22,
                4,
                18,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                v52,
                v51);
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                v23,
                4,
                19,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                v53,
                v54);
              if ( v52 == 1 && v51 == 238 && *(_QWORD *)(a1 + 808) )
                *(_DWORD *)(v4 + 176) |= 0x1000u;
              DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n");
              v24 = *(_DWORD *)(a1 + 80);
              v25 = v52;
              v26 = v51;
              if ( v24 )
              {
                v38 = 0LL;
                v39 = *(_QWORD *)(a1 + 88);
                while ( *(_WORD *)(v39 + 4 * v38) != v51 || *(_WORD *)(v39 + 4 * v38 + 2) != v52 )
                {
                  v38 = (unsigned int)(v38 + 1);
                  if ( (unsigned int)v38 >= v24 )
                    goto LABEL_15;
                }
                *(_DWORD *)(v4 + 176) |= 0x2000u;
              }
LABEL_15:
              v27 = *(_DWORD *)(v4 + 176);
              if ( (v27 & 0x2000) != 0 || (v27 & 0x1000) != 0 || v25 != 1 )
              {
                v28 = 13;
                if ( v25 == 13 )
                {
                  v29 = 14;
                  if ( v26 == 14 )
                  {
                    if ( (*(_DWORD *)(a1 + 76) & 8) != 0 )
                    {
                      v6 = RIMAllocateHidConfigDesc(
                             a1,
                             v4,
                             (__int64)v17,
                             (__int64)&v51,
                             (__int64)OutputBuffer,
                             (__int64)v11,
                             (__int64)v13);
                      if ( v6 )
                        goto LABEL_25;
                      v29 = v51;
                      v40 = 22;
                      v28 = v52;
                    }
                    else
                    {
                      v40 = 23;
                    }
                    InternalDeviceIoControla = v29;
                    OutputBufferLength = v28;
LABEL_57:
                    WPP_RECORDER_SF_DD(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v28,
                      3,
                      v40,
                      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                      OutputBufferLength,
                      InternalDeviceIoControla);
                    goto LABEL_58;
                  }
                }
LABEL_20:
                v6 = RIMAllocateHidDesc(
                       a1,
                       v4,
                       (__int64)v17,
                       (__int64)&v51,
                       (__int64 *)OutputBuffer,
                       (__int64)v11,
                       (__int64)v13);
                if ( v6 )
                {
                  v31 = RIMSearchHidTLCInfo(v30, v52, v51);
                  v34 = (__int64)v31;
                  if ( v31 )
                  {
                    WPP_RECORDER_SF_DDq(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v32,
                      v33,
                      25,
                      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                      v32,
                      v33,
                      (char)v31);
                    goto LABEL_24;
                  }
                  v34 = RIMAllocateAndLinkHidTLCInfo();
                  if ( v34 )
                  {
                    LODWORD(v44) = v51;
                    *(_DWORD *)InternalDeviceIoControl = v52;
                    WPP_RECORDER_SF_qDD(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      3u,
                      4u,
                      0x1Bu,
                      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                      v34,
                      *(_QWORD *)InternalDeviceIoControl,
                      v44);
LABEL_24:
                    ++*(_DWORD *)(v34 + 20);
                    *(_QWORD *)(v4 + 408) = v34;
LABEL_25:
                    ObfDereferenceObject(v11);
                    ObfDereferenceObject(v13);
                    ZwClose(Handle);
                    return v6;
                  }
                  LOBYTE(v35) = 3;
                  WPP_RECORDER_SF_q(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v35,
                    3,
                    26,
                    (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                    a1);
                  RIMFreeHidDesc(v6);
                  v6 = 0LL;
LABEL_60:
                  ObfDereferenceObject(v13);
                  ZwClose(Handle);
                  ObfDereferenceObject(v11);
                  return v6;
                }
                v40 = 24;
                InternalDeviceIoControla = v51;
                OutputBufferLength = v52;
                goto LABEL_57;
              }
              if ( !v26 || v26 > 2u && (v26 <= 5u || v26 > 7u && v26 != 128) )
                goto LABEL_20;
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                1,
                4,
                20,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                1,
                v26);
            }
            else
            {
              WPP_RECORDER_SF_qD(
                WPP_GLOBAL_Control->DeviceExtension,
                v22,
                3,
                17,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                (char)v11,
                Caps);
            }
          }
        }
        else
        {
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            3,
            3,
            15,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
        }
LABEL_58:
        Win32FreePool(v17);
        goto LABEL_60;
      }
      v37 = 14;
    }
    else
    {
      v37 = 12;
    }
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      3,
      v37,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
    goto LABEL_60;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v8, a3 + 16) < 0 )
    return 0LL;
  else
    return RIMIDECreateHIDDesc(a1, v4, a3);
}

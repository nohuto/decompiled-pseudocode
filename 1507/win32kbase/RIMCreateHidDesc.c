/*
 * XREFs of RIMCreateHidDesc @ 0x1C00775D0
 * Callers:
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMFreeHidDesc @ 0x1C0075858 (RIMFreeHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0077A38 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIM @ 0x1C0077BB4 (DbgPrintRIM.c)
 *     RIMHidGetCaps @ 0x1C0077BE8 (RIMHidGetCaps.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 *     RIMSearchHidTLCInfo @ 0x1C0077E40 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0077EB8 (WPP_RECORDER_SF_qDD.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0077F94 (RIMAllocateAndLinkHidTLCInfo.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0083710 (WPP_RECORDER_SF_DDq.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00C344C (WPP_RECORDER_SF_qD.c)
 *     rimHidP_GetCollectionDescription @ 0x1C00C3658 (rimHidP_GetCollectionDescription.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  struct _DEVICE_OBJECT *v10; // rsi
  PIRP v11; // rax
  struct _FILE_OBJECT *v12; // r12
  NTSTATUS Status; // eax
  void *v14; // rbx
  PIRP v15; // rax
  NTSTATUS v16; // eax
  int Caps; // eax
  int v18; // edx
  int v19; // edx
  unsigned int v20; // edx
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // r8
  int v23; // eax
  int v24; // edx
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int16 v28; // dx
  int v29; // r8d
  __int64 v30; // rbx
  int v31; // edx
  unsigned __int16 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r10
  int v36; // r9d
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-A1h]
  ULONG OutputBufferLengtha[2]; // [rsp+28h] [rbp-A1h]
  ULONG OutputBufferLengthb[2]; // [rsp+28h] [rbp-A1h]
  char OutputBufferLengthc; // [rsp+28h] [rbp-A1h]
  char InternalDeviceIoControl; // [rsp+30h] [rbp-99h]
  HANDLE Handle; // [rsp+50h] [rbp-79h] BYREF
  PVOID v43; // [rsp+58h] [rbp-71h] BYREF
  PVOID Object; // [rsp+60h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-61h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-49h] BYREF
  ULONG OutputBuffer[4]; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int16 v48; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int16 v49; // [rsp+A2h] [rbp-27h]
  __int16 v50; // [rsp+A4h] [rbp-25h]
  __int16 v51; // [rsp+A8h] [rbp-21h]

  v6 = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xAu,
    (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  if ( (*(_DWORD *)(a2 + 184) & 0x800) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer(a2 + 208, v7, 3LL, &Handle, &v43, &Object);
    if ( v9 < 0 )
    {
      OutputBufferLength[0] = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
        *(_QWORD *)OutputBufferLength);
      return v6;
    }
    v10 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(0xB01A8u, v10, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v12 = (struct _FILE_OBJECT *)v43;
    if ( v11 )
    {
      v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v43;
      Status = IofCallDriver(v10, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        OutputBufferLengtha[0] = Status;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          *(_QWORD *)OutputBufferLengtha);
        goto LABEL_60;
      }
      v14 = (void *)Win32AllocPoolNonPaged();
      if ( v14 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v15 = IoBuildDeviceIoControlRequest(0xB0193u, v10, 0LL, 0, v14, OutputBuffer[0], 0, &Event, &IoStatusBlock);
        if ( v15 )
        {
          v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
          v16 = IofCallDriver(v10, v15);
          if ( v16 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v16 = IoStatusBlock.Status;
          }
          if ( v16 )
          {
            OutputBufferLengthb[0] = v16;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
              *(_QWORD *)OutputBufferLengthb);
          }
          else
          {
            Caps = RIMHidGetCaps(a1, v10, v14, &v48);
            if ( Caps == 1114112 )
            {
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                4,
                18,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                v49,
                v48);
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                v19,
                4,
                19,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                v50,
                v51);
              if ( v49 == 1 && v48 == 238 && *(_QWORD *)(a1 + 760) )
                *(_DWORD *)(a2 + 184) |= 0x1000u;
              DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n");
              v20 = *(_DWORD *)(a1 + 80);
              v21 = v49;
              v22 = v48;
              if ( v20 )
              {
                v34 = 0LL;
                v35 = *(_QWORD *)(a1 + 88);
                while ( *(_WORD *)(v35 + 4 * v34) != v48 || *(_WORD *)(v35 + 4 * v34 + 2) != v49 )
                {
                  v34 = (unsigned int)(v34 + 1);
                  if ( (unsigned int)v34 >= v20 )
                    goto LABEL_15;
                }
                *(_DWORD *)(a2 + 184) |= 0x2000u;
              }
LABEL_15:
              v23 = *(_DWORD *)(a2 + 184);
              if ( (v23 & 0x2000) != 0 || (v23 & 0x1000) != 0 || v21 != 1 )
              {
                v24 = 13;
                if ( v21 == 13 )
                {
                  v25 = 14;
                  if ( v22 == 14 )
                  {
                    if ( (*(_DWORD *)(a1 + 76) & 8) != 0 )
                    {
                      v6 = (__int64)RIMAllocateHidConfigDesc(
                                      a1,
                                      a2,
                                      (__int64)v14,
                                      (__int64)&v48,
                                      (__int64)OutputBuffer,
                                      (__int64)v10,
                                      (__int64)v12);
                      if ( v6 )
                        goto LABEL_25;
                      v25 = v48;
                      v36 = 22;
                      v24 = v49;
                    }
                    else
                    {
                      v36 = 23;
                    }
                    InternalDeviceIoControl = v25;
                    OutputBufferLengthc = v24;
LABEL_57:
                    WPP_RECORDER_SF_DD(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v24,
                      3,
                      v36,
                      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                      OutputBufferLengthc,
                      InternalDeviceIoControl);
                    goto LABEL_58;
                  }
                }
LABEL_20:
                v6 = RIMAllocateHidDesc(a1, a2, (__int64)v14, &v48, (__int64 *)OutputBuffer, v10, v12);
                if ( v6 )
                {
                  v27 = RIMSearchHidTLCInfo(v26, v49, v48);
                  v30 = v27;
                  if ( v27 )
                  {
                    WPP_RECORDER_SF_DDq(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v28,
                      v29,
                      25,
                      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                      v28,
                      v29,
                      v27);
                    goto LABEL_24;
                  }
                  v30 = RIMAllocateAndLinkHidTLCInfo();
                  if ( v30 )
                  {
                    LOBYTE(v31) = 3;
                    WPP_RECORDER_SF_qDD(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v31,
                      4,
                      27,
                      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                      v30,
                      v49,
                      v48);
LABEL_24:
                    ++*(_DWORD *)(v30 + 20);
                    *(_QWORD *)(a2 + 408) = v30;
LABEL_25:
                    ObfDereferenceObject(v10);
                    ObfDereferenceObject(v12);
                    ZwClose(Handle);
                    return v6;
                  }
                  LOBYTE(v31) = 3;
                  WPP_RECORDER_SF_q(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v31,
                    3,
                    26,
                    (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                    a1);
                  RIMFreeHidDesc(v6);
                  v6 = 0LL;
LABEL_60:
                  ObfDereferenceObject(v12);
                  ZwClose(Handle);
                  ObfDereferenceObject(v10);
                  return v6;
                }
                v36 = 24;
                InternalDeviceIoControl = v48;
                OutputBufferLengthc = v49;
                goto LABEL_57;
              }
              if ( !v22 || v22 > 2u && (v22 <= 5u || v22 > 7u && v22 != 128) )
                goto LABEL_20;
              WPP_RECORDER_SF_DD(
                WPP_GLOBAL_Control->DeviceExtension,
                1,
                4,
                20,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                1,
                v22);
            }
            else
            {
              WPP_RECORDER_SF_qD(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                3,
                17,
                (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
                (char)v10,
                Caps);
            }
          }
        }
        else
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xFu,
            (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
        }
LABEL_58:
        Win32FreePool();
        goto LABEL_60;
      }
      v33 = 14;
    }
    else
    {
      v33 = 12;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v33,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
    goto LABEL_60;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v8, a3 + 16) < 0 )
    return 0LL;
  else
    return RIMIDECreateHIDDesc(a1, a2, a3);
}

/*
 * XREFs of HUBMISC_ReportPnPFailureProblem @ 0x1C006B114
 * Callers:
 *     HUBHSM_ReportingErrorToPnp @ 0x1C0007880 (HUBHSM_ReportingErrorToPnp.c)
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0012020 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C000F65C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMISC_ReportPnPFailureProblem(__int64 a1, ULONG a2)
{
  wchar_t *Data; // rbp
  NTSTATUS Message; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  BYTE *Text; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int16 v12; // r9
  SIZE_T v13; // rdi
  wchar_t *PoolWithTag; // rax
  unsigned __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rcx
  wchar_t *v18; // rax
  int v19; // edi
  struct _DEVICE_OBJECT *v20; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-98h]
  ULONG Size[2]; // [rsp+28h] [rbp-90h]
  PMESSAGE_RESOURCE_ENTRY v23; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v24[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+80h] [rbp-38h]

  Data = 0LL;
  Message = -1073741595;
  v24[0] = *(_OWORD *)L"@System32\\drivers\\usbhub3.sys";
  v24[1] = *(_OWORD *)L"2\\drivers\\usbhub3.sys";
  v25 = *(_QWORD *)L"3.sys";
  v24[2] = *(_OWORD *)L"s\\usbhub3.sys";
  v26 = *(_DWORD *)L"s";
  if ( !a2 )
    goto LABEL_13;
  Message = RtlFindMessage(*(PVOID *)(g_Usbhub3DriverObject + 24), 0xBu, 0, a2, &v23);
  if ( Message < 0 )
    goto LABEL_13;
  v6 = v23->Length - 4;
  if ( v6 > 0xFFFFFFFE )
    goto LABEL_13;
  v7 = v6 >> 1;
  v8 = 0LL;
  Text = v23->Text;
  if ( v23 == (PMESSAGE_RESOURCE_ENTRY)-4LL )
    goto LABEL_11;
  if ( v7 > 0x7FFFFFFF )
    goto LABEL_11;
  v10 = v7;
  Message = 0;
  if ( !v7 )
    goto LABEL_11;
  do
  {
    if ( !*(_WORD *)Text )
      break;
    Text += 2;
    --v10;
  }
  while ( v10 );
  if ( v10 )
    v8 = v7 - v10;
  else
LABEL_11:
    Message = -1073741811;
  if ( Message < 0 )
    goto LABEL_13;
  v13 = 2 * v8 + 88;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v13, 0x68334855u);
  Data = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_13;
  LODWORD(MessageResourceEntry) = a2;
  Message = RtlStringCbPrintfW(PoolWithTag, v13, L"%s,#%d;%s", v24, MessageResourceEntry, v23->Text);
  if ( Message < 0 )
    goto LABEL_13;
  v15 = v13 >> 1;
  v16 = 0;
  if ( v15 <= 0x7FFFFFFF )
  {
    v17 = v15;
    v18 = Data;
    Message = 0;
    if ( v15 )
    {
      do
      {
        if ( !*v18 )
          break;
        ++v18;
        --v17;
      }
      while ( v17 );
      if ( v17 )
      {
        v16 = v15 - v17;
        goto LABEL_28;
      }
    }
    v16 = 0;
  }
  Message = -1073741811;
LABEL_28:
  v19 = 2 * v16;
  if ( Message < 0 )
  {
LABEL_13:
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00580E8);
    v12 = 109;
LABEL_14:
    Size[0] = Message;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 64),
      2u,
      5u,
      v12,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
      *(_QWORD *)Size);
    goto LABEL_15;
  }
  v20 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                   WdfDriverGlobals,
                                   a1);
  Message = IoSetDevicePropertyData(v20, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, v19 + 2, Data);
  if ( Message < 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C00580E8);
    v12 = 108;
    goto LABEL_14;
  }
LABEL_15:
  if ( Data )
    ExFreePoolWithTag(Data, 0x68334855u);
}

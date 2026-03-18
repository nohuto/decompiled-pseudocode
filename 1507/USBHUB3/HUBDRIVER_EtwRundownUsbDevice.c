/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x1C0061690
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0061B7C (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     Template_ppqzznhCR6zcqQ6qqqqqqqq @ 0x1C0001300 (Template_ppqzznhCR6zcqQ6qqqqqqqq.c)
 *     HUBUCX_GetControllerInfo @ 0x1C001D040 (HUBUCX_GetControllerInfo.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0026BD4 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  GUID *v5; // rcx
  PVOID PoolWithTag; // rax
  void *v7; // rsi
  void *v8; // r14
  PVOID v9; // rax
  unsigned __int8 v10; // bl
  char v11; // r10
  char v12; // r11
  __int64 v13; // r12
  char *v14; // rdx
  __int64 v15; // r8
  unsigned __int16 *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // [rsp+40h] [rbp-100h]
  unsigned __int8 v22[4]; // [rsp+C0h] [rbp-80h] BYREF
  __int16 v23; // [rsp+C4h] [rbp-7Ch] BYREF
  _WORD v24[2]; // [rsp+C8h] [rbp-78h] BYREF
  int v25; // [rsp+CCh] [rbp-74h]
  __int64 v26; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-68h] BYREF
  const wchar_t *v28; // [rsp+E0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-48h] BYREF
  unsigned __int16 v31; // [rsp+100h] [rbp-40h] BYREF
  void *Src; // [rsp+108h] [rbp-38h]
  const GUID *v33; // [rsp+110h] [rbp-30h]
  __int64 v34; // [rsp+118h] [rbp-28h]
  _QWORD v35[7]; // [rsp+120h] [rbp-20h] BYREF
  int v36; // [rsp+158h] [rbp+18h] BYREF
  char v37; // [rsp+15Ch] [rbp+1Ch] BYREF

  v33 = a1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00570C0);
  memset(v35, 0, sizeof(v35));
  LODWORD(v35[0]) = 56;
  v35[3] = 0x100000001LL;
  v35[4] = a2;
  v27 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         v35,
         &v27) < 0 )
    v28 = 0LL;
  else
    v28 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v27,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (*(_DWORD *)(v4 + 1616) & 2) != 0 )
    v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v30, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v30,
      &DestinationString);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, DestinationString.Length + 2LL, 0x64334855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v7, DestinationString.Buffer, DestinationString.Length);
    }
  }
  memset(v35, 0, sizeof(v35));
  v35[3] = 0x100000001LL;
  v8 = 0LL;
  LODWORD(v35[0]) = 56;
  v35[4] = a2;
  v26 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v35,
         &v26) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v26) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v26,
      &v31);
    v9 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v31 + 2LL, 0x64334855u);
    v8 = v9;
    if ( v9 )
    {
      memset(v9, 0, v31 + 2LL);
      memmove(v8, Src, v31);
    }
  }
  if ( (int)HUBUCX_GetControllerInfo(*(_QWORD *)(v3 + 16), (__int64)&v23, (__int64)v24, (__int64)v22) >= 0 )
  {
    v10 = v22[0];
    v12 = v24[0];
    v11 = v23;
  }
  else
  {
    v10 = 0;
    v23 = 0;
    v22[0] = 0;
    v11 = 0;
    v12 = 0;
    v24[0] = 0;
  }
  v13 = *(_QWORD *)(v3 + 16);
  v14 = &v37;
  v15 = 5LL;
  v16 = (unsigned __int16 *)(v13 + 282);
  v36 = *(unsigned __int16 *)(v13 + 280);
  do
  {
    v17 = *v16++;
    *(_DWORD *)v14 = v17;
    v14 += 4;
    --v15;
  }
  while ( v15 );
  v18 = *(_BYTE *)(*(_QWORD *)(v3 + 16) + 200LL);
  if ( v18 < 6u )
    *(&v36 + v18) = *(unsigned __int16 *)(v3 + 48);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
  {
    v19 = *(_QWORD *)(v3 + 24);
    v34 = v19;
    v20 = *(_QWORD *)(v19 + 2000);
    if ( v20 )
      v25 = *(unsigned __int16 *)(v20 + 2);
    else
      v25 = 0;
    Template_ppqzznhCR6zcqQ6qqqqqqqq(
      v10,
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION,
      v33,
      *(_QWORD *)(*(_QWORD *)(v3 + 16) + 208LL),
      *(_QWORD *)(v34 + 24),
      *(_WORD *)(v3 + 48),
      v28,
      (const wchar_t *)v7,
      v21,
      v19 + 1972,
      v25,
      v20,
      (const wchar_t *)v8,
      (*(_BYTE *)(v3 + 32) & 1) == 0,
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + 200LL) + 1,
      (__int64)&v36,
      *(_DWORD *)(v13 + 264),
      *(_DWORD *)(v13 + 268),
      *(_DWORD *)(v13 + 272),
      v11,
      v12,
      v10,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v19 + 2208));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v30 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v27 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
}

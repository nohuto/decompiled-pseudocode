/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x1C0061914
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0061EC4 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C0001300 (Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0027824 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035000 (memmove.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  GUID *v5; // rcx
  PVOID PoolWithTag; // rax
  void *v7; // r14
  void *v8; // r15
  PVOID v9; // rax
  __int64 v10; // rcx
  char *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  unsigned __int16 *v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // dl
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rax
  int v20; // r12d
  int v21; // esi
  int v22; // eax
  __int64 v23; // rax
  char v24; // bl
  char v25; // r12
  const char *v26; // r8
  const char *v27; // rdx
  const char *v28; // rcx
  const char *v29; // rax
  __int64 v30; // r9
  __int64 v31; // [rsp+40h] [rbp-140h]
  int v32; // [rsp+100h] [rbp-80h]
  char v33; // [rsp+104h] [rbp-7Ch]
  int v34; // [rsp+108h] [rbp-78h]
  char v35; // [rsp+10Ch] [rbp-74h]
  int v36; // [rsp+110h] [rbp-70h]
  __int16 v37; // [rsp+114h] [rbp-6Ch]
  unsigned __int16 v38; // [rsp+118h] [rbp-68h]
  int v39; // [rsp+11Ch] [rbp-64h]
  __int64 v40; // [rsp+120h] [rbp-60h] BYREF
  __int64 v41; // [rsp+128h] [rbp-58h] BYREF
  __int64 v42; // [rsp+130h] [rbp-50h] BYREF
  const wchar_t *v43; // [rsp+138h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+140h] [rbp-40h] BYREF
  unsigned __int16 v45; // [rsp+150h] [rbp-30h] BYREF
  void *Src; // [rsp+158h] [rbp-28h]
  __int64 v47; // [rsp+160h] [rbp-20h]
  __int64 v48; // [rsp+168h] [rbp-18h]
  const GUID *v49; // [rsp+170h] [rbp-10h]
  __int64 v50; // [rsp+178h] [rbp-8h]
  _QWORD v51[7]; // [rsp+180h] [rbp+0h] BYREF
  int v52; // [rsp+1B8h] [rbp+38h] BYREF
  char v53; // [rsp+1BCh] [rbp+3Ch] BYREF

  v49 = a1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0057118);
  memset(v51, 0, sizeof(v51));
  LODWORD(v51[0]) = 56;
  v51[3] = 0x100000001LL;
  v51[4] = a2;
  v41 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         v51,
         &v41) < 0 )
    v43 = 0LL;
  else
    v43 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v41,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (*(_DWORD *)(v4 + 1616) & 2) != 0 )
    v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v42, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v42,
      &DestinationString);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, DestinationString.Length + 2LL, 0x64334855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v7, DestinationString.Buffer, DestinationString.Length);
    }
  }
  memset(v51, 0, sizeof(v51));
  LODWORD(v51[0]) = 56;
  v51[3] = 0x100000001LL;
  v8 = 0LL;
  v51[4] = a2;
  v40 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v51,
         &v40) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v40) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v40,
      &v45);
    v9 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v45 + 2LL, 0x64334855u);
    v8 = v9;
    if ( v9 )
    {
      memset(v9, 0, v45 + 2LL);
      memmove(v8, Src, v45);
    }
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = &v53;
  v12 = 5LL;
  v13 = *(unsigned __int16 *)(v10 + 296);
  v14 = (unsigned __int16 *)(v10 + 298);
  v52 = v13;
  do
  {
    v15 = *v14++;
    *(_DWORD *)v11 = v15;
    v11 += 4;
    --v12;
  }
  while ( v12 );
  v16 = *(_BYTE *)(*(_QWORD *)(v3 + 16) + 216LL);
  if ( v16 < 6u )
    *(&v52 + v16) = *(unsigned __int16 *)(v3 + 48);
  v17 = *(_QWORD *)(v3 + 16);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 1) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 24);
    v50 = v18;
    v19 = *(_QWORD *)(v18 + 8);
    v48 = v19;
    v20 = *(_DWORD *)(v19 + 204) >> 1;
    if ( (*(_DWORD *)(v19 + 204) & 2) != 0 )
      v33 = *(_BYTE *)(v19 + 1341);
    else
      v33 = 0;
    v21 = *(_DWORD *)(v17 + 152);
    if ( v21 == 1 )
      v37 = *(_WORD *)(v17 + 164);
    else
      LOBYTE(v37) = 0;
    LOBYTE(v22) = -1;
    LOBYTE(v39) = -1;
    if ( v21 == 1 )
      v22 = *(_DWORD *)(v17 + 160);
    v35 = v22;
    if ( v21 == 1 )
    {
      v39 = *(_DWORD *)(v17 + 156);
      v32 = *(_DWORD *)(v17 + 176);
    }
    else
    {
      LOBYTE(v32) = 0;
    }
    if ( v21 == 1 )
      v34 = *(_DWORD *)(v17 + 172);
    else
      LOBYTE(v34) = 0;
    if ( v21 == 1 )
      v36 = *(_DWORD *)(v17 + 168);
    else
      LOBYTE(v36) = 0;
    v23 = *(_QWORD *)(v18 + 2000);
    v47 = v23;
    if ( v23 )
      v38 = *(_WORD *)(v23 + 2);
    else
      v38 = 0;
    v24 = *(_BYTE *)(v17 + 216);
    v25 = v20 & 1;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( v21 == 2 )
    {
      v26 = (const char *)(v17 + 166);
      v27 = (const char *)(v17 + 161);
    }
    v29 = (const char *)(v17 + 156);
    v30 = *(_QWORD *)(v17 + 224);
    if ( v21 == 2 )
      v28 = v29;
    Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
      v50,
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V1,
      v49,
      v30,
      *(_QWORD *)(v50 + 24),
      *(_WORD *)(v3 + 48),
      v43,
      (const wchar_t *)v7,
      v31,
      v18 + 1972,
      v38,
      v47,
      (const wchar_t *)v8,
      (*(_BYTE *)(v3 + 32) & 1) == 0,
      v24 + 1,
      (__int64)&v52,
      v36,
      v34,
      v32,
      v39,
      v35,
      v37,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v50 + 2208),
      v21,
      v28,
      v27,
      v26,
      v25,
      v33,
      *(_QWORD *)(v48 + 1416));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v42 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v42,
      v12,
      v17);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v40 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v40,
      v12,
      v17);
  if ( v41 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v41,
      v12,
      v17);
}

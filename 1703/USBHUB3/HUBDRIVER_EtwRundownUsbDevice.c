/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x1C0065940
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0065EF0 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C0001334 (Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002A0E8 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038200 (memmove.c)
 *     memset @ 0x1C0038540 (memset.c)
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
  unsigned int v20; // ecx
  int v21; // esi
  int v22; // eax
  __int64 v23; // r12
  char v24; // bl
  const char *v25; // r8
  unsigned int v26; // ecx
  const char *v27; // rdx
  char v28; // r10
  const char *v29; // rcx
  const char *v30; // rax
  __int64 v31; // r9
  __int64 v32; // [rsp+40h] [rbp-140h]
  char v33; // [rsp+100h] [rbp-80h]
  __int16 v34; // [rsp+104h] [rbp-7Ch]
  char v35; // [rsp+108h] [rbp-78h]
  int v36; // [rsp+10Ch] [rbp-74h]
  int v37; // [rsp+110h] [rbp-70h]
  int v38; // [rsp+114h] [rbp-6Ch]
  int v39; // [rsp+118h] [rbp-68h]
  unsigned __int16 v40; // [rsp+11Ch] [rbp-64h]
  __int64 v41; // [rsp+120h] [rbp-60h] BYREF
  unsigned int v42; // [rsp+128h] [rbp-58h]
  __int64 v43; // [rsp+130h] [rbp-50h] BYREF
  const wchar_t *v44; // [rsp+138h] [rbp-48h]
  __int64 v45; // [rsp+140h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+148h] [rbp-38h] BYREF
  unsigned __int16 v47; // [rsp+158h] [rbp-28h] BYREF
  void *Src; // [rsp+160h] [rbp-20h]
  __int64 v49; // [rsp+168h] [rbp-18h]
  __int64 v50; // [rsp+170h] [rbp-10h]
  const GUID *v51; // [rsp+178h] [rbp-8h]
  _QWORD v52[7]; // [rsp+180h] [rbp+0h] BYREF
  int v53; // [rsp+1B8h] [rbp+38h] BYREF
  char v54; // [rsp+1BCh] [rbp+3Ch] BYREF

  v51 = a1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C005B070);
  memset(v52, 0, sizeof(v52));
  LODWORD(v52[0]) = 56;
  v52[3] = 0x100000001LL;
  v52[4] = a2;
  v43 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         v52,
         &v43) < 0 )
    v44 = 0LL;
  else
    v44 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v43,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (*(_DWORD *)(v4 + 1616) & 2) != 0 )
    v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v45, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v45,
      &DestinationString);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, DestinationString.Length + 2LL, 0x64334855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v7, DestinationString.Buffer, DestinationString.Length);
    }
  }
  memset(v52, 0, sizeof(v52));
  LODWORD(v52[0]) = 56;
  v52[3] = 0x100000001LL;
  v8 = 0LL;
  v52[4] = a2;
  v41 = 0LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         v52,
         &v41) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v41) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v41,
      &v47);
    v9 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v47 + 2LL, 0x64334855u);
    v8 = v9;
    if ( v9 )
    {
      memset(v9, 0, v47 + 2LL);
      memmove(v8, Src, v47);
    }
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = &v54;
  v12 = 5LL;
  v13 = *(unsigned __int16 *)(v10 + 312);
  v14 = (unsigned __int16 *)(v10 + 314);
  v53 = v13;
  do
  {
    v15 = *v14++;
    *(_DWORD *)v11 = v15;
    v11 += 4;
    --v12;
  }
  while ( v12 );
  v16 = *(_BYTE *)(*(_QWORD *)(v3 + 16) + 232LL);
  if ( v16 < 6u )
    *(&v53 + v16) = *(unsigned __int16 *)(v3 + 48);
  v17 = *(_QWORD *)(v3 + 16);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 24);
    v50 = v18;
    v19 = *(_QWORD *)(v18 + 8);
    v49 = v19;
    v20 = *(_DWORD *)(v19 + 204);
    if ( (v20 & 2) != 0 )
      v33 = *(_BYTE *)(v19 + 1341);
    else
      v33 = 0;
    v21 = *(_DWORD *)(v17 + 160);
    if ( v21 == 1 )
      v34 = *(_WORD *)(v17 + 176);
    else
      LOBYTE(v34) = 0;
    LOBYTE(v22) = -1;
    LOBYTE(v36) = -1;
    if ( v21 == 1 )
      v22 = *(_DWORD *)(v17 + 172);
    v35 = v22;
    if ( v21 == 1 )
    {
      v36 = *(_DWORD *)(v17 + 168);
      v37 = *(_DWORD *)(v17 + 188);
    }
    else
    {
      LOBYTE(v37) = 0;
    }
    if ( v21 == 1 )
      v38 = *(_DWORD *)(v17 + 184);
    else
      LOBYTE(v38) = 0;
    if ( v21 == 1 )
      v39 = *(_DWORD *)(v17 + 180);
    else
      LOBYTE(v39) = 0;
    v23 = *(_QWORD *)(v18 + 2000);
    if ( v23 )
      v40 = *(_WORD *)(v23 + 2);
    else
      v40 = 0;
    v24 = *(_BYTE *)(v17 + 232);
    v25 = 0LL;
    v26 = v20 >> 1;
    v27 = 0LL;
    LOBYTE(v26) = v26 & 1;
    v28 = ~*(_BYTE *)(v3 + 32);
    v42 = v26;
    v29 = 0LL;
    if ( v21 == 2 )
    {
      v25 = (const char *)(v17 + 178);
      v27 = (const char *)(v17 + 173);
    }
    v30 = (const char *)(v17 + 168);
    v31 = *(_QWORD *)(v17 + 240);
    if ( v21 == 2 )
      v29 = v30;
    Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
      v50,
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V1,
      v51,
      v31,
      *(_QWORD *)(v50 + 24),
      *(_WORD *)(v3 + 48),
      v44,
      (const wchar_t *)v7,
      v32,
      v18 + 1972,
      v40,
      v23,
      (const wchar_t *)v8,
      v28 & 1,
      v24 + 1,
      (__int64)&v53,
      v39,
      v38,
      v37,
      v36,
      v35,
      v34,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v50 + 2208),
      v21,
      v29,
      v27,
      v25,
      v42,
      v33,
      *(_QWORD *)(v49 + 1416));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v45 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v45,
      v12,
      v17);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v41 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v41,
      v12,
      v17);
  if ( v43 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      v43,
      v12,
      v17);
}

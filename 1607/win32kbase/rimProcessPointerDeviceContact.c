/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C00DE1A8
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00D2050 (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C00D48CC (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C00DDA20 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C00DDD00 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C00E1204 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00E1334 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00E150C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        _DWORD *a7)
{
  __int64 v8; // r14
  __int64 v10; // rdi
  struct _HIDP_PREPARSED_DATA *v12; // rbx
  _DWORD *v13; // r12
  _DWORD *active; // rax
  int v15; // edx
  __int64 v16; // rbx
  int v17; // edi
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  PalmTelemetry *QuadPart; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r10d
  unsigned __int16 v26; // [rsp+20h] [rbp-61h]
  __int64 v27; // [rsp+28h] [rbp-59h]
  __int64 v28; // [rsp+30h] [rbp-51h]
  __int64 v29; // [rsp+38h] [rbp-49h]
  int v30; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-Dh] BYREF
  unsigned int v32; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v33; // [rsp+7Ch] [rbp-5h] BYREF
  __int64 v34[8]; // [rsp+80h] [rbp-1h] BYREF
  int v35; // [rsp+D8h] [rbp+57h] BYREF
  char *v36; // [rsp+E0h] [rbp+5Fh]

  v36 = a3;
  v8 = *(_QWORD *)(a2 + 480);
  v10 = a2;
  v12 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  v35 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v34[0] = 0LL;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    19,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  v13 = a7;
  v26 = a5;
  *a7 = 0;
  active = (_DWORD *)rimFindOrCreateActiveContact(v8, v12, a3, a4, v26, &v35);
  v16 = (__int64)active;
  if ( active )
  {
    v18 = v35;
    if ( v35 )
    {
      if ( *(_DWORD *)(v8 + 1568) == 1 )
        RIMAddToActiveDevices(a1, v8);
    }
    else if ( (active[580] & 2) != 0 )
    {
      LODWORD(v27) = *active;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x15u,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
        v27);
      v17 = -1073741823;
      goto LABEL_10;
    }
    v17 = rimPopulateContactFrameData((__int64)a1, v10, v36, a4, a5, a6, v16, v13, &v33, &v32, &v31, &v30, v34);
    if ( v17 >= 0 )
    {
      if ( *v13 )
      {
        LOBYTE(v19) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          5,
          23,
          (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
      }
      else
      {
        if ( v18 )
        {
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(v16 + 2456);
          *(_QWORD *)(v16 + 56) = *(_QWORD *)(v16 + 2472);
          *(_QWORD *)(v16 + 64) = *(_QWORD *)(v16 + 2432);
        }
        QuadPart = (PalmTelemetry *)a1[120].QuadPart;
        if ( QuadPart )
          PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v8, (struct tagHPD_CONTACT *)v16, v18);
        rimApplyPointerDevicePolicies(v8, v19, v20, v16, v18, v33, v32, v31, v30, v34[0]);
        *(_QWORD *)(v16 + 72) = *(_QWORD *)(v16 + 2432);
        if ( !*(_DWORD *)(v16 + 52) && (*(_DWORD *)(v16 + 2620) & 4) == 0 && (*(_DWORD *)(v16 + 2404) & 4) != 0 )
        {
          v18 = v35;
          *(_DWORD *)(v16 + 52) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        }
        if ( !*(_DWORD *)(v16 + 8)
          || (*(_DWORD *)(v16 + 2620) & 2) != 0
          || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v16) )
        {
          *(_DWORD *)(v16 + 2320) |= 1u;
        }
        else
        {
          LODWORD(v29) = v25;
          LODWORD(v28) = v24;
          LODWORD(v27) = *(_DWORD *)v16;
          WPP_RECORDER_SF_dDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v23,
            v24,
            0x18u,
            (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
            v27,
            v28,
            v29);
        }
      }
    }
    else
    {
      LODWORD(v27) = *(_DWORD *)v16;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        5u,
        0x16u,
        (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
        v27);
    }
    if ( v17 >= 0 )
    {
      if ( !*v13 )
      {
        *(_DWORD *)(v16 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_11;
      }
LABEL_31:
      RIMCmDeactivateContact(v8, v16);
      goto LABEL_11;
    }
    if ( v18 )
      goto LABEL_31;
LABEL_10:
    *(_DWORD *)(v16 + 2320) &= 0xFFFFFFF8;
    memset((void *)(v16 + 2328), 0, 0xD8uLL);
    goto LABEL_11;
  }
  LOBYTE(v15) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    5,
    20,
    (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids);
  v17 = -1073741823;
LABEL_11:
  LODWORD(v27) = v17;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x19u,
           (__int64)&WPP_8981bbd0d82c39b705fac429922c1527_Traceguids,
           v27);
}

/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0061850
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0061670 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005FC70 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0064A40 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     _TlgCreateWsz @ 0x1C00B3BE4 (_TlgCreateWsz.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        int a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  unsigned int v12; // r13d
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  struct _UNICODE_STRING *v15; // rcx
  unsigned __int16 v16; // r8
  void *v17; // r9
  char v18; // cl
  int v19; // ecx
  int v20; // eax
  unsigned __int16 *v21; // rdx
  WORD dmSize; // cx
  char *v23; // rdx
  unsigned int v24; // r9d
  const GUID *v25; // r9
  LPCGUID v27; // r9
  char v28; // [rsp+40h] [rbp-268h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-264h]
  unsigned __int16 *v30[2]; // [rsp+50h] [rbp-258h]
  BOOL v31; // [rsp+60h] [rbp-248h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-244h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-240h] BYREF
  int v34; // [rsp+6Ch] [rbp-23Ch] BYREF
  int v35; // [rsp+70h] [rbp-238h] BYREF
  int v36; // [rsp+74h] [rbp-234h] BYREF
  int v37; // [rsp+78h] [rbp-230h] BYREF
  int v38; // [rsp+7Ch] [rbp-22Ch] BYREF
  int v39; // [rsp+80h] [rbp-228h] BYREF
  int v40; // [rsp+84h] [rbp-224h] BYREF
  int v41; // [rsp+88h] [rbp-220h] BYREF
  int v42; // [rsp+8Ch] [rbp-21Ch] BYREF
  int v43; // [rsp+90h] [rbp-218h] BYREF
  _DWORD *v44; // [rsp+98h] [rbp-210h]
  struct _devicemodeW *v45; // [rsp+A0h] [rbp-208h]
  __int64 v46; // [rsp+A8h] [rbp-200h] BYREF
  void *v47; // [rsp+B0h] [rbp-1F8h]
  __int64 v48; // [rsp+B8h] [rbp-1F0h] BYREF
  int v49; // [rsp+C0h] [rbp-1E8h]
  __int64 v50; // [rsp+C8h] [rbp-1E0h]
  struct _UNICODE_STRING *v51; // [rsp+D0h] [rbp-1D8h]
  void *v52; // [rsp+D8h] [rbp-1D0h]
  __int64 v53; // [rsp+E0h] [rbp-1C8h]
  struct _UNICODE_STRING v54; // [rsp+F0h] [rbp-1B8h]
  GUID ActivityId; // [rsp+100h] [rbp-1A8h] BYREF
  EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp-198h] BYREF
  int *v57; // [rsp+130h] [rbp-178h]
  __int64 v58; // [rsp+138h] [rbp-170h]
  int *v59; // [rsp+140h] [rbp-168h]
  __int64 v60; // [rsp+148h] [rbp-160h]
  int *v61; // [rsp+150h] [rbp-158h]
  __int64 v62; // [rsp+158h] [rbp-150h]
  int *v63; // [rsp+160h] [rbp-148h]
  __int64 v64; // [rsp+168h] [rbp-140h]
  int *v65; // [rsp+170h] [rbp-138h]
  __int64 v66; // [rsp+178h] [rbp-130h]
  int *v67; // [rsp+180h] [rbp-128h]
  __int64 v68; // [rsp+188h] [rbp-120h]
  int *v69; // [rsp+190h] [rbp-118h]
  __int64 v70; // [rsp+198h] [rbp-110h]
  int *v71; // [rsp+1A0h] [rbp-108h]
  __int64 v72; // [rsp+1A8h] [rbp-100h]
  int *v73; // [rsp+1B0h] [rbp-F8h]
  __int64 v74; // [rsp+1B8h] [rbp-F0h]
  int *v75; // [rsp+1C0h] [rbp-E8h]
  __int64 v76; // [rsp+1C8h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1F0h] [rbp-B8h] BYREF
  BOOL *v79; // [rsp+200h] [rbp-A8h]
  __int64 v80; // [rsp+208h] [rbp-A0h]
  unsigned int *v81; // [rsp+210h] [rbp-98h]
  __int64 v82; // [rsp+218h] [rbp-90h]
  int *v83; // [rsp+220h] [rbp-88h]
  __int64 v84; // [rsp+228h] [rbp-80h]
  __int64 *v85; // [rsp+230h] [rbp-78h]
  __int64 v86; // [rsp+238h] [rbp-70h]
  __int64 *v87; // [rsp+240h] [rbp-68h]
  __int64 v88; // [rsp+248h] [rbp-60h]
  char *v89; // [rsp+250h] [rbp-58h]
  __int64 v90; // [rsp+258h] [rbp-50h]

  v51 = a1;
  v45 = a2;
  v47 = a5;
  v52 = a5;
  v48 = 0LL;
  LOWORD(v30[0]) = 0;
  *(unsigned __int16 **)((char *)v30 + 2) = 0LL;
  *(_DWORD *)((char *)&v30[1] + 2) = 0;
  HIWORD(v30[1]) = 0;
  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  v50 = MEMORY[0xFFFFF78000000320];
  v46 = v50 * KeQueryTimeIncrement();
  v12 = xxxUserChangeDisplaySettingsInternal(a1, a2, a3, a4, a5, a6, a7, a8);
  v29 = v12;
  v13 = Win32AllocPoolZInit(0x90uLL);
  v14 = v13;
  v44 = v13;
  if ( v13 )
  {
    *v13 = 4;
    v13[1] = 144;
    v13[10] = 0;
    *((_QWORD *)v13 + 4) = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    if ( a1 )
    {
      if ( a6 == UserMode )
      {
        v15 = a1;
        if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > W32UserProbeAddress )
          v15 = (struct _UNICODE_STRING *)W32UserProbeAddress;
        v54 = *v15;
        *(struct _UNICODE_STRING *)v30 = v54;
      }
      else
      {
        *(struct _UNICODE_STRING *)v30 = *a1;
      }
    }
    v16 = (unsigned __int16)v30[0];
    v17 = v47;
    *((_QWORD *)v13 + 7) = v46;
    v13[35] ^= (v13[35] ^ (a2 != 0LL)) & 1;
    if ( !a1 || !v16 || (v18 = 1, !v30[1]) )
      v18 = 0;
    v19 = v13[35] ^ ((unsigned __int8)v13[35] ^ (unsigned __int8)(2 * v18)) & 2;
    v20 = v19 ^ (v19 ^ (4 * (a6 == KernelMode))) & 4 ^ ((unsigned __int8)(v19 ^ (v19 ^ (4 * (a6 == KernelMode))) & 4) ^ (unsigned __int8)(8 * (v17 == 0LL))) & 8;
    v14[35] = v20;
    v14[12] = a4;
    v14[13] = v12;
    if ( (v20 & 2) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( v16 )
        {
          v21 = (unsigned __int16 *)((char *)v30[1] + v16);
          if ( (unsigned __int64)v21 > W32UserProbeAddress || v21 < v30[1] )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      v49 = RtlStringCbCopyW((char *)v14 + 108, 0x20uLL, (char *)v30[1]);
      if ( v49 < 0 )
        *((_WORD *)v14 + 54) = 0;
    }
    if ( (v14[35] & 1) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        dmSize = a2->dmSize;
        if ( dmSize )
        {
          v23 = (char *)a2 + dmSize;
          if ( (unsigned __int64)v23 > W32UserProbeAddress || v23 < (char *)a2 )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      else
      {
        dmSize = a2->dmSize;
      }
      if ( dmSize >= 0xB4u )
      {
        v14[16] = a2->dmFields;
        *(_QWORD *)(v14 + 17) = *(_QWORD *)&a2->dmOrientation;
        v14[19] = a2->dmBitsPerPel;
        v14[20] = a2->dmPelsWidth;
        v14[21] = a2->dmPelsHeight;
        v14[22] = a2->dmDisplayFrequency;
        v14[23] = a2->dmDriverExtra;
        v14[24] = a2->dmDisplayOrientation;
        v14[25] = a2->dmDisplayFixedOutput;
        v14[26] = a2->dmDisplayFlags;
      }
    }
    DrvDxgkWriteDiagEntry(v14);
    v53 = MEMORY[0xFFFFF78000000320];
    v48 = v53 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v24 = hProvider;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000004uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)v14 + 54);
      v31 = a2 == 0LL;
      v79 = &v31;
      v80 = 4LL;
      v32 = a4;
      v81 = &v32;
      v82 = 4LL;
      v33 = v12;
      v83 = (int *)&v33;
      v84 = 4LL;
      v85 = &v46;
      v86 = 8LL;
      v87 = &v48;
      v88 = 8LL;
      v28 = a6;
      v89 = &v28;
      v90 = 1LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0103BE6, &ActivityId, v27, 9u, &pData);
      v24 = hProvider;
    }
    if ( (v14[35] & 1) != 0 && v24 > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000004uLL) )
    {
      v34 = v14[16];
      v57 = &v34;
      v58 = 4LL;
      v35 = v14[17];
      v59 = &v35;
      v60 = 4LL;
      v36 = v14[18];
      v61 = &v36;
      v62 = 4LL;
      v37 = v14[20];
      v63 = &v37;
      v64 = 4LL;
      v38 = v14[21];
      v65 = &v38;
      v66 = 4LL;
      v39 = v14[22];
      v67 = &v39;
      v68 = 4LL;
      v40 = v14[23];
      v69 = &v40;
      v70 = 4LL;
      v41 = v14[24];
      v71 = &v41;
      v72 = 4LL;
      v42 = v14[25];
      v73 = &v42;
      v74 = 4LL;
      v43 = v14[26];
      v75 = &v43;
      v76 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0103B59, &ActivityId, v25, 0xCu, &v56);
    }
    Win32FreePool();
  }
  return v12;
}

/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0059800
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0059F90 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C005A2E0 (_TlgCreateWsz.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005A318 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        int a7)
{
  unsigned int v11; // r13d
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  struct _UNICODE_STRING *v14; // rcx
  unsigned __int16 v15; // r8
  void *v16; // r9
  char v17; // cl
  int v18; // ecx
  int v19; // eax
  unsigned __int16 *v20; // rdx
  WORD dmSize; // cx
  char *v22; // rdx
  unsigned int v23; // r9d
  LPCGUID v24; // r9
  const GUID *v25; // r9
  char v27; // [rsp+40h] [rbp-268h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-264h]
  unsigned __int16 *v29[2]; // [rsp+50h] [rbp-258h]
  int v30; // [rsp+60h] [rbp-248h] BYREF
  _DWORD *v31; // [rsp+68h] [rbp-240h]
  struct _devicemodeW *v32; // [rsp+70h] [rbp-238h]
  int v33; // [rsp+78h] [rbp-230h] BYREF
  __int64 v34; // [rsp+80h] [rbp-228h] BYREF
  int v35; // [rsp+88h] [rbp-220h] BYREF
  int v36; // [rsp+8Ch] [rbp-21Ch] BYREF
  BOOL v37; // [rsp+90h] [rbp-218h] BYREF
  int v38; // [rsp+94h] [rbp-214h] BYREF
  unsigned int v39; // [rsp+98h] [rbp-210h] BYREF
  int v40; // [rsp+9Ch] [rbp-20Ch] BYREF
  int v41; // [rsp+A0h] [rbp-208h] BYREF
  int v42; // [rsp+A4h] [rbp-204h] BYREF
  int v43; // [rsp+A8h] [rbp-200h] BYREF
  int v44; // [rsp+ACh] [rbp-1FCh] BYREF
  int v45; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-1F0h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-1E8h]
  int v48; // [rsp+C8h] [rbp-1E0h]
  void *v49; // [rsp+D0h] [rbp-1D8h]
  __int64 v50; // [rsp+D8h] [rbp-1D0h]
  struct _UNICODE_STRING *v51; // [rsp+E0h] [rbp-1C8h]
  void *v52; // [rsp+E8h] [rbp-1C0h]
  struct _UNICODE_STRING v53; // [rsp+F0h] [rbp-1B8h]
  GUID ActivityId; // [rsp+100h] [rbp-1A8h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+110h] [rbp-198h] BYREF
  int *v56; // [rsp+130h] [rbp-178h]
  __int64 v57; // [rsp+138h] [rbp-170h]
  int *v58; // [rsp+140h] [rbp-168h]
  __int64 v59; // [rsp+148h] [rbp-160h]
  int *v60; // [rsp+150h] [rbp-158h]
  __int64 v61; // [rsp+158h] [rbp-150h]
  int *v62; // [rsp+160h] [rbp-148h]
  __int64 v63; // [rsp+168h] [rbp-140h]
  int *v64; // [rsp+170h] [rbp-138h]
  __int64 v65; // [rsp+178h] [rbp-130h]
  int *v66; // [rsp+180h] [rbp-128h]
  __int64 v67; // [rsp+188h] [rbp-120h]
  int *v68; // [rsp+190h] [rbp-118h]
  __int64 v69; // [rsp+198h] [rbp-110h]
  int *v70; // [rsp+1A0h] [rbp-108h]
  __int64 v71; // [rsp+1A8h] [rbp-100h]
  int *v72; // [rsp+1B0h] [rbp-F8h]
  __int64 v73; // [rsp+1B8h] [rbp-F0h]
  int *v74; // [rsp+1C0h] [rbp-E8h]
  __int64 v75; // [rsp+1C8h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1F0h] [rbp-B8h] BYREF
  BOOL *v78; // [rsp+200h] [rbp-A8h]
  __int64 v79; // [rsp+208h] [rbp-A0h]
  int *v80; // [rsp+210h] [rbp-98h]
  __int64 v81; // [rsp+218h] [rbp-90h]
  int *v82; // [rsp+220h] [rbp-88h]
  __int64 v83; // [rsp+228h] [rbp-80h]
  __int64 *v84; // [rsp+230h] [rbp-78h]
  __int64 v85; // [rsp+238h] [rbp-70h]
  __int64 *v86; // [rsp+240h] [rbp-68h]
  __int64 v87; // [rsp+248h] [rbp-60h]
  char *v88; // [rsp+250h] [rbp-58h]
  __int64 v89; // [rsp+258h] [rbp-50h]

  v51 = a1;
  v32 = a2;
  v49 = a5;
  v52 = a5;
  v46 = 0LL;
  LOWORD(v29[0]) = 0;
  *(unsigned __int16 **)((char *)v29 + 2) = 0LL;
  *(_DWORD *)((char *)&v29[1] + 2) = 0;
  HIWORD(v29[1]) = 0;
  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  v50 = MEMORY[0xFFFFF78000000320];
  v34 = v50 * KeQueryTimeIncrement();
  v11 = xxxUserChangeDisplaySettingsInternal(a1, a2, a3, a4, a5, a6, a7);
  v28 = v11;
  v12 = Win32AllocPoolZInit(0x90uLL);
  v13 = v12;
  v31 = v12;
  if ( v12 )
  {
    *v12 = 4;
    v12[1] = 144;
    v12[10] = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    if ( a1 )
    {
      if ( a6 == UserMode )
      {
        v14 = a1;
        if ( &a1[1] < a1 || &a1[1] > W32UserProbeAddress )
          v14 = (struct _UNICODE_STRING *)W32UserProbeAddress;
        v53 = *v14;
        *(struct _UNICODE_STRING *)v29 = v53;
      }
      else
      {
        *(struct _UNICODE_STRING *)v29 = *a1;
      }
    }
    v15 = (unsigned __int16)v29[0];
    v16 = v49;
    *((_QWORD *)v12 + 7) = v34;
    v12[35] ^= (v12[35] ^ (a2 != 0LL)) & 1;
    if ( !a1 || !v15 || (v17 = 1, !v29[1]) )
      v17 = 0;
    v18 = v12[35] ^ ((unsigned __int8)v12[35] ^ (unsigned __int8)(2 * v17)) & 2;
    v19 = v18 ^ (v18 ^ (4 * (a6 == KernelMode))) & 4 ^ ((unsigned __int8)(v18 ^ (v18 ^ (4 * (a6 == KernelMode))) & 4) ^ (unsigned __int8)(8 * (v16 == 0LL))) & 8;
    v13[35] = v19;
    v13[12] = a4;
    v13[13] = v11;
    if ( (v19 & 2) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( v15 )
        {
          v20 = (unsigned __int16 *)((char *)v29[1] + v15);
          if ( v20 > W32UserProbeAddress || v20 < v29[1] )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      v48 = RtlStringCbCopyW((unsigned __int16 *)v13 + 54, 0x20uLL, v29[1]);
      if ( v48 < 0 )
        *((_WORD *)v13 + 54) = 0;
    }
    if ( (v13[35] & 1) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        dmSize = a2->dmSize;
        if ( dmSize )
        {
          v22 = (char *)a2 + dmSize;
          if ( v22 > W32UserProbeAddress || v22 < (char *)a2 )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      else
      {
        dmSize = a2->dmSize;
      }
      if ( dmSize >= 0xB4u )
      {
        v13[16] = a2->dmFields;
        *(_QWORD *)(v13 + 17) = *(_QWORD *)&a2->dmOrientation;
        v13[19] = a2->dmBitsPerPel;
        v13[20] = a2->dmPelsWidth;
        v13[21] = a2->dmPelsHeight;
        v13[22] = a2->dmDisplayFrequency;
        v13[23] = a2->dmDriverExtra;
        v13[24] = a2->dmDisplayOrientation;
        v13[25] = a2->dmDisplayFixedOutput;
        v13[26] = a2->dmDisplayFlags;
      }
    }
    _guard_dispatch_icall_fptr();
    v47 = MEMORY[0xFFFFF78000000320];
    v46 = v47 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v23 = dword_1C00FE990;
    if ( dword_1C00FE990 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00FE990, 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)v13 + 54);
      v37 = a2 == 0LL;
      v78 = &v37;
      v79 = 4LL;
      v44 = a4;
      v80 = &v44;
      v81 = 4LL;
      v39 = v11;
      v82 = (int *)&v39;
      v83 = 4LL;
      v84 = &v34;
      v85 = 8LL;
      v86 = &v46;
      v87 = 8LL;
      v27 = a6;
      v88 = &v27;
      v89 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C00FE990, &unk_1C00EACF8, &ActivityId, v24, 9u, &pData);
      v23 = dword_1C00FE990;
    }
    if ( (v13[35] & 1) != 0 && v23 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00FE990, 0x200000000000uLL) )
    {
      v33 = v13[16];
      v56 = &v33;
      v57 = 4LL;
      v41 = v13[17];
      v58 = &v41;
      v59 = 4LL;
      v35 = v13[18];
      v60 = &v35;
      v61 = 4LL;
      v43 = v13[20];
      v62 = &v43;
      v63 = 4LL;
      v45 = v13[21];
      v64 = &v45;
      v65 = 4LL;
      v38 = v13[22];
      v66 = &v38;
      v67 = 4LL;
      v42 = v13[23];
      v68 = &v42;
      v69 = 4LL;
      v40 = v13[24];
      v70 = &v40;
      v71 = 4LL;
      v36 = v13[25];
      v72 = &v36;
      v73 = 4LL;
      v30 = v13[26];
      v74 = &v30;
      v75 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C00FE990, &unk_1C00EAC6B, &ActivityId, v25, 0xCu, &v55);
    }
    Win32FreePool();
  }
  return v11;
}

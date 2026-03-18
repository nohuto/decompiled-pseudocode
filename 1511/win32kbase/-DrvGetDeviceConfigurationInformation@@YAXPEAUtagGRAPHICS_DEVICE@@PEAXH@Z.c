/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006157C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C002139C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00864FC (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005CE5C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     GreDeviceIoControlEx @ 0x1C0061C70 (GreDeviceIoControlEx.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(PDEVICE_OBJECT *Context, PCWSTR Path, int a3)
{
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  NTSTATUS RegistryValues; // edi
  int v8; // ecx
  bool v9; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *v10; // r8
  unsigned int v11; // r9d
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rax
  size_t v14; // r14
  struct _DEVICE_OBJECT *v15; // rax
  __int64 v16; // rax
  size_t v17; // rdi
  struct _DEVICE_OBJECT *v18; // rax
  PDEVICE_OBJECT v19; // rcx
  struct _DEVICE_OBJECT *v20; // rax
  PDEVICE_OBJECT v21; // rcx
  struct _DEVICE_OBJECT *v22; // rax
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  void *InputBuffer[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  int (*v30)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+98h] [rbp-68h]
  const wchar_t *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+D0h] [rbp-30h]
  const wchar_t *v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+140h] [rbp+40h]
  const wchar_t *v47; // [rsp+148h] [rbp+48h]
  int *v48; // [rsp+150h] [rbp+50h]
  int v49; // [rsp+158h] [rbp+58h]
  int *v50; // [rsp+160h] [rbp+60h]
  int v51; // [rsp+168h] [rbp+68h]
  __int64 v52; // [rsp+170h] [rbp+70h]
  int v53; // [rsp+178h] [rbp+78h]
  const wchar_t *v54; // [rsp+180h] [rbp+80h]
  int *v55; // [rsp+188h] [rbp+88h]
  int v56; // [rsp+190h] [rbp+90h]
  int *v57; // [rsp+198h] [rbp+98h]
  int v58; // [rsp+1A0h] [rbp+A0h]
  int (*v59)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+1A8h] [rbp+A8h]
  int v60; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v61; // [rsp+1B8h] [rbp+B8h]
  __int64 v62; // [rsp+1C0h] [rbp+C0h]
  int v63; // [rsp+1C8h] [rbp+C8h]
  __int64 v64; // [rsp+1D0h] [rbp+D0h]
  int v65; // [rsp+1D8h] [rbp+D8h]
  int (*v66)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+1E0h] [rbp+E0h]
  int v67; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  int v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  int v72; // [rsp+210h] [rbp+110h]
  int (*v73)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+218h] [rbp+118h]
  int v74; // [rsp+220h] [rbp+120h]
  const wchar_t *v75; // [rsp+228h] [rbp+128h]
  __int64 v76; // [rsp+230h] [rbp+130h]
  int v77; // [rsp+238h] [rbp+138h]
  __int64 v78; // [rsp+240h] [rbp+140h]
  int v79; // [rsp+248h] [rbp+148h]
  __int64 v80; // [rsp+250h] [rbp+150h]
  int v81; // [rsp+258h] [rbp+158h]
  const wchar_t *v82; // [rsp+260h] [rbp+160h]
  int *v83; // [rsp+268h] [rbp+168h]
  int v84; // [rsp+270h] [rbp+170h]
  int *v85; // [rsp+278h] [rbp+178h]
  int v86; // [rsp+280h] [rbp+180h]
  __int64 v87; // [rsp+288h] [rbp+188h]
  int v88; // [rsp+290h] [rbp+190h]
  __int64 v89; // [rsp+298h] [rbp+198h]
  _BYTE v90[32]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v91; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v92; // [rsp+2C8h] [rbp+1C8h]
  const wchar_t *v93; // [rsp+2D0h] [rbp+1D0h]
  __int64 v94; // [rsp+2D8h] [rbp+1D8h]
  int v95; // [rsp+2E0h] [rbp+1E0h]
  __int64 v96; // [rsp+2E8h] [rbp+1E8h]
  int v97; // [rsp+2F0h] [rbp+1F0h]
  struct _RTL_QUERY_REGISTRY_TABLE v98; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v99; // [rsp+330h] [rbp+230h]
  int v100; // [rsp+338h] [rbp+238h]
  __int64 v101; // [rsp+340h] [rbp+240h]
  _BYTE v102[32]; // [rsp+348h] [rbp+248h] BYREF

  v32 = L"DriverDesc";
  v27 = 0;
  v39 = L"Settings";
  QueryTable.Name = L"MultiDisplayDriver";
  v25 = 0;
  QueryTable.EntryContext = &v25;
  v23 = 0;
  QueryTable.DefaultData = &v27;
  v47 = L"MirrorDriver";
  v24 = 0;
  v26 = 0;
  v48 = &v23;
  v50 = &v27;
  v54 = L"AccDriver";
  v55 = &v24;
  v57 = &v27;
  v61 = L"Device Description";
  v68 = L"HardwareInformation.AdapterString";
  v75 = L"HardwareInformation.ChipType";
  v30 = __EnumDisplayQueryRoutine;
  v31 = 20;
  v33 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v37 = 0LL;
  v38 = 1;
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  v45 = 0LL;
  v46 = 288;
  v49 = 67108868;
  v51 = 4;
  v52 = 0LL;
  v53 = 288;
  v56 = 67108868;
  v58 = 4;
  v59 = __EnumDisplayQueryRoutine;
  v60 = 16;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v65 = 0;
  v66 = __EnumDisplayQueryRoutine;
  v67 = 16;
  v69 = 0LL;
  v70 = 0;
  v71 = 0LL;
  v72 = 0;
  v73 = __EnumDisplayQueryRoutine;
  v74 = 16;
  v82 = L"TSCompatible";
  v83 = &v26;
  v81 = 288;
  v84 = 67108868;
  v86 = 4;
  v85 = &v27;
  v76 = 0LL;
  v77 = 0;
  v78 = 0LL;
  v79 = 0;
  v80 = 0LL;
  v87 = 0LL;
  v88 = 0;
  v89 = 0LL;
  memset(v90, 0, sizeof(v90));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v30;
  if ( !a3 )
    p_QueryTable = &QueryTable;
  RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( RegistryValues < 0 )
  {
    if ( ((_DWORD)Context[20] & 0x800000) == 0 )
      goto LABEL_10;
    v16 = -1LL;
    do
      ++v16;
    while ( aCdd[v16] );
    v17 = 2 * v16 + 4;
    v18 = (struct _DEVICE_OBJECT *)PALLOCMEM2((unsigned int)(2 * v16 + 4), 1936876615LL, 0);
    Context[26] = v18;
    if ( v18 )
    {
      memmove(v18, L"cdd", v17);
      *((_DWORD *)Context + 70) = v17;
      RegistryValues = 0;
      goto LABEL_11;
    }
    goto LABEL_32;
  }
  v8 = v23;
  if ( v24 )
    v8 = 1;
  v9 = ((_DWORD)Context[20] & 0x800000) == 0;
  v23 = v8;
  if ( !v9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( aCdd[v13] );
    v14 = 2 * v13 + 4;
    v15 = (struct _DEVICE_OBJECT *)PALLOCMEM2((unsigned int)(2 * v13 + 4), 1936876615LL, 0);
    Context[26] = v15;
    if ( v15 )
    {
      memmove(v15, L"cdd", v14);
      *((_DWORD *)Context + 70) = v14;
      goto LABEL_10;
    }
LABEL_32:
    RegistryValues = -1073741670;
    goto LABEL_10;
  }
  v91 = 0LL;
  v93 = L"Settings";
  v92 = 1;
  v98.QueryRoutine = __DisplayDriverQueryRoutine;
  v98.Name = L"InstalledDisplayDrivers";
  v94 = 0LL;
  v95 = 0;
  v96 = 0LL;
  v97 = 0;
  v98.Flags = 16;
  v98.EntryContext = 0LL;
  v98.DefaultType = 0;
  v98.DefaultData = 0LL;
  v98.DefaultLength = 0;
  v99 = 0LL;
  v100 = 0;
  v101 = 0LL;
  memset(v102, 0, sizeof(v102));
  v10 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v91;
  if ( !a3 )
    v10 = &v98;
  RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, v10, Context, 0LL);
LABEL_10:
  if ( RegistryValues < 0 )
    goto LABEL_55;
LABEL_11:
  memset(InputBuffer, 0, sizeof(InputBuffer));
  GreDeviceIoControlEx(Context[17], 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, (__int64)&v29, 1u);
  v11 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v25;
    HIDWORD(InputBuffer[1]) = v26;
    InputBuffer[2] = Context[26];
    v12 = Context[17];
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 70);
    InputBuffer[4] = Context[27];
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 71);
    HIDWORD(InputBuffer[0]) = (v24 != 0 ? 2 : 0) | (v23 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlEx(v12, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, (__int64)&v29, 1u);
    goto LABEL_13;
  }
  if ( v25 != LODWORD(InputBuffer[0])
    || (v23 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v24 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v26 != HIDWORD(InputBuffer[1]) )
  {
    v25 = (int)InputBuffer[0];
    v23 = BYTE4(InputBuffer[0]) & 1;
    v26 = HIDWORD(InputBuffer[1]);
    v24 = (BYTE4(InputBuffer[0]) >> 1) & 1;
  }
  v19 = Context[26];
  if ( !v19 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 70) )
    goto LABEL_43;
  if ( RtlCompareMemory(v19, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 70) )
  {
    v11 = (unsigned int)InputBuffer[3];
LABEL_43:
    if ( Context[26] )
    {
      Win32FreePool();
      v11 = (unsigned int)InputBuffer[3];
    }
    v20 = (struct _DEVICE_OBJECT *)PALLOCMEM2(v11, 1936876615LL, 0);
    Context[26] = v20;
    if ( v20 )
      memmove(v20, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      RegistryValues = -1073741670;
  }
  v21 = Context[27];
  if ( v21
    && InputBuffer[4]
    && (LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 71)
     || RtlCompareMemory(v21, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 71)) )
  {
    Win32FreePool();
    v22 = (struct _DEVICE_OBJECT *)PALLOCMEM2(LODWORD(InputBuffer[5]), 1936876615LL, 0);
    Context[27] = v22;
    if ( v22 )
      memmove(v22, InputBuffer[4], LODWORD(InputBuffer[5]));
    else
      RegistryValues = -1073741670;
  }
LABEL_13:
  if ( RegistryValues >= 0 )
  {
    if ( v25 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v23 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v24 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v26 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    return;
  }
LABEL_55:
  DrvLogDisplayDriverEvent(1);
  if ( Context[26] )
  {
    Win32FreePool();
    Context[26] = 0LL;
  }
  if ( Context[27] )
  {
    Win32FreePool();
    Context[27] = 0LL;
  }
}

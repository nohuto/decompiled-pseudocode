/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C005F3FC
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0016160 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005D5CC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     GreDeviceIoControlEx @ 0x1C005FB00 (GreDeviceIoControlEx.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
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
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  size_t v15; // r14
  struct _DEVICE_OBJECT *v16; // rax
  __int64 v17; // rax
  size_t v18; // rdi
  struct _DEVICE_OBJECT *v19; // rax
  PDEVICE_OBJECT v20; // rcx
  struct _DEVICE_OBJECT *v21; // rax
  PDEVICE_OBJECT v22; // rcx
  struct _DEVICE_OBJECT *v23; // rax
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+4Ch] [rbp-B4h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  void *InputBuffer[6]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  int (*v31)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+90h] [rbp-70h] BYREF
  int v32; // [rsp+98h] [rbp-68h]
  const wchar_t *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+D0h] [rbp-30h]
  const wchar_t *v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46; // [rsp+138h] [rbp+38h]
  int v47; // [rsp+140h] [rbp+40h]
  const wchar_t *v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  int v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  int v52; // [rsp+168h] [rbp+68h]
  __int64 v53; // [rsp+170h] [rbp+70h]
  int v54; // [rsp+178h] [rbp+78h]
  const wchar_t *v55; // [rsp+180h] [rbp+80h]
  int *v56; // [rsp+188h] [rbp+88h]
  int v57; // [rsp+190h] [rbp+90h]
  int *v58; // [rsp+198h] [rbp+98h]
  int v59; // [rsp+1A0h] [rbp+A0h]
  int (*v60)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+1A8h] [rbp+A8h]
  int v61; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v62; // [rsp+1B8h] [rbp+B8h]
  __int64 v63; // [rsp+1C0h] [rbp+C0h]
  int v64; // [rsp+1C8h] [rbp+C8h]
  __int64 v65; // [rsp+1D0h] [rbp+D0h]
  int v66; // [rsp+1D8h] [rbp+D8h]
  int (*v67)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+1E0h] [rbp+E0h]
  int v68; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  int v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  int v73; // [rsp+210h] [rbp+110h]
  int (*v74)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+218h] [rbp+118h]
  int v75; // [rsp+220h] [rbp+120h]
  const wchar_t *v76; // [rsp+228h] [rbp+128h]
  __int64 v77; // [rsp+230h] [rbp+130h]
  int v78; // [rsp+238h] [rbp+138h]
  __int64 v79; // [rsp+240h] [rbp+140h]
  int v80; // [rsp+248h] [rbp+148h]
  __int64 v81; // [rsp+250h] [rbp+150h]
  int v82; // [rsp+258h] [rbp+158h]
  const wchar_t *v83; // [rsp+260h] [rbp+160h]
  int *v84; // [rsp+268h] [rbp+168h]
  int v85; // [rsp+270h] [rbp+170h]
  int *v86; // [rsp+278h] [rbp+178h]
  int v87; // [rsp+280h] [rbp+180h]
  __int64 v88; // [rsp+288h] [rbp+188h]
  int v89; // [rsp+290h] [rbp+190h]
  _BYTE v90[40]; // [rsp+298h] [rbp+198h] BYREF
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
  _BYTE v101[40]; // [rsp+340h] [rbp+240h] BYREF

  v33 = L"DriverDesc";
  v28 = 0;
  v40 = L"Settings";
  QueryTable.Name = L"MultiDisplayDriver";
  v26 = 0;
  QueryTable.EntryContext = &v26;
  v24 = 0;
  QueryTable.DefaultData = &v28;
  v48 = L"MirrorDriver";
  v25 = 0;
  v27 = 0;
  v49 = &v24;
  v51 = &v28;
  v55 = L"AccDriver";
  v56 = &v25;
  v58 = &v28;
  v62 = L"Device Description";
  v69 = L"HardwareInformation.AdapterString";
  v76 = L"HardwareInformation.ChipType";
  v31 = __EnumDisplayQueryRoutine;
  v32 = 20;
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0LL;
  v39 = 1;
  v41 = 0LL;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  v46 = 0LL;
  v47 = 288;
  v50 = 67108868;
  v52 = 4;
  v53 = 0LL;
  v54 = 288;
  v57 = 67108868;
  v59 = 4;
  v60 = __EnumDisplayQueryRoutine;
  v61 = 16;
  v63 = 0LL;
  v64 = 0;
  v65 = 0LL;
  v66 = 0;
  v67 = __EnumDisplayQueryRoutine;
  v68 = 16;
  v70 = 0LL;
  v71 = 0;
  v72 = 0LL;
  v73 = 0;
  v74 = __EnumDisplayQueryRoutine;
  v75 = 16;
  v83 = L"TSCompatible";
  v84 = &v27;
  v82 = 288;
  v85 = 67108868;
  v87 = 4;
  v86 = &v28;
  v77 = 0LL;
  v78 = 0;
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v88 = 0LL;
  v89 = 0;
  memset(v90, 0, sizeof(v90));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v31;
  if ( !a3 )
    p_QueryTable = &QueryTable;
  RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( RegistryValues < 0 )
  {
    if ( ((_DWORD)Context[20] & 0x800000) == 0 )
      goto LABEL_10;
    v17 = -1LL;
    do
      ++v17;
    while ( aCdd[v17] );
    v18 = 2 * v17 + 4;
    v19 = (struct _DEVICE_OBJECT *)PALLOCMEM2((unsigned int)(2 * v17 + 4), 1936876615LL, 0);
    Context[26] = v19;
    if ( v19 )
    {
      memmove(v19, L"cdd", v18);
      *((_DWORD *)Context + 70) = v18;
      RegistryValues = 0;
      goto LABEL_11;
    }
    goto LABEL_35;
  }
  v8 = v24;
  if ( v25 )
    v8 = 1;
  v9 = ((_DWORD)Context[20] & 0x800000) == 0;
  v24 = v8;
  if ( !v9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( aCdd[v14] );
    v15 = 2 * v14 + 4;
    v16 = (struct _DEVICE_OBJECT *)PALLOCMEM2((unsigned int)(2 * v14 + 4), 1936876615LL, 0);
    Context[26] = v16;
    if ( v16 )
    {
      memmove(v16, L"cdd", v15);
      *((_DWORD *)Context + 70) = v15;
      goto LABEL_10;
    }
LABEL_35:
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
  memset(v101, 0, sizeof(v101));
  v10 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v91;
  if ( !a3 )
    v10 = &v98;
  RegistryValues = RtlQueryRegistryValues(0x40000000u, Path, v10, Context, 0LL);
LABEL_10:
  if ( RegistryValues < 0 )
    goto LABEL_58;
LABEL_11:
  memset(InputBuffer, 0, sizeof(InputBuffer));
  GreDeviceIoControlEx(Context[17], 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, (__int64)&v30, 1u);
  v11 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v26;
    HIDWORD(InputBuffer[1]) = v27;
    InputBuffer[2] = Context[26];
    v12 = Context[17];
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 70);
    InputBuffer[4] = Context[27];
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 71);
    HIDWORD(InputBuffer[0]) = (v25 != 0 ? 2 : 0) | (v24 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlEx(v12, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, (__int64)&v30, 1u);
    goto LABEL_13;
  }
  if ( v26 != LODWORD(InputBuffer[0])
    || (v24 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v25 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v27 != HIDWORD(InputBuffer[1]) )
  {
    v26 = (int)InputBuffer[0];
    v24 = BYTE4(InputBuffer[0]) & 1;
    v27 = HIDWORD(InputBuffer[1]);
    v25 = (BYTE4(InputBuffer[0]) >> 1) & 1;
  }
  v20 = Context[26];
  if ( !v20 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 70) )
    goto LABEL_46;
  if ( RtlCompareMemory(v20, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 70) )
  {
    v11 = (unsigned int)InputBuffer[3];
LABEL_46:
    if ( Context[26] )
    {
      Win32FreePool();
      v11 = (unsigned int)InputBuffer[3];
    }
    v21 = (struct _DEVICE_OBJECT *)PALLOCMEM2(v11, 1936876615LL, 0);
    Context[26] = v21;
    if ( v21 )
      memmove(v21, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      RegistryValues = -1073741670;
  }
  v22 = Context[27];
  if ( v22
    && InputBuffer[4]
    && (LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 71)
     || RtlCompareMemory(v22, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 71)) )
  {
    Win32FreePool();
    v23 = (struct _DEVICE_OBJECT *)PALLOCMEM2(LODWORD(InputBuffer[5]), 1936876615LL, 0);
    Context[27] = v23;
    if ( v23 )
      memmove(v23, InputBuffer[4], LODWORD(InputBuffer[5]));
    else
      RegistryValues = -1073741670;
  }
LABEL_13:
  if ( RegistryValues >= 0 )
  {
    if ( v26 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v24 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v25 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v27 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v13 = (const wchar_t *)Context[27];
    if ( v13 )
    {
      if ( !_wcsicmp(v13, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_58:
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

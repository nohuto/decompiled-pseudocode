/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C0062064
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C005FD24 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005FDC0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0062714 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM @ 0x1C0062750 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--_AUTO_KM.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C006277C (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvGetDeviceFromName @ 0x1C0063110 (DrvGetDeviceFromName.c)
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0064A50 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C007ED88 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        _OWORD *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  unsigned __int64 v18; // rdx
  __int64 i; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // rcx
  __int64 DeviceFromName; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int PruneFlag; // eax
  unsigned int v30; // edx
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // esi
  __int64 v36; // r13
  unsigned __int16 v38; // bx
  _QWORD *v39; // rax
  const void *v40; // rdx
  char *v41; // rax
  unsigned __int16 v42; // bx
  unsigned __int16 v43; // si
  void *v44; // rcx
  int v45; // edx
  ULONGLONG v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE v58[15]; // [rsp+81h] [rbp-E7h] BYREF
  int v59; // [rsp+90h] [rbp-D8h] BYREF
  int v60; // [rsp+94h] [rbp-D4h]
  unsigned __int16 v61; // [rsp+98h] [rbp-D0h]
  unsigned __int16 v62; // [rsp+9Ch] [rbp-CCh]
  _BYTE v63[48]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD *v64; // [rsp+D0h] [rbp-98h]
  void *v65; // [rsp+D8h] [rbp-90h]
  __int64 v66; // [rsp+E0h] [rbp-88h]
  __int64 v67; // [rsp+F0h] [rbp-78h]
  _QWORD v68[7]; // [rsp+F8h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h]

  v60 = 0;
  v66 = MEMORY[0xFFFFF78000000320];
  v67 = v66 * KeQueryTimeIncrement();
  *a9 = 0LL;
  *(_QWORD *)&v58[7] = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v58[7], 2LL);
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM(v63);
  v22 = a5;
  if ( !a5 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    if ( a6 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v47 = WdLogNewEntry5_WdTrace(v23);
      WdLogEvent5_WdTrace(v47);
      v48 = -3;
LABEL_69:
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v63);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v58[7], 3LL);
      return v48;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v49 = WdLogNewEntry5_WdTrace(i);
      WdLogEvent5_WdTrace(v49);
LABEL_67:
      v48 = -1;
      goto LABEL_69;
    }
  }
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    v38 = (unsigned __int16)Src[0];
    v39 = PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 18, 1936876615LL, 0);
    v64 = v39;
    if ( !v39 )
    {
      v51 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v51 + 24) = a1;
      *(_QWORD *)(v51 + 32) = v38;
      WdLogEvent5_WdLowResource(v51);
      DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v63);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v58[7], 3LL);
      return 0xFFFFFFFFLL;
    }
    v39[1] = v39 + 2;
    *(_WORD *)v64 = v38;
    *((_WORD *)v64 + 1) = v38 + 2;
    if ( v38 )
    {
      v40 = Src[1];
      v41 = (char *)Src[1] + v38;
      if ( (unsigned __int64)v41 > W32UserProbeAddress || v41 < Src[1] )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove((void *)v64[1], v40, v38);
    }
    v18 = (unsigned __int64)v38 >> 1;
    i = v64[1];
    *(_WORD *)(i + 2 * v18) = 0;
    a1 = v64;
  }
  else
  {
    a1 = 0LL;
  }
  if ( !a3 )
  {
    a3 = 0LL;
    goto LABEL_11;
  }
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v61 = a3[34];
  v42 = v61;
  v43 = a3[35];
  v62 = v43;
  if ( v61 < 0xBCu )
  {
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v63);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v58[7], 3LL);
    return 4294967294LL;
  }
  if ( v61 > 0xDCu )
  {
    v48 = -2;
    goto LABEL_69;
  }
  v44 = PALLOCMEM2((unsigned int)v43 + 220, 1936876615LL, 1);
  v65 = v44;
  if ( !v44 )
  {
    v50 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v50 + 24) = a3;
    *(_QWORD *)(v50 + 32) = v43;
    WdLogEvent5_WdLowResource(v50);
    goto LABEL_67;
  }
  v45 = v43 + v42;
  if ( v45 )
  {
    v46 = (ULONGLONG)a3 + v45;
    if ( v46 > W32UserProbeAddress || v46 < (unsigned __int64)a3 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
      v44 = v65;
    }
  }
  memmove(v44, a3, v42);
  memmove((char *)v65 + 220, (char *)a3 + v42, v43);
  i = 220LL;
  *((_WORD *)v65 + 34) = 220;
  *((_WORD *)v65 + 35) = v43;
  a3 = v65;
  v22 = a5;
LABEL_11:
  if ( !a1 )
  {
    if ( !a3 )
    {
      DeviceFromName = 0LL;
      goto LABEL_13;
    }
    if ( a2 )
      DeviceFromName = *(_QWORD *)(a2 + 2600);
    else
      DeviceFromName = 0LL;
    if ( DeviceFromName )
      goto LABEL_13;
    v52 = WdLogNewEntry5_WdTrace(i);
    *(_QWORD *)(v52 + 24) = 1LL;
LABEL_73:
    WdLogEvent5_WdTrace(v52);
    DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v63);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v58[7], 3LL);
    return 4294967291LL;
  }
  DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
  if ( !DeviceFromName )
  {
    v52 = WdLogNewEntry5_WdTrace(i);
    *(_QWORD *)(v52 + 24) = 0LL;
    goto LABEL_73;
  }
LABEL_13:
  if ( gProtocolType )
    goto LABEL_63;
  if ( !DeviceFromName )
  {
    for ( i = (__int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
        goto LABEL_18;
    }
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
  {
LABEL_63:
    LOBYTE(i) = 0;
    goto LABEL_19;
  }
LABEL_18:
  LOBYTE(i) = 1;
LABEL_19:
  if ( v22
    && DeviceFromName
    && !*(_QWORD *)(DeviceFromName + 136)
    && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    v52 = WdLogNewEntry5_WdTrace(i);
    *(_QWORD *)(v52 + 24) = 2LL;
    goto LABEL_73;
  }
  if ( (_BYTE)i )
  {
    v58[0] = 0;
    memset(v68, 0, sizeof(v68));
    if ( a3 )
    {
      if ( ((DeviceFromName + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        WdLogEvent5_WdAssertion(v54);
      }
      v68[0] = DeviceFromName;
      LODWORD(v68[1]) = a11;
      v68[2] = __PAIR64__(a6, a13);
      v68[4] = a3;
      LODWORD(v68[3]) = a7;
      if ( a10 == -1 )
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      else
        PruneFlag = a10 != 0;
      HIDWORD(v68[1]) = PruneFlag;
    }
    v30 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0xF;
    v31 = 32;
    if ( !a3 && a7 )
    {
      v30 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0x80F;
      v31 = 34;
    }
    v60 = DrvSetDisplayConfig(
            0,
            0,
            0,
            0,
            v30,
            v31,
            a4,
            v22 != 0,
            (struct _DISPLAYCONFIG_CDS_REQUEST *)v68,
            a8,
            (__int64)a9,
            (__int64)&v59,
            0LL,
            (__int64)v58,
            a14,
            a15);
    v35 = v68[6];
    v36 = v68[5];
    if ( v60 < 0 )
    {
      if ( SLODWORD(v68[6]) >= 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(0LL, v32, v33, v34);
        WdLogEvent5_WdAssertion(v57);
      }
    }
    else
    {
      if ( SLODWORD(v68[6]) < 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(0LL, v32, v33, v34);
        WdLogEvent5_WdAssertion(v55);
      }
      if ( v58[0] )
      {
        if ( a12 )
        {
          v56 = WdLogNewEntry5_WdAssertion(0LL, v32, v33, v34);
          WdLogEvent5_WdAssertion(v56);
        }
        v35 = 2;
      }
    }
  }
  else
  {
    if ( gOldModeChange )
    {
      v53 = WdLogNewEntry5_WdAssertion(i, v18, v20, v21);
      WdLogEvent5_WdAssertion(v53);
    }
    gOldModeChange = 1;
    v35 = DrvChangeDisplaySettingsInternal(DeviceFromName, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v59 = 1;
    v36 = 0LL;
  }
  LogDiagCDS(a1, a3, DeviceFromName);
  if ( v36 )
    Win32FreePool();
  DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v63);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v58[7], 3LL);
  return v35;
}

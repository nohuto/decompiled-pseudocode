/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C001B64C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0017D64 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C001AB7C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C001B38C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C001B424 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     _DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM @ 0x1C001BCF0 (_DrvChangeDisplaySettings_--_4_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvChangeDisplaySettings_::_4_::_AUTO_KM::_AUTO_KM @ 0x1C001BD2C (_DrvChangeDisplaySettings_--_4_--_AUTO_KM--_AUTO_KM.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        _OWORD *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        __int64 a14)
{
  int v17; // esi
  unsigned int v18; // r12d
  __int64 DeviceFromName; // rbx
  wchar_t *i; // rcx
  char v21; // cl
  int PruneFlag; // eax
  int v23; // r14d
  unsigned int v24; // edx
  int v25; // r9d
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // r13
  unsigned __int16 v30; // bx
  __int64 v31; // rax
  const void *v32; // rdx
  char *v33; // rax
  WORD v34; // bx
  WORD dmDriverExtra; // si
  void *v36; // rcx
  int v37; // edx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+38h] [rbp-130h]
  _BYTE v51[15]; // [rsp+81h] [rbp-E7h] BYREF
  signed int v52; // [rsp+90h] [rbp-D8h]
  int v53; // [rsp+94h] [rbp-D4h] BYREF
  WORD v54; // [rsp+98h] [rbp-D0h]
  WORD dmSize; // [rsp+9Ch] [rbp-CCh]
  _BYTE v56[48]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-98h]
  void *v58; // [rsp+D8h] [rbp-90h]
  __int64 v59; // [rsp+E0h] [rbp-88h]
  __int64 v60; // [rsp+E8h] [rbp-80h]
  _QWORD v61[7]; // [rsp+F8h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h]

  v52 = 0;
  v59 = MEMORY[0xFFFFF78000000320];
  v60 = v59 * KeQueryTimeIncrement();
  *a9 = 0LL;
  *(_QWORD *)&v51[7] = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange((__int64 *)&v51[7], 2);
  DrvChangeDisplaySettings_::_4_::_AUTO_KM::_AUTO_KM(v56);
  v17 = a5;
  v18 = 1;
  if ( !a5 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    if ( a6 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v39 = WdLogNewEntry5_WdTrace();
      WdLogEvent5_WdTrace(v39);
      v40 = -3;
LABEL_69:
      DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v56);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange((__int64 *)&v51[7], 3);
      return v40;
    }
    if ( DrvIsTemporarySettingChangeDisabled() )
    {
      v41 = WdLogNewEntry5_WdTrace();
      WdLogEvent5_WdTrace(v41);
LABEL_67:
      v40 = -1;
      goto LABEL_69;
    }
  }
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    v30 = (unsigned __int16)Src[0];
    v31 = PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 18);
    v57 = v31;
    if ( !v31 )
    {
      v43 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v43 + 24) = a1;
      *(_QWORD *)(v43 + 32) = v30;
      WdLogEvent5_WdLowResource(v43);
      DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v56);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange((__int64 *)&v51[7], 3);
      return 0xFFFFFFFFLL;
    }
    *(_QWORD *)(v31 + 8) = v31 + 16;
    *(_WORD *)v57 = v30;
    *(_WORD *)(v57 + 2) = v30 + 2;
    if ( v30 )
    {
      v32 = Src[1];
      v33 = (char *)Src[1] + v30;
      if ( v33 > W32UserProbeAddress || v33 < Src[1] )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(*(void **)(v57 + 8), v32, v30);
    }
    *(_WORD *)(*(_QWORD *)(v57 + 8) + 2 * ((unsigned __int64)v30 >> 1)) = 0;
    a1 = (_OWORD *)v57;
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
  dmSize = a3->dmSize;
  v34 = dmSize;
  dmDriverExtra = a3->dmDriverExtra;
  v54 = dmDriverExtra;
  if ( dmSize < 0xBCu )
  {
    DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v56);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange((__int64 *)&v51[7], 3);
    return 4294967294LL;
  }
  if ( dmSize > 0xDCu )
  {
    v40 = -2;
    goto LABEL_69;
  }
  v36 = (void *)PALLOCMEM2((unsigned int)dmDriverExtra + 220);
  v58 = v36;
  if ( !v36 )
  {
    v42 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v42 + 24) = a3;
    *(_QWORD *)(v42 + 32) = dmDriverExtra;
    WdLogEvent5_WdLowResource(v42);
    goto LABEL_67;
  }
  v37 = dmDriverExtra + v34;
  if ( v37 )
  {
    v38 = (unsigned __int64)a3->dmDeviceName + v37;
    if ( v38 > (unsigned __int64)W32UserProbeAddress || v38 < (unsigned __int64)a3 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
      v36 = v58;
    }
  }
  memmove(v36, a3, v34);
  memmove((char *)v58 + 220, (char *)a3 + v34, dmDriverExtra);
  *((_WORD *)v58 + 34) = 220;
  *((_WORD *)v58 + 35) = dmDriverExtra;
  a3 = (struct _devicemodeW *)v58;
  v17 = a5;
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
    v44 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v44 + 24) = 1LL;
LABEL_73:
    WdLogEvent5_WdTrace(v44);
    DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v56);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange((__int64 *)&v51[7], 3);
    return 4294967291LL;
  }
  DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
  if ( !DeviceFromName )
  {
    v44 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v44 + 24) = 0LL;
    goto LABEL_73;
  }
LABEL_13:
  if ( gProtocolType )
    goto LABEL_63;
  if ( !DeviceFromName )
  {
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
        goto LABEL_18;
    }
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
  {
LABEL_63:
    v21 = 0;
    goto LABEL_19;
  }
LABEL_18:
  v21 = 1;
LABEL_19:
  if ( v17
    && DeviceFromName
    && !*(_QWORD *)(DeviceFromName + 136)
    && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
  {
    v44 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v44 + 24) = 2LL;
    goto LABEL_73;
  }
  if ( v21 )
  {
    v51[0] = 0;
    memset(v61, 0, sizeof(v61));
    if ( a3 )
    {
      if ( ((DeviceFromName + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(DeviceFromName + 160) & 0x800000) == 0 )
      {
        v46 = ((__int64 (*)(void))WdLogNewEntry5_WdAssertion)();
        WdLogEvent5_WdAssertion(v46);
      }
      v61[0] = DeviceFromName;
      LODWORD(v61[1]) = a11;
      v61[2] = __PAIR64__(a6, a13);
      v61[4] = a3;
      LODWORD(v61[3]) = a7;
      if ( a10 == -1 )
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      else
        PruneFlag = a10 != 0;
      HIDWORD(v61[1]) = PruneFlag;
    }
    v23 = a12;
    v24 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0xF;
    v25 = 32;
    if ( !a3 && a7 )
    {
      v24 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0x80F;
      v25 = 34;
    }
    v52 = DrvSetDisplayConfig(
            0,
            0,
            0,
            0,
            v24,
            v25,
            a4,
            v17 != 0,
            (struct _DISPLAYCONFIG_CDS_REQUEST *)v61,
            a8,
            (__int64)a9,
            (__int64)&v53,
            0LL,
            (__int64)v51,
            a14);
    v27 = v61[6];
    v18 = HIDWORD(v61[6]);
    v28 = v61[5];
    if ( v52 < 0 )
    {
      if ( SLODWORD(v61[6]) >= 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v49);
      }
    }
    else
    {
      if ( SLODWORD(v61[6]) < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v47);
      }
      if ( v51[0] )
      {
        if ( a12 )
        {
          v48 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v48);
        }
        v27 = 2;
      }
    }
  }
  else
  {
    if ( gOldModeChange )
    {
      v45 = ((__int64 (*)(void))WdLogNewEntry5_WdAssertion)();
      WdLogEvent5_WdAssertion(v45);
    }
    gOldModeChange = 1;
    v23 = a12;
    v50 = (__int64)a9;
    v27 = DrvChangeDisplaySettingsInternal(DeviceFromName, a3, 0LL, a4, a6, a7, a8);
    gOldModeChange = 0;
    v53 = 1;
    v28 = 0LL;
  }
  LogDiagCDS((__int64)a1, a3, DeviceFromName, v26, a5, a6, a7, v50, a11, v23, v60, v27, v52, v18, v53, v28);
  if ( v28 )
    Win32FreePool(v28);
  DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM((AUTO_TGO *)v56);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange((__int64 *)&v51[7], 3);
  return v27;
}

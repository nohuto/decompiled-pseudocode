/*
 * XREFs of DrvChangeDisplaySettings @ 0x1C0050464
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C0043830 (DrvGetDeviceFromName.c)
 *     sub_1C0050B08 @ 0x1C0050B08 (sub_1C0050B08.c)
 *     sub_1C0050B44 @ 0x1C0050B44 (sub_1C0050B44.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C00528E8 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0052B10 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00718F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C007B490 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C007B8BC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DrvChangeDisplaySettings(
        UNICODE_STRING *a1,
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
        __int64 a14)
{
  unsigned __int64 v17; // rdx
  __int64 Buffer; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  __int64 v22; // rcx
  wchar_t *DeviceFromName; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int PruneFlag; // eax
  unsigned int v29; // edx
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // esi
  __int64 v35; // r13
  USHORT v37; // bx
  UNICODE_STRING *v38; // rax
  const void *v39; // rdx
  char *v40; // rax
  unsigned __int16 v41; // bx
  unsigned __int16 v42; // si
  void *v43; // rcx
  int v44; // edx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _BYTE v57[15]; // [rsp+81h] [rbp-E7h] BYREF
  int v58; // [rsp+90h] [rbp-D8h]
  int v59; // [rsp+94h] [rbp-D4h] BYREF
  unsigned __int16 v60; // [rsp+98h] [rbp-D0h]
  unsigned __int16 v61; // [rsp+9Ch] [rbp-CCh]
  _BYTE v62[48]; // [rsp+A0h] [rbp-C8h] BYREF
  UNICODE_STRING *v63; // [rsp+D0h] [rbp-98h]
  void *v64; // [rsp+D8h] [rbp-90h]
  __int64 v65; // [rsp+E0h] [rbp-88h]
  __int64 v66; // [rsp+E8h] [rbp-80h]
  _QWORD v67[7]; // [rsp+F8h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h]

  v58 = 0;
  v65 = MEMORY[0xFFFFF78000000320];
  v66 = v65 * KeQueryTimeIncrement();
  *a9 = 0LL;
  *(_QWORD *)&v57[7] = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57[7], 2LL);
  sub_1C0050B44(v62);
  v21 = a5;
  if ( !a5 )
    goto LABEL_11;
  if ( a5 == 1 )
  {
    if ( a6 && a3 && (unsigned int)DrvIsPermanentSettingChangesDisabled() )
    {
      v46 = WdLogNewEntry5_WdTrace(v22);
      WdLogEvent5_WdTrace(v46);
      v47 = -3;
LABEL_69:
      sub_1C0050B08((AUTO_TGO *)v62);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57[7], 3LL);
      return v47;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v48 = WdLogNewEntry5_WdTrace(Buffer);
      WdLogEvent5_WdTrace(v48);
LABEL_67:
      v47 = -1;
      goto LABEL_69;
    }
  }
  if ( a1 )
  {
    *(UNICODE_STRING *)Src = *a1;
    v37 = (USHORT)Src[0];
    v38 = (UNICODE_STRING *)PALLOCMEM2((unsigned int)LOWORD(Src[0]) + 18, 1936876615LL, 0);
    v63 = v38;
    if ( !v38 )
    {
      v50 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v50 + 24) = a1;
      *(_QWORD *)(v50 + 32) = v37;
      WdLogEvent5_WdLowResource(v50);
      sub_1C0050B08((AUTO_TGO *)v62);
      AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57[7], 3LL);
      return 0xFFFFFFFFLL;
    }
    v38->Buffer = &v38[1].Length;
    v63->Length = v37;
    v63->MaximumLength = v37 + 2;
    if ( v37 )
    {
      v39 = Src[1];
      v40 = (char *)Src[1] + v37;
      if ( v40 > W32UserProbeAddress || v40 < Src[1] )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v63->Buffer, v39, v37);
    }
    v17 = (unsigned __int64)v37 >> 1;
    Buffer = (__int64)v63->Buffer;
    *(_WORD *)(Buffer + 2 * v17) = 0;
    a1 = v63;
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
  v41 = v61;
  v42 = a3[35];
  v60 = v42;
  if ( v61 < 0xBCu )
  {
    sub_1C0050B08((AUTO_TGO *)v62);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57[7], 3LL);
    return 4294967294LL;
  }
  if ( v61 > 0xDCu )
  {
    v47 = -2;
    goto LABEL_69;
  }
  v43 = PALLOCMEM2((unsigned int)v42 + 220, 1936876615LL, 1);
  v64 = v43;
  if ( !v43 )
  {
    v49 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v49 + 24) = a3;
    *(_QWORD *)(v49 + 32) = v42;
    WdLogEvent5_WdLowResource(v49);
    goto LABEL_67;
  }
  v44 = v42 + v41;
  if ( v44 )
  {
    v45 = (unsigned __int64)a3 + v44;
    if ( v45 > (unsigned __int64)W32UserProbeAddress || v45 < (unsigned __int64)a3 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
      v43 = v64;
    }
  }
  memmove(v43, a3, v41);
  memmove((char *)v64 + 220, (char *)a3 + v41, v42);
  Buffer = 220LL;
  *((_WORD *)v64 + 34) = 220;
  *((_WORD *)v64 + 35) = v42;
  a3 = v64;
  v21 = a5;
LABEL_11:
  if ( !a1 )
  {
    if ( !a3 )
    {
      DeviceFromName = 0LL;
      goto LABEL_13;
    }
    if ( a2 )
      DeviceFromName = *(wchar_t **)(a2 + 2600);
    else
      DeviceFromName = 0LL;
    if ( DeviceFromName )
      goto LABEL_13;
    v51 = WdLogNewEntry5_WdTrace(Buffer);
    *(_QWORD *)(v51 + 24) = 1LL;
LABEL_73:
    WdLogEvent5_WdTrace(v51);
    sub_1C0050B08((AUTO_TGO *)v62);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57[7], 3LL);
    return 4294967291LL;
  }
  DeviceFromName = DrvGetDeviceFromName(a1, 0);
  if ( !DeviceFromName )
  {
    v51 = WdLogNewEntry5_WdTrace(Buffer);
    *(_QWORD *)(v51 + 24) = 0LL;
    goto LABEL_73;
  }
LABEL_13:
  if ( gProtocolType )
    goto LABEL_63;
  if ( !DeviceFromName )
  {
    for ( Buffer = (__int64)gpGraphicsDeviceList; Buffer; Buffer = *(_QWORD *)(Buffer + 128) )
    {
      if ( (*(_DWORD *)(Buffer + 160) & 0x800000) != 0 )
        goto LABEL_18;
    }
    goto LABEL_63;
  }
  if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
  {
LABEL_63:
    LOBYTE(Buffer) = 0;
    goto LABEL_19;
  }
LABEL_18:
  LOBYTE(Buffer) = 1;
LABEL_19:
  if ( v21 && DeviceFromName && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
  {
    v51 = WdLogNewEntry5_WdTrace(Buffer);
    *(_QWORD *)(v51 + 24) = 2LL;
    goto LABEL_73;
  }
  if ( (_BYTE)Buffer )
  {
    v57[0] = 0;
    memset(v67, 0, sizeof(v67));
    if ( a3 )
    {
      if ( ((unsigned __int64)(DeviceFromName + 2) & 0xFFFFFFFFFFFFFFFBuLL) == 0
        || (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v53);
      }
      v67[0] = DeviceFromName;
      LODWORD(v67[1]) = a11;
      v67[2] = __PAIR64__(a6, a13);
      v67[4] = a3;
      LODWORD(v67[3]) = a7;
      if ( a10 == -1 )
        PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
      else
        PruneFlag = a10 != 0;
      HIDWORD(v67[1]) = PruneFlag;
    }
    v29 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0xF;
    v30 = 32;
    if ( !a3 && a7 )
    {
      v29 = (a7 != 0 ? 128 : 64) | (a12 != 0 ? 0x100 : 0) | 0x80F;
      v30 = 34;
    }
    v58 = DrvSetDisplayConfig(
            0,
            0,
            0,
            0,
            v29,
            v30,
            a4,
            v21 != 0,
            (struct _DISPLAYCONFIG_CDS_REQUEST *)v67,
            a8,
            (__int64)a9,
            (__int64)&v59,
            0LL,
            (__int64)v57,
            a14);
    v34 = v67[6];
    v35 = v67[5];
    if ( v58 < 0 )
    {
      if ( SLODWORD(v67[6]) >= 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(0LL, v31, v32, v33);
        WdLogEvent5_WdAssertion(v56);
      }
    }
    else
    {
      if ( SLODWORD(v67[6]) < 0 )
      {
        v54 = WdLogNewEntry5_WdAssertion(0LL, v31, v32, v33);
        WdLogEvent5_WdAssertion(v54);
      }
      if ( v57[0] )
      {
        if ( a12 )
        {
          v55 = WdLogNewEntry5_WdAssertion(0LL, v31, v32, v33);
          WdLogEvent5_WdAssertion(v55);
        }
        v34 = 2;
      }
    }
  }
  else
  {
    if ( gOldModeChange )
    {
      v52 = WdLogNewEntry5_WdAssertion(Buffer, v17, v19, v20);
      WdLogEvent5_WdAssertion(v52);
    }
    gOldModeChange = 1;
    v34 = DrvChangeDisplaySettingsInternal(DeviceFromName, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    gOldModeChange = 0;
    v59 = 1;
    v35 = 0LL;
  }
  LogDiagCDS(a1, a3, DeviceFromName);
  if ( v35 )
    Win32FreePool();
  sub_1C0050B08((AUTO_TGO *)v62);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v57[7], 3LL);
  return v34;
}

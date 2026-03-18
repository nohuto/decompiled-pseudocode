/*
 * XREFs of ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C008A7F0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C00030D8 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0003E08 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00075BC (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00078C4 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     RtlStringCbCopyNW @ 0x1C000B538 (RtlStringCbCopyNW.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C008D8DC (-D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@.c)
 *     DmmIsTargetHMD @ 0x1C008DA30 (DmmIsTargetHMD.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C009C02C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall DxgkpGetAdapterDeviceDesc(
        struct _LUID a1,
        unsigned int a2,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // r14
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  DXGGLOBAL *v18; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct DXGADAPTER **v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rcx
  DXGADAPTER *v26; // rbx
  __int64 v27; // rax
  DXGADAPTER *v28; // r15
  _BOOL8 v29; // rcx
  __int64 v30; // rax
  struct DXGADAPTER *v31; // r8
  DXGADAPTER *v32; // rbx
  __int64 v33; // rdx
  DXGADAPTER *v34; // rcx
  size_t v35; // rdx
  DXGADAPTER *v36; // rbx
  DXGADAPTER *v37; // rbx
  struct DXGPROCESS *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  int **SessionViewOwner; // r12
  unsigned int v42; // r15d
  BOOL v43; // ecx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  int v45; // eax
  __int64 v46; // rdx
  DXGADAPTER *v47; // rcx
  size_t v48; // rdx
  _QWORD *v49; // rax
  DXGADAPTER *v50; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v51[16]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v52[16]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v53[56]; // [rsp+48h] [rbp-38h] BYREF
  char v55; // [rsp+D0h] [rbp+50h] BYREF
  DXGADAPTER *v56; // [rsp+D8h] [rbp+58h] BYREF

  v56 = 0LL;
  v50 = 0LL;
  v4 = a2;
  if ( !a3 )
  {
    v5 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v5 + 24) = 5183LL;
    WdLogEvent5_WdAssertion(v5);
  }
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = a1.HighPart;
    *(_QWORD *)(v9 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v9);
    return -1073741811LL;
  }
  v55 = 0;
  v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v55, 0);
  v13 = v11;
  if ( v11 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    {
      v17 = 0;
      v18 = DXGGLOBAL::GetGlobal(v16);
      SessionData = DXGGLOBAL::GetSessionData(v18);
      if ( SessionData )
      {
        v20 = *((unsigned int *)v8 + 63);
        if ( *((_DWORD *)SessionData + 4629) == (_DWORD)v20 )
        {
          v20 = HIDWORD(*(_QWORD *)((char *)SessionData + 18516));
          if ( (_DWORD)v20 == HIDWORD(*(_QWORD *)((char *)v8 + 252)) )
            v17 = *((_DWORD *)SessionData + 4631);
        }
      }
      if ( (_DWORD)v4 != -1 && (unsigned int)v4 >= v17 )
      {
        v21 = WdLogNewEntry5_WdError(v20);
        v22 = v17;
        *(_QWORD *)(v21 + 24) = v4;
LABEL_21:
        *(_QWORD *)(v21 + 32) = v22;
        WdLogEvent5_WdError(v21);
        LODWORD(v13) = -1073741811;
        goto LABEL_55;
      }
      LODWORD(v4) = -1;
    }
    if ( (_DWORD)v4 == -1 )
    {
      v23 = 0LL;
      v24 = 0;
    }
    else
    {
      v23 = &v56;
      v24 = v4;
    }
    if ( (int)DxgkpGetPairingAdapters(v8, v24, &v50, v23) < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v25);
      v22 = (unsigned int)v4;
      *(_QWORD *)(v21 + 24) = v8;
      goto LABEL_21;
    }
    v26 = v50;
    if ( !v50 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v27 + 24) = 5263LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = v56;
    v29 = (_DWORD)v4 == -1;
    if ( v29 != (v56 == 0LL) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v30 + 24) = 5264LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = v28;
    if ( !v28 )
      v31 = v26;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v26, v31);
    DXGADAPTER::ReleaseReference(v8);
    DXGADAPTER::ReleaseReference(v26);
    if ( v28 )
      DXGADAPTER::ReleaseReference(v28);
    else
      v56 = v26;
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51, v26, 1);
    if ( *((_DWORD *)v26 + 40) != 1 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      LODWORD(v13) = -1073741130;
LABEL_54:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      goto LABEL_55;
    }
    v32 = v50;
    *((_DWORD *)a3 + 208) = *((_DWORD *)v50 + 70);
    *((_DWORD *)a3 + 209) = *((_DWORD *)v32 + 65);
    *((_DWORD *)a3 + 210) = *((_DWORD *)v32 + 66);
    *((_DWORD *)a3 + 211) = *((_DWORD *)v32 + 67);
    *((_DWORD *)a3 + 212) = *((_DWORD *)v32 + 68);
    *((_DWORD *)a3 + 213) = *((_DWORD *)v32 + 69);
    *((_DWORD *)a3 + 409) = *((_BYTE *)v32 + 284) >> 7;
    *((_DWORD *)a3 + 410) = *((_DWORD *)v32 + 58) > 1u;
    *((_DWORD *)a3 + 214) = DXGADAPTER::GetDriverVersion(v32);
    DXGADAPTER::GetDeviceDescriptor(v34, v33, (unsigned __int16 *)a3 + 430);
    RtlStringCbCopyNW(
      (NTSTRSAFE_PWSTR)a3 + 558,
      v35,
      *(STRSAFE_PCNZWCH *)(*((_QWORD *)v32 + 123) + 8LL),
      **((unsigned __int16 **)v32 + 123));
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    v36 = v56;
    if ( v56 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52, v56, 1);
      if ( *((_DWORD *)v36 + 40) != 1 )
      {
        LODWORD(v13) = -1073741130;
LABEL_58:
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
        goto LABEL_54;
      }
      v37 = v56;
      if ( (_DWORD)v4 != -1 )
      {
        v38 = DXGPROCESS::GetCurrent();
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v38 + 10) + 224LL))(0LL) )
        {
          v40 = *((_QWORD *)v37 + 248);
          if ( !v40 || (unsigned int)v4 >= *(_DWORD *)(v40 + 104) )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            LODWORD(v13) = -1073741811;
            v49[3] = (unsigned int)v4;
            v49[4] = v8;
            v49[5] = -1073741811LL;
            WdLogEvent5_WdError(v49);
            goto LABEL_58;
          }
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v8 + 248), v4);
          if ( SessionViewOwner )
          {
            v42 = *(_DWORD *)(1016LL * (unsigned int)v4 + *(_QWORD *)(*((_QWORD *)v37 + 248) + 136LL) + 956);
            v43 = v42 != -1 && DmmIsTargetHMD(v37, v42) != 0;
            *((_DWORD *)a3 + 492) ^= (*((_DWORD *)a3 + 492) ^ (8 * v43)) & 8;
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v37 + 248), v4);
            if ( (*((_DWORD *)a3 + 492) & 8) != 0 )
            {
              *(_QWORD *)((char *)a3 + 1644) = 0LL;
              *(_QWORD *)((char *)a3 + 1652) = 0LL;
              *((_QWORD *)a3 + 244) = 0LL;
              *((_QWORD *)a3 + 245) = 0LL;
            }
            else
            {
              *(_OWORD *)((char *)a3 + 1644) = *(_OWORD *)(SessionViewOwner + 3);
              *((struct tagRECT *)a3 + 122) = *ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)v37 + 248), v4);
            }
            *((_DWORD *)a3 + 479) = v42;
            *((_DWORD *)a3 + 480) = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v37 + 248), v4);
            *((_DWORD *)a3 + 481) = *(_DWORD *)DisplayModeInfo;
            *((_DWORD *)a3 + 482) = *((_DWORD *)DisplayModeInfo + 1);
            D3dPixelFormatToDisplayConfigPixelFormat(
              *((_DWORD *)DisplayModeInfo + 2),
              (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)((char *)a3 + 1932));
            v45 = *((_DWORD *)DisplayModeInfo + 4);
            if ( v45 == -2 && *((_DWORD *)DisplayModeInfo + 5) == -2 )
            {
              *((_DWORD *)a3 + 484) = 64;
              *((_DWORD *)a3 + 485) = 1;
            }
            else
            {
              *((_DWORD *)a3 + 484) = v45;
              *((_DWORD *)a3 + 485) = *((_DWORD *)DisplayModeInfo + 5);
            }
            *((_DWORD *)a3 + 486) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v37 + 248), v4, 2);
            *((_DWORD *)a3 + 487) = *((_DWORD *)DisplayModeInfo + 6);
          }
          else
          {
            *((_DWORD *)a3 + 479) = -1;
            *(_QWORD *)((char *)a3 + 1644) = 0LL;
            *(_QWORD *)((char *)a3 + 1652) = 0LL;
            *((_QWORD *)a3 + 244) = 0LL;
            *((_QWORD *)a3 + 245) = 0LL;
            *((_DWORD *)a3 + 481) = 0;
            *((_DWORD *)a3 + 482) = 0;
            *((_DWORD *)a3 + 484) = 0;
            *((_DWORD *)a3 + 487) = 0;
            *((_DWORD *)a3 + 483) = 5;
            *((_DWORD *)a3 + 485) = 1;
            *((_DWORD *)a3 + 486) = 1;
          }
        }
      }
      *((_DWORD *)a3 + 5) = *((_DWORD *)v37 + 70);
      *((_DWORD *)a3 + 6) = *((_DWORD *)v37 + 65);
      *((_DWORD *)a3 + 7) = *((_DWORD *)v37 + 66);
      *((_DWORD *)a3 + 8) = *((_DWORD *)v37 + 67);
      *((_DWORD *)a3 + 9) = *((_DWORD *)v37 + 68);
      *((_DWORD *)a3 + 10) = *((_DWORD *)v37 + 69);
      *((_DWORD *)a3 + 206) = *((_BYTE *)v37 + 284) >> 7;
      *((_DWORD *)a3 + 207) = *((_DWORD *)v37 + 58) > 1u;
      *((_DWORD *)a3 + 11) = DXGADAPTER::GetDriverVersion(v37);
      DXGADAPTER::GetDeviceDescriptor(v47, v46, (unsigned __int16 *)a3 + 24);
      RtlStringCbCopyNW(
        (NTSTRSAFE_PWSTR)a3 + 152,
        v48,
        *(STRSAFE_PCNZWCH *)(*((_QWORD *)v37 + 123) + 8LL),
        **((unsigned __int16 **)v37 + 123));
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v52);
    }
    LODWORD(v13) = 0;
    *((_WORD *)a3 + 153) = 92;
    *((_WORD *)a3 + 559) = 92;
    goto LABEL_54;
  }
  v14 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v14 + 24) = v13;
  WdLogEvent5_WdError(v14);
LABEL_55:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v55);
  return (unsigned int)v13;
}

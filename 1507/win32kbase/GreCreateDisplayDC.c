/*
 * XREFs of GreCreateDisplayDC @ 0x1C00422D0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C00165F0 (GreCreateCompatibleDC.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0042910 (NtGdiCreateCompatibleDC.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C0069580 (NtGdiCreateMetafileDC.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     IsXDCOBJ_vSetDefaultFontSupported_0 @ 0x1C00010D0 (IsXDCOBJ_vSetDefaultFontSupported_0.c)
 *     XDCOBJ_vSetDefaultFontWrap_0 @ 0x1C00010D8 (XDCOBJ_vSetDefaultFontWrap_0.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00346B0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003561C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C003C4C0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003CC0C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreSetupDCAttributes @ 0x1C0042690 (GreSetupDCAttributes.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C004A7B8 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C004AA40 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x1C0067180 (GreValidateVisrgn.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B2D50 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

HDC __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // r15d
  HDC v6; // rdi
  PERESOURCE v7; // r9
  _QWORD *v8; // rax
  int v9; // edx
  unsigned int v10; // edx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h] BYREF
  DC *v21[2]; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+60h] [rbp-28h]
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0LL;
  v7 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v7 = ghsemDynamicModeChange;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(a1, &LockAcquireShared, a3, v7);
  v18 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v21, a2, v3, (int)v7);
  if ( v21[0] )
  {
    *((_QWORD *)v21[0] + 6) = a1;
    *((_DWORD *)v21[0] + 18) = *(_DWORD *)(a1 + 1848);
    *((_DWORD *)v21[0] + 19) = *(_DWORD *)(a1 + 2152);
    *((_QWORD *)v21[0] + 3) = *(_QWORD *)(a1 + 1824);
    *((_QWORD *)v21[0] + 8) = *(_QWORD *)(a1 + 64);
    if ( a2 == 1 )
    {
      v23 = 0x100000001LL;
      *((_QWORD *)v21[0] + 66) = 0x100000001LL;
    }
    else
    {
      v8 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v18, &v20);
      *((_QWORD *)v21[0] + 66) = *v8;
      if ( a2 )
        goto LABEL_26;
      if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
        *((_DWORD *)v21[0] + 9) |= 0x200u;
      else
        *((_DWORD *)v21[0] + 9) &= ~0x200u;
      if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
        *((_DWORD *)v21[0] + 9) |= 1u;
      else
        *((_DWORD *)v21[0] + 9) &= ~1u;
      if ( (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
        *((_DWORD *)v21[0] + 9) |= 0x1000u;
      else
        *((_DWORD *)v21[0] + 9) &= ~0x1000u;
      if ( (*(_DWORD *)(a1 + 56) & 0x80u) != 0 )
        goto LABEL_26;
      *((_QWORD *)v21[0] + 64) = *(_QWORD *)(a1 + 2576);
      v9 = *((_DWORD *)v21[0] + 9);
      if ( (v9 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2576) + 112LL) & 0x200) != 0 )
        v10 = v9 | 0x8000;
      else
        v10 = v9 & 0xFFFF7FFF;
      *((_DWORD *)v21[0] + 9) = v10;
    }
    *((_QWORD *)v21[0] + 8) = ghsemGreLock;
LABEL_26:
    if ( (unsigned int)DC::bSetDefaultRegion(v21[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported_0() >= 0 )
        XDCOBJ_vSetDefaultFontWrap_0();
      AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v19, v21[0]);
      DC::vUpdate_VisRect(v21[0], *((struct REGION **)v21[0] + 192));
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v19);
      v11 = 0;
      if ( (unsigned int)GreSetupDCAttributes(*(HDC *)v21[0]) )
      {
        v11 = 1;
        if ( a1 == *(_QWORD *)gpDispInfo )
          *(_DWORD *)(*((_QWORD *)v21[0] + 10) + 8LL) |= 0x10000u;
        v22 = 1;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v18);
        v23 = *(_QWORD *)(a1 + 48);
        v12 = v23;
        *((_QWORD *)v21[0] + 7) = 0LL;
        if ( v12
          && (*(_DWORD *)(a1 + 56) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v18)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23) )
        {
          *((_QWORD *)v21[0] + 7) = v13;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v23);
        }
        v6 = *(HDC *)v21[0];
      }
      if ( !v11 )
      {
        DC::vReleaseVis(v21[0]);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v21[0] + 20));
      }
    }
    if ( v6 )
    {
      GreValidateVisrgn(v6);
    }
    else
    {
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v21[0] + 18));
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v21[0] + 19));
      DEC_SHARE_REF_CNT(*((_DWORD **)v21[0] + 13));
    }
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v21);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v14, &LockRelease, v15, ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v16);
  }
  return v6;
}

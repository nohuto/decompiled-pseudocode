/*
 * XREFs of GreCreateDisplayDC @ 0x1C0025FD0
 * Callers:
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0025AB0 (NtGdiCreateCompatibleDC.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     CreateCacheDC @ 0x1C00443D0 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreCreateCompatibleDC @ 0x1C006C030 (GreCreateCompatibleDC.c)
 *     NtGdiCreateMetafileDC @ 0x1C0083E30 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     IsXDCOBJ_vSetDefaultFontSupported_0 @ 0x1C00010D0 (IsXDCOBJ_vSetDefaultFontSupported_0.c)
 *     XDCOBJ_vSetDefaultFontWrap_0 @ 0x1C00010D8 (XDCOBJ_vSetDefaultFontWrap_0.c)
 *     GreSetupDCAttributes @ 0x1C0025D50 (GreSetupDCAttributes.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002A5B0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002C240 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002C90C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002D860 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038FB8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0088818 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     GreValidateVisrgn @ 0x1C0088AD8 (GreValidateVisrgn.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B5970 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
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
  _QWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  DC *v18[2]; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0LL;
  v7 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v7 = ghsemDynamicModeChange;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(a1, &LockAcquireShared, a3, v7, L"ghsemDynamicModeChange");
  v17[0] = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v18, a2, v3, (int)v7);
  if ( v18[0] )
  {
    *((_QWORD *)v18[0] + 6) = a1;
    *((_DWORD *)v18[0] + 18) = *(_DWORD *)(a1 + 1848);
    *((_DWORD *)v18[0] + 19) = *(_DWORD *)(a1 + 2152);
    *((_QWORD *)v18[0] + 3) = *(_QWORD *)(a1 + 1824);
    *((_QWORD *)v18[0] + 8) = *(_QWORD *)(a1 + 64);
    if ( a2 == 1 )
    {
      v20 = 0x100000001LL;
      *((_QWORD *)v18[0] + 66) = 0x100000001LL;
    }
    else
    {
      v8 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)v17);
      *((_QWORD *)v18[0] + 66) = *v8;
      if ( a2 )
        goto LABEL_26;
      if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
        *((_DWORD *)v18[0] + 9) |= 0x200u;
      else
        *((_DWORD *)v18[0] + 9) &= ~0x200u;
      if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
        *((_DWORD *)v18[0] + 9) |= 1u;
      else
        *((_DWORD *)v18[0] + 9) &= ~1u;
      if ( (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
        *((_DWORD *)v18[0] + 9) |= 0x1000u;
      else
        *((_DWORD *)v18[0] + 9) &= ~0x1000u;
      if ( (*(_DWORD *)(a1 + 56) & 0x80u) != 0 )
        goto LABEL_26;
      *((_QWORD *)v18[0] + 64) = *(_QWORD *)(a1 + 2576);
      v9 = *((_DWORD *)v18[0] + 9);
      if ( (v9 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2576) + 112LL) & 0x200) != 0 )
        v10 = v9 | 0x8000;
      else
        v10 = v9 & 0xFFFF7FFF;
      *((_DWORD *)v18[0] + 9) = v10;
    }
    *((_QWORD *)v18[0] + 8) = ghsemGreLock;
LABEL_26:
    if ( (unsigned int)DC::bSetDefaultRegion(v18[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported_0() >= 0 )
        XDCOBJ_vSetDefaultFontWrap_0();
      DC::vUpdate_VisRect(v18[0], *((struct REGION **)v18[0] + 189));
      v11 = 0;
      if ( (unsigned int)GreSetupDCAttributes(*(HDC *)v18[0]) )
      {
        v11 = 1;
        if ( a1 == *(_QWORD *)gpDispInfo )
          *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 8LL) |= 0x10000u;
        v19 = 1;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)v17);
        v20 = *(_QWORD *)(a1 + 48);
        v12 = v20;
        *((_QWORD *)v18[0] + 7) = 0LL;
        if ( v12
          && (*(_DWORD *)(a1 + 56) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v17)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v20) )
        {
          *((_QWORD *)v18[0] + 7) = v13;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v20);
        }
        v6 = *(HDC *)v18[0];
      }
      if ( !v11 )
      {
        DC::vReleaseVis(v18[0]);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v18[0] + 20));
      }
    }
    if ( v6 )
    {
      GreValidateVisrgn(v6);
    }
    else
    {
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v18[0] + 18));
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v18[0] + 19));
      DEC_SHARE_REF_CNT(*((_QWORD *)v18[0] + 13));
    }
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v18);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v14, &LockRelease, v15, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v6;
}

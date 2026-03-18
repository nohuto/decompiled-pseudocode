/*
 * XREFs of GreCreateDisplayDC @ 0x1C002E9E0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C001CB50 (GreCreateCompatibleDC.c)
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005834C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C0085650 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     IsXDCOBJ_vSetDefaultFontSupported_0 @ 0x1C00010D0 (IsXDCOBJ_vSetDefaultFontSupported_0.c)
 *     XDCOBJ_vSetDefaultFontWrap_0 @ 0x1C00010D8 (XDCOBJ_vSetDefaultFontWrap_0.c)
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     GreSetupDCAttributes @ 0x1C0020D30 (GreSetupDCAttributes.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CD80 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002ED98 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002F000 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032CBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

HDC __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, int a3)
{
  HDC v6; // rdi
  int v7; // r9d
  _QWORD *v8; // rax
  int v9; // edx
  unsigned int v10; // edx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[16]; // [rsp+38h] [rbp-50h] BYREF
  DC *v19[2]; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+60h] [rbp-28h]
  __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v7 = (int)ghsemDynamicModeChange;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(a1, &LockAcquireShared);
  v17 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v19, a2, a3, v7);
  if ( v19[0] )
  {
    *((_QWORD *)v19[0] + 6) = a1;
    *((_DWORD *)v19[0] + 18) = *(_DWORD *)(a1 + 1848);
    *((_DWORD *)v19[0] + 19) = *(_DWORD *)(a1 + 2152);
    *((_QWORD *)v19[0] + 3) = *(_QWORD *)(a1 + 1824);
    *((_QWORD *)v19[0] + 8) = *(_QWORD *)(a1 + 64);
    if ( a2 == 1 )
    {
      v21 = 0x100000001LL;
      *((_QWORD *)v19[0] + 66) = 0x100000001LL;
    }
    else
    {
      v8 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v17);
      *((_QWORD *)v19[0] + 66) = *v8;
      if ( a2 )
        goto LABEL_26;
      if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
        *((_DWORD *)v19[0] + 9) |= 0x200u;
      else
        *((_DWORD *)v19[0] + 9) &= ~0x200u;
      if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
        *((_DWORD *)v19[0] + 9) |= 1u;
      else
        *((_DWORD *)v19[0] + 9) &= ~1u;
      if ( (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
        *((_DWORD *)v19[0] + 9) |= 0x1000u;
      else
        *((_DWORD *)v19[0] + 9) &= ~0x1000u;
      if ( (*(_DWORD *)(a1 + 56) & 0x80u) != 0 )
        goto LABEL_26;
      *((_QWORD *)v19[0] + 64) = *(_QWORD *)(a1 + 2576);
      v9 = *((_DWORD *)v19[0] + 9);
      if ( (v9 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2576) + 112LL) & 0x200) != 0 )
        v10 = v9 | 0x8000;
      else
        v10 = v9 & 0xFFFF7FFF;
      *((_DWORD *)v19[0] + 9) = v10;
    }
    *((_QWORD *)v19[0] + 8) = ghsemGreLock;
LABEL_26:
    if ( (unsigned int)DC::bSetDefaultRegion(v19[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported_0() >= 0 )
        XDCOBJ_vSetDefaultFontWrap_0();
      AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v18, v19[0]);
      DC::vUpdate_VisRect(v19[0], *((struct REGION **)v19[0] + 192));
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v18);
      v11 = 0;
      if ( (unsigned int)GreSetupDCAttributes(*(HDC *)v19[0]) )
      {
        v11 = 1;
        if ( a1 == *(_QWORD *)gpDispInfo )
          *(_DWORD *)(*((_QWORD *)v19[0] + 10) + 8LL) |= 0x10000u;
        v20 = 1;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17);
        v21 = *(_QWORD *)(a1 + 48);
        v12 = v21;
        *((_QWORD *)v19[0] + 7) = 0LL;
        if ( v12
          && (*(_DWORD *)(a1 + 56) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21) )
        {
          *((_QWORD *)v19[0] + 7) = v13;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v21);
        }
        v6 = *(HDC *)v19[0];
      }
      if ( !v11 )
      {
        DC::vReleaseVis(v19[0]);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v19[0] + 20));
      }
    }
    if ( v6 )
    {
      GreValidateVisrgn(v6, 1);
    }
    else
    {
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v19[0] + 18));
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v19[0] + 19));
      DEC_SHARE_REF_CNT(*((unsigned int **)v19[0] + 13));
    }
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v19);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v14, &LockRelease);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    PsLeavePriorityRegion(v15);
  }
  return v6;
}

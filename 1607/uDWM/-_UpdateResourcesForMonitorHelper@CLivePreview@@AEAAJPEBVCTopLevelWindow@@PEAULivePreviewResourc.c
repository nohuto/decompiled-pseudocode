/*
 * XREFs of ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180075610
 * Callers:
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180075098 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x180008090 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180015B58 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x180072FB4 (-CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z.c)
 *     ?GetCornerRadius@CTopLevelWindow@@QEBAHXZ @ 0x18007E49C (-GetCornerRadius@CTopLevelWindow@@QEBAHXZ.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18007E67C (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009AB0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitorHelper(
        CLivePreview *this,
        const struct CTopLevelWindow *a2,
        struct LivePreviewResource *a3)
{
  signed int v5; // edi
  BOOL v6; // ebx
  __int64 v7; // rax
  int v8; // ebx
  HRGN v9; // r14
  signed int LastError; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  signed int v14; // eax
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // r8d
  signed int v18; // eax
  HRGN v19; // rbx
  signed int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-60h]
  HRGN v23; // [rsp+30h] [rbp-50h] BYREF
  HRGN RoundRectRgnCoerceInvalid; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  RECT rc1; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  CTopLevelWindow::GetLivePreviewWindowRect(a2, &rcDst, 1);
  v6 = IntersectRect(&rcDst, &rcDst, (const RECT *)a3 + 7);
  if ( v6 && *(char *)(*((_QWORD *)a2 + 93) + 578LL) >= 0 )
    UnionRect((LPRECT)a3, (const RECT *)a3, &rcDst);
  v7 = *((_QWORD *)a2 + 93);
  if ( (*(_BYTE *)(v7 + 578) & 0x40) == 0 && *(_DWORD *)(v7 + 112) == 1 )
  {
    if ( v6 )
      UnionRect((LPRECT)((char *)a3 + 40), (const RECT *)((char *)a3 + 40), &rcDst);
    rcDst = *CTopLevelWindow::GetLivePreviewWindowRect(a2, &rc1, 0);
    if ( IntersectRect(&rcSrc2, &rcDst, (const RECT *)a3 + 7) )
    {
      if ( UnionRect(&rc1, (const RECT *)a3 + 5, &rcSrc2) && !EqualRect(&rc1, (const RECT *)a3 + 5) )
      {
        UnionRect((LPRECT)a3 + 5, (const RECT *)a3 + 5, &rcSrc2);
        v8 = 2 * CTopLevelWindow::GetCornerRadius(a2);
        SetLastError(0);
        RoundRectRgnCoerceInvalid = CreateRoundRectRgnCoerceInvalid(
                                      rcDst.left,
                                      rcDst.top,
                                      rcDst.right,
                                      rcDst.bottom,
                                      v8,
                                      v8);
        v9 = RoundRectRgnCoerceInvalid;
        if ( !RoundRectRgnCoerceInvalid )
        {
          LastError = GetLastError();
          v5 = LastError;
          if ( LastError > 0 )
            v5 = (unsigned __int16)LastError | 0x80070000;
          if ( v5 >= 0 )
            v5 = CheckGUIHandleQuota(v12, v11, v13);
          v22 = 1236;
LABEL_17:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, v22);
          return (unsigned int)v5;
        }
        if ( UnionRect(&rc1, &rcSrc2, &rcDst) && !EqualRect(&rc1, &rcDst) )
        {
          SetLastError(0);
          v23 = CreateRectRgnCoerceInvalid(&rcSrc2);
          if ( !v23 )
          {
            v14 = GetLastError();
            v5 = v14;
            if ( v14 > 0 )
              v5 = (unsigned __int16)v14 | 0x80070000;
            if ( v5 >= 0 )
              v5 = CheckGUIHandleQuota(v16, v15, v17);
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x4DAu);
            return (unsigned int)v5;
          }
          SetLastError(0);
          if ( !CombineRgn(RoundRectRgnCoerceInvalid, RoundRectRgnCoerceInvalid, v23, 1) )
          {
            v18 = GetLastError();
            v5 = v18;
            if ( v18 > 0 )
              v5 = (unsigned __int16)v18 | 0x80070000;
            v22 = 1243;
            if ( v5 >= 0 )
              v5 = -2003304445;
            goto LABEL_17;
          }
          ReleaseGDIObject<HRGN__ *>((void **)&v23);
        }
        v19 = (HRGN)*((_QWORD *)a3 + 12);
        SetLastError(0);
        if ( !CombineRgn(v19, v19, v9, 2) )
        {
          v20 = GetLastError();
          v5 = v20;
          if ( v20 > 0 )
            v5 = (unsigned __int16)v20 | 0x80070000;
          v22 = 1248;
          if ( v5 >= 0 )
            v5 = -2003304445;
          goto LABEL_17;
        }
        ReleaseGDIObject<HRGN__ *>((void **)&RoundRectRgnCoerceInvalid);
      }
    }
  }
  return (unsigned int)v5;
}

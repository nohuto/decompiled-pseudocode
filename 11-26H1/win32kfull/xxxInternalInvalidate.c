/*
 * XREFs of xxxInternalInvalidate @ 0x14002CCF0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x14011D54C (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x14023D21C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     NtUserLockWindowUpdate @ 0x140279BF0 (NtUserLockWindowUpdate.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1402ACC58 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140347F18 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     CalcWindowRgn @ 0x14002C744 (CalcWindowRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x14002E1D8 (PhysicalToLogicalInPlaceRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxDoSyncPaint @ 0x140046CFC (xxxDoSyncPaint.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  struct tagWND *v5; // rdi
  struct tagWND *i; // r14
  HRGN v7; // r12
  __int64 v8; // r8
  struct tagRECT v9; // xmm0
  HRGN v10; // r13
  HRGN v11; // r8
  struct tagWND *v12; // r15
  struct tagWND *v13; // r8
  __int64 v14; // rdx
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  HRGN RectRgnIndirect; // rax
  HRGN v20; // [rsp+30h] [rbp-50h]
  __int128 v21; // [rsp+38h] [rbp-48h] BYREF
  HRGN v22; // [rsp+48h] [rbp-38h]
  struct tagWND *v23; // [rsp+50h] [rbp-30h]
  struct tagRECT v24; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v22 = a2;
  v23 = 0LL;
  v4 = a3;
  v5 = a1;
  i = 0LL;
  v7 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) != 0 )
        break;
    }
    if ( i )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v7 = RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          a2 = RectRgnIndirect;
          v22 = RectRgnIndirect;
        }
        else
        {
          a2 = v22;
        }
      }
      v23 = v5;
      v4 |= 0x80u;
      v5 = i;
    }
  }
  v8 = *((_QWORD *)v5 + 5);
  LOBYTE(a1) = ((v4 & 1) != 0) & (*(_BYTE *)(v8 + 26) >> 3);
  if ( (_BYTE)a1 )
    *((_DWORD *)v5 + 95) |= 0x4000u;
  if ( (v4 & 0x400) != 0 )
    v9 = *(struct tagRECT *)(v8 + 88);
  else
    v9 = *(struct tagRECT *)(v8 + 104);
  v24 = v9;
  if ( (v4 & 9) != 0 )
  {
    v10 = a2;
    if ( a2 == (HRGN)1 )
    {
      v10 = *(HRGN *)(W32GetUserSessionState(a1, 1LL) + 63352);
      CalcWindowRgn((__int64)v5, (__int64)v10, (v4 & 0x400) == 0);
    }
    v11 = v10;
    if ( (v4 & 1) != 0 )
    {
      v12 = v5;
      v13 = v5;
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v12 = (struct tagWND *)*((_QWORD *)v12 + 13);
          if ( !v12 )
            break;
          v14 = *((_QWORD *)v12 + 5);
          if ( (*(_BYTE *)(v14 + 31) & 0x30) != 0x10 )
            return;
          v21 = *(_OWORD *)(v14 + 104);
          PhysicalToLogicalInPlaceRect(v13, &v21);
          left = v24.left;
          right = v24.right;
          if ( v24.left <= (int)v21 )
            left = v21;
          v24.left = left;
          if ( v24.right >= SDWORD2(v21) )
            right = DWORD2(v21);
          v24.right = right;
          if ( left >= right )
            return;
          top = v24.top;
          bottom = v24.bottom;
          if ( v24.top <= SDWORD1(v21) )
            top = DWORD1(v21);
          v24.top = top;
          if ( v24.bottom >= SHIDWORD(v21) )
            bottom = HIDWORD(v21);
          v24.bottom = bottom;
          if ( top >= bottom )
            return;
          if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 27LL) & 0x20) != 0 )
            break;
          v13 = v12;
        }
      }
      v11 = v10;
    }
  }
  else
  {
    v20 = *(HRGN *)(W32GetUserSessionState(a1, a2) + 63352);
    SetEmptyRgn(v20);
    v11 = v20;
  }
  InternalInvalidate2(v5, v22, v11, &v24, v4);
  if ( i )
  {
    v5 = v23;
    if ( v7 )
      GreDeleteObject(v7);
  }
  if ( (v4 & 0x100) != 0 )
  {
    xxxInternalUpdateWindow(v5, (v4 & 0x40) == 0);
  }
  else if ( (v4 & 0x200) != 0 )
  {
    if ( (v4 & 0x40) == 0 )
      v3 = (v4 & 0x80u) != 0 ? 32 : 4;
    xxxDoSyncPaint(v5, v3);
  }
}

/*
 * XREFs of xxxRedrawWindow @ 0x1C00520F0
 * Callers:
 *     NtUserRedrawWindow @ 0x1C0051B70 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C0051F00 (NtUserInvalidateRect.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 *     NtUserInvalidateRgn @ 0x1C00FF860 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C0104000 (xxxValidateRect.c)
 *     xxxValidateRgn @ 0x1C010F200 (xxxValidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C0113270 (_DwmLockScreenUpdates.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C014F2F0 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE060 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01EFABC (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C02156F4 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     MirrorRegion @ 0x1C0076E60 (MirrorRegion.c)
 *     CalcWindowRgn @ 0x1C007D1B4 (CalcWindowRgn.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoSyncPaint @ 0x1C00DB9D8 (xxxDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, _DWORD *a2, HRGN a3, int a4)
{
  struct tagWND *v6; // rbx
  struct tagWND *v7; // rcx
  char v8; // al
  unsigned int v9; // r15d
  __int64 v10; // r11
  int v11; // edx
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi
  struct tagWND *i; // r14
  __int64 RectRgnIndirect; // rax
  struct tagRECT *v18; // rax
  char v19; // al
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 left; // rcx
  int bottom; // r15d
  int right; // r13d
  LONG top; // r12d
  char v26; // al
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // r11
  struct tagWND *v30; // r10
  LONG v31; // r8d
  LONG v32; // r9d
  float *v33; // r10
  LONG v34; // eax
  float v35; // xmm2_4
  float v36; // xmm3_4
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  LONG v40; // eax
  LONG v41; // r8d
  LONG v42; // r9d
  __int64 v44; // [rsp+30h] [rbp-69h]
  unsigned int v45; // [rsp+38h] [rbp-61h]
  HRGN v46; // [rsp+40h] [rbp-59h]
  struct tagRECT v47; // [rsp+48h] [rbp-51h] BYREF
  struct tagWND *v48; // [rsp+58h] [rbp-41h]
  __int64 v49; // [rsp+60h] [rbp-39h]
  int v50; // [rsp+68h] [rbp-31h]
  unsigned int v51; // [rsp+6Ch] [rbp-2Dh]
  int v52; // [rsp+70h] [rbp-29h]
  struct tagWND *v53; // [rsp+78h] [rbp-21h]
  _QWORD v54[3]; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v55; // [rsp+98h] [rbp-1h] BYREF

  v44 = (__int64)a3;
  v6 = a1;
  if ( !a1 )
    v6 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
  v7 = v6;
  if ( !v6 )
  {
LABEL_9:
    v9 = 0;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != (HRGN)1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion(v6, ghrgnInv0, 1LL);
          v44 = ghrgnInv0;
        }
        if ( v6 != (struct tagWND *)GetDesktopWindow(v6, a2) )
        {
          GreOffsetRgn(v10, *((unsigned int *)v6 + 32), *((unsigned int *)v6 + 33));
          v10 = v44;
        }
      }
      else if ( a2 )
      {
        v44 = ghrgnInv0;
        if ( (*((_BYTE *)v6 + 50) & 0x40) != 0 )
        {
          v11 = *((_DWORD *)v6 + 34) - *((_DWORD *)v6 + 32) - *a2;
          *a2 = *((_DWORD *)v6 + 34) - *((_DWORD *)v6 + 32) - a2[2];
          a2[2] = v11;
        }
        v12 = *((_QWORD *)v6 + 3);
        v13 = 0LL;
        if ( v12 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( v14 )
            v13 = *(struct tagWND **)(v14 + 16);
        }
        if ( v6 == v13 )
          SetRectRgnIndirect(ghrgnInv0, a2);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*a2 + *((_DWORD *)v6 + 32)),
            (unsigned int)(*((_DWORD *)v6 + 33) + a2[1]),
            (unsigned int)(*((_DWORD *)v6 + 32) + a2[2]));
        v10 = ghrgnInv0;
      }
      else
      {
        v10 = 1LL;
        v44 = 1LL;
      }
    }
    else
    {
      v10 = (__int64)a3;
    }
    v54[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v54;
    v54[1] = v6;
    if ( v6 )
      ++*((_DWORD *)v6 + 2);
    v15 = a4 | 0x1000;
    v53 = 0LL;
    v49 = 0LL;
    i = 0LL;
    if ( (v15 & 1) != 0 )
    {
      for ( i = v6; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( (*((_BYTE *)i + 51) & 2) != 0 )
          break;
      }
      if ( i )
      {
        if ( v10 == 1 )
        {
          RectRgnIndirect = GreCreateRectRgnIndirect((char *)v6 + 112);
          v49 = RectRgnIndirect;
          if ( RectRgnIndirect )
          {
            v10 = RectRgnIndirect;
            v44 = RectRgnIndirect;
          }
          else
          {
            v10 = v44;
          }
        }
        else
        {
          v49 = 0LL;
        }
        v53 = v6;
        v15 |= 0x80u;
        v6 = i;
      }
    }
    if ( (*((_BYTE *)v6 + 50) & 8) != 0 && (v15 & 1) != 0 )
      *((_DWORD *)v6 + 72) |= 2u;
    v18 = (struct tagRECT *)((char *)v6 + 112);
    if ( (v15 & 0x400) == 0 )
      v18 = (struct tagRECT *)((char *)v6 + 128);
    v47 = *v18;
    if ( (v15 & 9) != 0 )
    {
      v46 = (HRGN)v10;
      if ( v10 == 1 )
      {
        v46 = (HRGN)ghrgnInv1;
        CalcWindowRgn(v6, ghrgnInv1, (v15 & 0x400) == 0);
      }
    }
    else
    {
      v46 = (HRGN)ghrgnInv1;
      SetEmptyRgn(ghrgnInv1);
    }
    if ( (v15 & 9) == 0
      || (v15 & 1) == 0
      || (v19 = *((_BYTE *)v6 + 51), v20 = (unsigned __int64)v6, v48 = v6, (v19 & 0x20) != 0)
      || (v21 = *((_QWORD *)v6 + 11)) == 0 )
    {
LABEL_74:
      if ( (v15 & 0x1001) == 0x1001 && *(_QWORD *)(gpDispInfo + 72LL) )
      {
        v55 = 0LL;
        GreGetRgnBox(v46, &v55);
        IntersectRect(&v55, &v55, &v47);
        SpbCheckRect(v6, &v55, 0);
      }
      InternalInvalidate2(v6, (HRGN)v44, v46, &v47, v15);
      if ( i )
      {
        v6 = v53;
        if ( v49 )
          GreDeleteObject(v49);
      }
      if ( (v15 & 0x100) != 0 )
      {
        xxxInternalUpdateWindow(v6, ((unsigned __int8)~(_BYTE)v15 >> 6) & 1);
      }
      else if ( (v15 & 0x200) != 0 )
      {
        if ( (v15 & 0x40) == 0 )
        {
          v9 = 4;
          if ( (v15 & 0x80) != 0 )
            v9 = 32;
        }
        xxxDoSyncPaint(v6, v9);
      }
LABEL_87:
      ThreadUnlock1(left, v20);
      return 1LL;
    }
    left = (unsigned int)v47.left;
    bottom = v47.bottom;
    right = v47.right;
    top = v47.top;
    v45 = v47.left;
    while ( 1 )
    {
      v26 = *(_BYTE *)(v21 + 55);
      if ( (v26 & 0x10) == 0 || (v26 & 0x20) != 0 )
        goto LABEL_87;
      v27 = *(_QWORD *)(v20 + 272) == 0LL;
      v55 = *(struct tagRECT *)(v21 + 128);
      if ( v27 )
        goto LABEL_60;
      if ( !(unsigned int)IsWindowDesktopComposed(v20) )
        break;
      v28 = Win32AllocPool(8LL);
      v29 = v28;
      if ( !v28 )
        break;
      v30 = v48;
      v31 = v55.left;
      v32 = v55.right;
      *(_BYTE *)(v28 + 4) = 1;
      v33 = (float *)*((_QWORD *)v30 + 34);
      v34 = v55.top;
      v35 = 1.0 / *v33;
      v36 = 1.0 / v33[5];
      v37 = (int)v33[13];
      v38 = -(int)v33[12];
      *(_BYTE *)(v29 + 4) = 0;
      v39 = -v37;
      v50 = (int)(float)((float)(v38 + v31) * v35);
      v52 = (int)(float)((float)(v39 + v34) * v36);
      LODWORD(v48) = (int)(float)((float)(v38 + v32) * v35);
      v51 = (int)(float)((float)(v39 + v55.bottom) * v36);
      Win32FreePool(v29);
      left = v45;
      v40 = v52;
      v20 = v51;
      v41 = v50;
      v42 = (int)v48;
LABEL_61:
      if ( (int)left <= v41 )
        left = (unsigned int)v41;
      v45 = left;
      if ( right >= v42 )
        right = v42;
      v47.left = left;
      v47.right = right;
      if ( (int)left >= right )
        goto LABEL_87;
      if ( top <= v40 )
        top = v40;
      v47.top = top;
      if ( bottom >= (int)v20 )
        bottom = v20;
      v47.bottom = bottom;
      if ( top >= bottom )
        goto LABEL_87;
      if ( (*(_BYTE *)(v21 + 51) & 0x20) == 0 )
      {
        v20 = v21;
        v21 = *(_QWORD *)(v21 + 88);
        v48 = (struct tagWND *)v20;
        if ( v21 )
          continue;
      }
      v9 = 0;
      goto LABEL_74;
    }
    left = v45;
LABEL_60:
    v20 = (unsigned int)v55.bottom;
    v42 = v55.right;
    v40 = v55.top;
    v41 = v55.left;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v8 = *((_BYTE *)v7 + 55);
    if ( (v8 & 0x10) == 0 || (v8 & 0x20) != 0 && v7 != v6 )
      return 1LL;
    if ( (*((_WORD *)v7 + 33) & 0x3FFF) != 0x29D )
    {
      v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
      if ( v7 )
        continue;
    }
    goto LABEL_9;
  }
}

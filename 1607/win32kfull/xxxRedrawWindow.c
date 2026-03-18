/*
 * XREFs of xxxRedrawWindow @ 0x1C0059F20
 * Callers:
 *     NtUserRedrawWindow @ 0x1C0059BF0 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C0059D00 (NtUserInvalidateRect.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxValidateRgn @ 0x1C011B4A0 (xxxValidateRgn.c)
 *     NtUserInvalidateRgn @ 0x1C0120750 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C01267E0 (xxxValidateRect.c)
 *     _DwmLockScreenUpdates @ 0x1C0133EA0 (_DwmLockScreenUpdates.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154CD0 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4420 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01E57FC (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C020E55C (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     CalcWindowRgn @ 0x1C0056EE4 (CalcWindowRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     MirrorRegion @ 0x1C00A6900 (MirrorRegion.c)
 *     xxxDoSyncPaint @ 0x1C00F97EC (xxxDoSyncPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  unsigned int v15; // r14d
  struct tagWND *i; // rsi
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
  __int64 v39; // r8
  int v40; // edx
  LONG v41; // eax
  LONG v42; // r8d
  LONG v43; // r9d
  __int64 v45; // [rsp+30h] [rbp-69h]
  unsigned int v46; // [rsp+38h] [rbp-61h]
  HRGN v47; // [rsp+40h] [rbp-59h]
  struct tagRECT v48; // [rsp+48h] [rbp-51h] BYREF
  struct tagWND *v49; // [rsp+58h] [rbp-41h]
  int v50; // [rsp+60h] [rbp-39h]
  unsigned int v51; // [rsp+64h] [rbp-35h]
  unsigned int v52; // [rsp+68h] [rbp-31h]
  __int64 v53; // [rsp+70h] [rbp-29h]
  struct tagWND *v54; // [rsp+78h] [rbp-21h]
  _QWORD v55[3]; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v56; // [rsp+98h] [rbp-1h] BYREF

  v45 = (__int64)a3;
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
          v45 = ghrgnInv0;
        }
        if ( v6 != (struct tagWND *)GetDesktopWindow(v6) )
        {
          GreOffsetRgn(v10, *((unsigned int *)v6 + 32), *((unsigned int *)v6 + 33));
          v10 = v45;
        }
      }
      else if ( a2 )
      {
        v45 = ghrgnInv0;
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
            (unsigned int)(*((_DWORD *)v6 + 32) + a2[2]),
            *((_DWORD *)v6 + 33) + a2[3]);
        v10 = ghrgnInv0;
      }
      else
      {
        v10 = 1LL;
        v45 = 1LL;
      }
    }
    else
    {
      v10 = (__int64)a3;
    }
    v55[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v55;
    v55[1] = v6;
    if ( v6 )
      ++*((_DWORD *)v6 + 2);
    v15 = a4 | 0x1000;
    v54 = 0LL;
    v53 = 0LL;
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
          v53 = RectRgnIndirect;
          if ( RectRgnIndirect )
          {
            v10 = RectRgnIndirect;
            v45 = RectRgnIndirect;
          }
          else
          {
            v10 = v45;
          }
        }
        else
        {
          v53 = 0LL;
        }
        v54 = v6;
        v15 |= 0x80u;
        v6 = i;
      }
    }
    if ( (*((_BYTE *)v6 + 50) & 8) != 0 && (v15 & 1) != 0 )
      *((_DWORD *)v6 + 72) |= 2u;
    v18 = (struct tagRECT *)((char *)v6 + 112);
    if ( (v15 & 0x400) == 0 )
      v18 = (struct tagRECT *)((char *)v6 + 128);
    v48 = *v18;
    if ( (v15 & 9) != 0 )
    {
      v47 = (HRGN)v10;
      if ( v10 == 1 )
      {
        v47 = (HRGN)ghrgnInv1;
        CalcWindowRgn((__int64)v6, ghrgnInv1, (v15 & 0x400) == 0);
      }
    }
    else
    {
      v47 = (HRGN)ghrgnInv1;
      SetEmptyRgn(ghrgnInv1);
    }
    if ( (v15 & 9) == 0
      || (v15 & 1) == 0
      || (v19 = *((_BYTE *)v6 + 51), v20 = (unsigned __int64)v6, v49 = v6, (v19 & 0x20) != 0)
      || (v21 = *((_QWORD *)v6 + 11)) == 0 )
    {
LABEL_74:
      if ( (v15 & 0x1001) == 0x1001 && *(_QWORD *)(gpDispInfo + 72LL) )
      {
        v56 = 0LL;
        GreGetRgnBox(v47, &v56);
        IntersectRect(&v56, &v56, &v48);
        SpbCheckRect(v6, &v56, 0);
      }
      InternalInvalidate2(v6, (HRGN)v45, v47, &v48, v15);
      if ( i )
      {
        v6 = v54;
        if ( v53 )
          GreDeleteObject(v53);
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
          if ( (v15 & 0x80u) != 0 )
            v9 = 32;
        }
        xxxDoSyncPaint(v6, v9);
      }
LABEL_87:
      ThreadUnlock1(left, v20);
      return 1LL;
    }
    left = (unsigned int)v48.left;
    bottom = v48.bottom;
    right = v48.right;
    top = v48.top;
    v46 = v48.left;
    while ( 1 )
    {
      v26 = *(_BYTE *)(v21 + 55);
      if ( (v26 & 0x10) == 0 || (v26 & 0x20) != 0 )
        goto LABEL_87;
      v27 = *(_QWORD *)(v20 + 272) == 0LL;
      v56 = *(struct tagRECT *)(v21 + 128);
      if ( v27 )
        goto LABEL_60;
      if ( !(unsigned int)IsWindowDesktopComposed(v20) )
        break;
      v28 = Win32AllocPool(8LL, 1919775573LL);
      v29 = v28;
      if ( !v28 )
        break;
      v30 = v49;
      v31 = v56.left;
      v32 = v56.right;
      *(_BYTE *)(v28 + 4) = 1;
      v33 = (float *)*((_QWORD *)v30 + 34);
      v34 = v56.top;
      v35 = 1.0 / *v33;
      v36 = 1.0 / v33[5];
      v37 = (int)v33[13];
      v38 = -(int)v33[12];
      *(_BYTE *)(v29 + 4) = 0;
      v39 = (unsigned int)(v38 + v31);
      v40 = -v37;
      v52 = (int)(float)((float)(int)v39 * v35);
      v50 = (int)(float)((float)(v40 + v34) * v36);
      LODWORD(v49) = (int)(float)((float)(v38 + v32) * v35);
      v51 = (int)(float)((float)(v40 + v56.bottom) * v36);
      Win32FreePool(v29, v52, v39);
      left = v46;
      v41 = v50;
      v20 = v51;
      v42 = v52;
      v43 = (int)v49;
LABEL_61:
      if ( (int)left <= v42 )
        left = (unsigned int)v42;
      v46 = left;
      if ( right >= v43 )
        right = v43;
      v48.left = left;
      v48.right = right;
      if ( (int)left >= right )
        goto LABEL_87;
      if ( top <= v41 )
        top = v41;
      v48.top = top;
      if ( bottom >= (int)v20 )
        bottom = v20;
      v48.bottom = bottom;
      if ( top >= bottom )
        goto LABEL_87;
      if ( (*(_BYTE *)(v21 + 51) & 0x20) == 0 )
      {
        v20 = v21;
        v21 = *(_QWORD *)(v21 + 88);
        v49 = (struct tagWND *)v20;
        if ( v21 )
          continue;
      }
      v9 = 0;
      goto LABEL_74;
    }
    left = v46;
LABEL_60:
    v20 = (unsigned int)v56.bottom;
    v43 = v56.right;
    v41 = v56.top;
    v42 = v56.left;
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

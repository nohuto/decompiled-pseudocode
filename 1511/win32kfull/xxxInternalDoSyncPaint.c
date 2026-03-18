/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C006D570
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxDoSyncPaint @ 0x1C00DB9D8 (xxxDoSyncPaint.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     xxxSendEraseBkgnd @ 0x1C0069A20 (xxxSendEraseBkgnd.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007EEF8 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F1FD4 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 */

char __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2)
{
  char v2; // di
  __int64 v5; // rax
  int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // r10d
  int v10; // r11d
  _BOOL8 v11; // rdx
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // edx
  unsigned __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN NCUpdateRgn; // rax
  HRGN v21; // rbp
  void *v22; // rax
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+60h] [rbp+8h]
  unsigned int v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+68h] [rbp+10h]
  __int64 v28; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v5 = a1;
  if ( !a1 )
  {
LABEL_4:
    v6 = *(_DWORD *)(a1 + 52);
    v26 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 288);
    *(_BYTE *)(a1 + 42) &= ~0x40u;
    v25 = v7;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v8 = v26;
      v9 = *(_DWORD *)(a1 + 52);
      v10 = *(_DWORD *)(a1 + 48);
      v11 = v26 != v10;
      v27 = *(_DWORD *)(a1 + 288);
      if ( v6 == v9 )
      {
        if ( !v11 )
        {
          if ( v25 == v27 || ((v25 ^ v27) & 0x5C00180) == 0 )
            goto LABEL_8;
          goto LABEL_55;
        }
        if ( (((unsigned int)v8 ^ v10) & 0x4E27A9) != 0 )
        {
LABEL_55:
          v22 = (void *)ReferenceDwmApiPort(v25 != v27, v11, v8, v25);
          DwmAsyncChildStyleChange(v22);
        }
      }
      else if ( ((v6 ^ v9) & 0xB9CF0000) != 0 )
      {
        goto LABEL_55;
      }
    }
LABEL_8:
    LOBYTE(v5) = *(_BYTE *)(a1 + 41);
    if ( (v5 & 8) != 0 )
      v2 = 2;
    if ( (v5 & 2) != 0 )
      v2 |= 1u;
    if ( (v2 & 3) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(a1 + 160) )
        {
          SetOrClrWF(0LL, a1, 258LL, 1LL);
          SetOrClrWF(0LL, a1, 260LL, 1LL);
          v2 &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 16) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)a1, 1);
          v21 = NCUpdateRgn;
          if ( ((*(_BYTE *)(a1 + 41) >> 3) & ((v2 & 2) != 0)) != 0 )
            xxxSendNCPaint((struct tagWND *)a1, NCUpdateRgn);
          if ( (v2 & 1) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 41) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v21);
              v21 = GetNCUpdateRgn((struct tagWND *)a1, 0);
            }
            if ( (*(_BYTE *)(a1 + 41) & 2) != 0 )
            {
              SetOrClrWF(0LL, a1, 258LL, 1LL);
              SetOrClrWF(0LL, a1, 260LL, 1LL);
              xxxSendEraseBkgnd(a1, 0LL, (__int64)v21);
            }
            ClearHungFlag((struct tagWND *)a1, 0x308u);
          }
          LOBYTE(v5) = DeleteMaybeSpecialRgn(v21);
        }
        else
        {
          LOBYTE(v5) = *(_BYTE *)(a1 + 55) & 0xC0;
          if ( (_BYTE)v5 != 64 )
          {
            v5 = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( a1 != *(_QWORD *)(v5 + 16) )
            {
              LODWORD(v5) = IsHungWindow(a1);
              if ( (_DWORD)v5 )
              {
                if ( (*(_BYTE *)(a1 + 43) & 8) != 0 )
                {
                  ClearHungFlag((struct tagWND *)a1, 0x308u);
                  LOBYTE(v5) = xxxRedrawHungWindow((struct tagWND *)a1);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0LL, a1, 264LL, 1LL);
        SetOrClrWF(0LL, a1, 258LL, 1LL);
        SetOrClrWF(0LL, a1, 1664LL, 1LL);
        SetOrClrWF(0LL, a1, 260LL, 1LL);
        LOBYTE(v5) = ClearHungFlag((struct tagWND *)a1, 0x308u);
      }
    }
    goto LABEL_13;
  }
  while ( (*(_BYTE *)(v5 + 51) & 2) == 0 )
  {
    v5 = *(_QWORD *)(v5 + 88);
    if ( !v5 )
      goto LABEL_4;
  }
LABEL_13:
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(a1 + 55) & 2) != 0 )
  {
    v5 = BuildHwndList(*(_QWORD *)(a1 + 96), 2LL);
    v28 = v5;
    if ( v5 )
    {
      v12 = v5 + 32;
      v13 = *(_QWORD *)(v5 + 32);
      if ( v13 != 1 )
      {
        do
        {
          if ( v13 )
          {
            PsGetThreadWin32Thread(KeGetCurrentThread());
            v14 = (unsigned __int16)v13;
            if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
            {
              v15 = v13 >> 16;
              v16 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v14 * *((_DWORD *)&gSharedInfo + 4)));
              if ( ((_WORD)v15 == *((_WORD *)v16 + 9)
                 || (_WORD)v15 == 0xFFFF
                 || !(_WORD)v15 && PsGetCurrentProcessWow64Process(gSharedInfo))
                && (*((_BYTE *)v16 + 17) & 1) == 0
                && *((_BYTE *)v16 + 16) == 1 )
              {
                v17 = *v16;
                if ( *v16 )
                {
                  if ( (*(_BYTE *)(v17 + 55) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v17 + 16) )
                  {
                    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = v24;
                    v24[1] = v17;
                    ++*(_DWORD *)(v17 + 8);
                    xxxInternalDoSyncPaint(v17, a2);
                    ThreadUnlock1(v19, v18);
                  }
                }
              }
            }
          }
          v13 = *(_QWORD *)(v12 + 8);
          v12 += 8LL;
        }
        while ( v13 != 1 );
        v5 = v28;
      }
      LOBYTE(v5) = FreeHwndList(v5);
    }
  }
  return v5;
}

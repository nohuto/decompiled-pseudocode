/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0076920
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxDoSyncPaint @ 0x1C00F97EC (xxxDoSyncPaint.c)
 * Callees:
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C010BBF0 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0112454 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall xxxInternalDoSyncPaint(__int64 a1, _BOOL8 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  bool v5; // di
  __int64 v7; // rax
  int v8; // ebp
  unsigned int v9; // eax
  int v10; // r10d
  int v11; // r11d
  struct tagBWL *v12; // rsi
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  HRGN NCUpdateRgn; // rax
  HRGN v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  void *v30; // rax
  _QWORD v32[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+70h] [rbp+8h]
  int v34; // [rsp+70h] [rbp+8h]
  struct tagBWL *v35; // [rsp+70h] [rbp+8h]
  BOOL v36; // [rsp+78h] [rbp+10h]
  unsigned int v37; // [rsp+80h] [rbp+18h]

  v36 = a2;
  v4 = 0;
  v5 = a2;
  v7 = a1;
  if ( !a1 )
  {
LABEL_4:
    v8 = *(_DWORD *)(a1 + 52);
    v33 = *(_DWORD *)(a1 + 48);
    v9 = *(_DWORD *)(a1 + 288);
    *(_BYTE *)(a1 + 42) &= ~0x40u;
    v37 = v9;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      a3 = v33;
      v10 = *(_DWORD *)(a1 + 52);
      v11 = *(_DWORD *)(a1 + 48);
      a4 = v37;
      a2 = v33 != v11;
      v34 = *(_DWORD *)(a1 + 288);
      if ( v8 == v10 )
      {
        if ( !a2 )
        {
          if ( v37 == v34 || ((v37 ^ v34) & 0x5C00180) == 0 )
            goto LABEL_8;
          goto LABEL_67;
        }
        if ( (((unsigned int)a3 ^ v11) & 0x4E27A9) != 0 )
        {
LABEL_67:
          v30 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v30);
        }
      }
      else if ( ((v8 ^ v10) & 0xB9CF0000) != 0 )
      {
        goto LABEL_67;
      }
    }
LABEL_8:
    LOBYTE(v7) = *(_BYTE *)(a1 + 41);
    if ( (v7 & 8) != 0 )
      v4 = 2;
    if ( (v7 & 2) != 0 )
      v4 |= 1u;
    if ( (v4 & 3) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(a1 + 160) )
        {
          SetOrClrWF(0LL, a1, 258LL, 1LL);
          SetOrClrWF(0LL, a1, 260LL, 1LL);
          v4 &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 16) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)a1, 1);
          v26 = NCUpdateRgn;
          if ( ((*(_BYTE *)(a1 + 41) >> 3) & ((v4 & 2) != 0)) != 0 )
            xxxSendNCPaint((struct tagWND *)a1, NCUpdateRgn);
          if ( (v4 & 1) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 41) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v26);
              v26 = GetNCUpdateRgn((struct tagWND *)a1, 0);
            }
            if ( (*(_BYTE *)(a1 + 41) & 2) != 0 )
            {
              SetOrClrWF(0LL, a1, 258LL, 1LL);
              SetOrClrWF(0LL, a1, 260LL, 1LL);
              xxxSendEraseBkgnd(a1, 0LL, v26);
            }
            ClearHungFlag((struct tagWND *)a1, 0x308u);
          }
          LOBYTE(v7) = DeleteMaybeSpecialRgn(v26);
        }
        else
        {
          LOBYTE(v7) = *(_BYTE *)(a1 + 55) & 0xC0;
          if ( (_BYTE)v7 != 64 )
          {
            v7 = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( a1 != *(_QWORD *)(v7 + 16) )
            {
              LODWORD(v7) = IsHungWindow(a1);
              if ( (_DWORD)v7 )
              {
                if ( (*(_BYTE *)(a1 + 43) & 8) != 0 )
                {
                  ClearHungFlag((struct tagWND *)a1, 0x308u);
                  LOBYTE(v7) = xxxRedrawHungWindow((struct tagWND *)a1);
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
        LOBYTE(v7) = ClearHungFlag((struct tagWND *)a1, 0x308u);
      }
    }
    goto LABEL_13;
  }
  while ( (*(_BYTE *)(v7 + 51) & 2) == 0 )
  {
    v7 = *(_QWORD *)(v7 + 88);
    if ( !v7 )
      goto LABEL_4;
  }
LABEL_13:
  if ( (v5 & 0x20) != 0 || (v5 & 4) != 0 && (*(_BYTE *)(a1 + 55) & 2) != 0 )
  {
    v12 = pbwlCache;
    v13 = *(_QWORD **)(a1 + 96);
    v35 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v7 = Win32AllocPool(296LL, 1819767637LL);
      v35 = (struct tagBWL *)v7;
      v12 = (struct tagBWL *)v7;
      if ( !v7 )
        return v7;
      *(_QWORD *)(v7 + 16) = v7 + 280;
    }
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 1) = (char *)v12 + 32;
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *((_QWORD *)v12 + 3);
        if ( !v14 || v14 == v13[2] )
        {
          **((_QWORD **)v12 + 1) = *v13;
          *((_QWORD *)v12 + 1) += 8LL;
          v15 = *((_QWORD *)v12 + 1);
          if ( v15 == *((_QWORD *)v12 + 2) )
          {
            v27 = v15 - (_QWORD)v12;
            v28 = UserReAllocPool(v12, (unsigned int)v27 + 8LL, (unsigned int)v27 + 72LL, 1819767637LL);
            if ( !v28 )
            {
LABEL_23:
              v35 = v12;
              break;
            }
            v29 = v28 + v27;
            v12 = (struct tagBWL *)v28;
            *(_QWORD *)(v28 + 8) = v29;
            *(_QWORD *)(v28 + 16) = v29 + 64;
          }
        }
        v13 = (_QWORD *)v13[9];
        if ( !v13 )
          goto LABEL_23;
      }
    }
    v16 = (_QWORD *)*((_QWORD *)v12 + 1);
    if ( (unsigned __int64)v16 >= *((_QWORD *)v12 + 2) )
    {
      LOBYTE(v7) = Win32FreePool(v12, a2, a3);
    }
    else
    {
      v17 = gptiCurrent;
      *v16 = 1LL;
      v18 = (char *)v12 + 32;
      *((_QWORD *)v12 + 3) = gptiCurrent;
      *(_QWORD *)v12 = gpbwlList;
      gpbwlList = v12;
      v19 = *((_QWORD *)v12 + 4);
      if ( v19 != 1 )
      {
        do
        {
          if ( v19 )
          {
            PsGetThreadWin32Thread(KeGetCurrentThread(), v17, a3, a4);
            v17 = (unsigned __int16)v19;
            if ( (unsigned __int64)(unsigned __int16)v19 < *(_QWORD *)(gpsi + 8LL) )
            {
              v20 = v19 >> 16;
              v21 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v17 * *((_DWORD *)&gSharedInfo + 4)));
              if ( ((_WORD)v20 == *((_WORD *)v21 + 9)
                 || (_WORD)v20 == 0xFFFF
                 || !(_WORD)v20 && PsGetCurrentProcessWow64Process(gSharedInfo))
                && (*((_BYTE *)v21 + 17) & 1) == 0
                && *((_BYTE *)v21 + 16) == 1 )
              {
                v22 = *v21;
                if ( *v21 )
                {
                  v17 = gptiCurrent;
                  if ( (*(_BYTE *)(v22 + 55) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v22 + 16) )
                  {
                    v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = v32;
                    v32[1] = v22;
                    ++*(_DWORD *)(v22 + 8);
                    xxxInternalDoSyncPaint(v22, v36);
                    ThreadUnlock1(v24, v23);
                  }
                }
              }
            }
          }
          v19 = *((_QWORD *)v18 + 1);
          v18 += 8;
        }
        while ( v19 != 1 );
        v12 = v35;
      }
      LOBYTE(v7) = FreeHwndList(v12);
    }
  }
  return v7;
}

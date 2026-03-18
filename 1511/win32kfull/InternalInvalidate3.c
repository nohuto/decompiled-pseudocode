/*
 * XREFs of InternalInvalidate3 @ 0x1C0052F58
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     CalcWindowRgn @ 0x1C007D1B4 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     DecPaintCount @ 0x1C00F15F4 (DecPaintCount.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00F3654 (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetWakeBitInterMoveSize @ 0x1C01D3354 (SetWakeBitInterMoveSize.c)
 *     IncPaintCount @ 0x1C0224528 (IncPaintCount.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  struct tagWND *v5; // rdi
  int v6; // esi
  struct tagWND *v7; // rax
  BOOL v8; // ebp
  int v9; // esi
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebp
  int v15; // ebp
  int v16; // r15d
  int v17; // r12d
  __int64 v18; // rcx
  int v19; // esi
  int v20; // ebp
  int v21; // r15d
  int v22; // r12d
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rcx
  bool v26; // cf
  __int64 v27; // rbx
  int v28; // r8d
  __int64 EmptyRgnPublic; // rax
  __int64 v30; // rax
  int v31; // eax
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  __int64 v35; // rbx
  int v36; // edx
  int v37; // [rsp+20h] [rbp-38h]
  BOOL v38; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v5 = a1;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_38;
  a1 = (struct tagWND *)*((_QWORD *)a1 + 3);
  v7 = 0LL;
  if ( a1 )
  {
    a2 = *((_QWORD *)a1 + 1);
    if ( a2 )
      v7 = *(struct tagWND **)(a2 + 16);
  }
  if ( v5 != v7 || !(unsigned int)IsWindowDesktopComposed(v5) )
  {
LABEL_38:
    v8 = *((_QWORD *)v5 + 20) || (*((_BYTE *)v5 + 41) & 0x10) != 0;
    v38 = v8;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) != 0 )
        SetOrClrWF(1LL, v5, 272LL, 1LL);
      if ( !v6 )
        goto LABEL_36;
      v9 = *((_DWORD *)v5 + 13);
      v10 = *((_DWORD *)v5 + 12);
      v11 = *((_DWORD *)v5 + 72);
      *((_BYTE *)v5 + 41) &= ~1u;
      if ( !(unsigned int)IsWindowDesktopComposed(v5) )
        goto LABEL_16;
      v13 = *((unsigned int *)v5 + 13);
      v12 = *((unsigned int *)v5 + 12);
      v14 = *((_DWORD *)v5 + 72);
      if ( v9 == (_DWORD)v13 )
      {
        if ( v10 == (_DWORD)v12 )
        {
          if ( v11 != v14 && ((v11 ^ v14) & 0x5C00180) != 0 )
            goto LABEL_88;
LABEL_16:
          if ( *((_QWORD *)v5 + 2) != gptiCurrent )
          {
            SetOrClrWF(1LL, v5, 288LL, 1LL);
            if ( (*((_BYTE *)v5 + 44) & 1) != 0 )
            {
              SetOrClrWF(1LL, v5, 1026LL, 1LL);
              gRdwFlags |= a3;
            }
          }
          if ( v4 == 1 && (*((_BYTE *)v5 + 45) & 1) == 0 )
            SetOrClrWF(0LL, v5, 258LL, 1LL);
          if ( (a3 & 4) != 0 )
          {
            v15 = *((_DWORD *)v5 + 13);
            v16 = *((_DWORD *)v5 + 12);
            v17 = *((_DWORD *)v5 + 72);
            *((_BYTE *)v5 + 41) |= 2u;
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              v18 = *((unsigned int *)v5 + 13);
              v12 = *((unsigned int *)v5 + 12);
              v19 = *((_DWORD *)v5 + 72);
              if ( v15 == (_DWORD)v18 )
              {
                if ( v16 == (_DWORD)v12 )
                {
                  if ( v17 == v19 || ((v17 ^ v19) & 0x5C00180) == 0 )
                    goto LABEL_23;
                }
                else if ( ((v16 ^ (unsigned int)v12) & 0x4E27A9) == 0 )
                {
                  goto LABEL_23;
                }
              }
              else if ( ((v15 ^ (unsigned int)v18) & 0xB9CF0000) == 0 )
              {
                goto LABEL_23;
              }
              v33 = (void *)ReferenceDwmApiPort(v18, v12, v16 != (_DWORD)v12, v17 != v19);
              DwmAsyncChildStyleChange(v33);
            }
          }
LABEL_23:
          if ( (a3 & 0x404) != 0 && (*((_BYTE *)v5 + 48) & 0x20) == 0 )
          {
            if ( (*((_BYTE *)v5 + 43) & 0x18) == 0 && *((_QWORD *)v5 + 11) == GetDesktopWindow(v5, v12) )
              VWPLAddBase(gpvwplHungRedraw, 0LL, v5, 0xAu, v37);
            v20 = *((_DWORD *)v5 + 13);
            v21 = *((_DWORD *)v5 + 12);
            v22 = *((_DWORD *)v5 + 72);
            *((_BYTE *)v5 + 43) |= 8u;
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              v23 = *((unsigned int *)v5 + 13);
              v12 = *((unsigned int *)v5 + 12);
              v24 = *((_DWORD *)v5 + 72);
              if ( v20 != (_DWORD)v23 )
              {
                if ( ((v20 ^ (unsigned int)v23) & 0xB9CF0000) == 0 )
                  goto LABEL_30;
                goto LABEL_100;
              }
              if ( v21 != (_DWORD)v12 )
              {
                if ( ((v21 ^ (unsigned int)v12) & 0x4E27A9) == 0 )
                  goto LABEL_30;
                goto LABEL_100;
              }
              if ( v22 != v24 && ((v22 ^ v24) & 0x5C00180) != 0 )
              {
LABEL_100:
                v34 = (void *)ReferenceDwmApiPort(v23, v12, v22 != v24, v21 != (_DWORD)v12);
                DwmAsyncChildStyleChange(v34);
              }
            }
          }
LABEL_30:
          if ( (a3 & 0x400) != 0 )
            SetOrClrWF(1LL, v5, 264LL, 1LL);
          v25 = *((_QWORD *)v5 + 20);
          if ( v25 == 1 )
            goto LABEL_36;
          if ( v4 != 1 )
          {
            if ( v25 )
            {
              if ( (unsigned int)GreCombineRgn(v25, *((_QWORD *)v5 + 20), v4, 2LL) )
                goto LABEL_36;
            }
            else
            {
              EmptyRgnPublic = CreateEmptyRgnPublic(0LL, v12);
              *((_QWORD *)v5 + 20) = EmptyRgnPublic;
              if ( EmptyRgnPublic && (unsigned int)GreCombineRgn(EmptyRgnPublic, v4, 0LL, 5LL) )
              {
LABEL_36:
                if ( !v38 && (*((_QWORD *)v5 + 20) || (*((_BYTE *)v5 + 41) & 0x10) != 0) )
                {
                  v26 = (a3 & 0x20000) != 0;
                  v27 = *((_QWORD *)v5 + 2);
                  if ( v26 )
                  {
                    if ( v27 == W32GetThreadWin32Thread(KeGetCurrentThread()) )
                    {
                      IncPaintCount(v5);
                    }
                    else
                    {
                      v35 = *((_QWORD *)v5 + 2);
                      v36 = *(_DWORD *)(v35 + 520);
                      *(_DWORD *)(v35 + 520) = v36 + 1;
                      if ( !v36 )
                      {
                        EtwTraceWakePump(v35, v5, 15LL);
                        SetWakeBitInterMoveSize(v35);
                      }
                    }
                  }
                  else
                  {
                    v28 = *(_DWORD *)(v27 + 520);
                    *(_DWORD *)(v27 + 520) = v28 + 1;
                    if ( !v28 )
                    {
                      EtwTraceWakePump(v27, v5, 15LL);
                      SetWakeBit(v27, 32LL);
                    }
                  }
                }
                return;
              }
            }
          }
LABEL_48:
          DeleteMaybeSpecialRgn(*((_QWORD *)v5 + 20));
          *((_QWORD *)v5 + 20) = 1LL;
          goto LABEL_36;
        }
        if ( ((v10 ^ (unsigned int)v12) & 0x4E27A9) == 0 )
          goto LABEL_16;
      }
      else if ( ((v9 ^ (unsigned int)v13) & 0xB9CF0000) == 0 )
      {
        goto LABEL_16;
      }
LABEL_88:
      v32 = (void *)ReferenceDwmApiPort(v13, v12, v10 != (_DWORD)v12, v11 != v14);
      DwmAsyncChildStyleChange(v32);
      goto LABEL_16;
    }
    if ( (a3 & 0x838) == 0 )
      return;
    LOBYTE(a1) = (*((_BYTE *)v5 + 41) >> 5) & ((a3 & 0x8000) == 0);
    if ( (_BYTE)a1 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, v5, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_67;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, v5, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, v5, 264LL, 1LL);
      SetOrClrWF(0LL, v5, 1664LL, 1LL);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(v5);
    if ( !*((_QWORD *)v5 + 20) )
      goto LABEL_67;
    if ( (*((_BYTE *)v5 + 41) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_75;
      v4 = ghrgnInv2;
      CalcWindowRgn(v5, ghrgnInv2, 1LL);
    }
    if ( v4 == 1 )
    {
LABEL_80:
      DeleteMaybeSpecialRgn(*((_QWORD *)v5 + 20));
      *((_QWORD *)v5 + 20) = 0LL;
      SetOrClrWF(0LL, v5, 258LL, 1LL);
      ClearHungFlag(v5);
LABEL_67:
      if ( v8 && !*((_QWORD *)v5 + 20) && (*((_BYTE *)v5 + 41) & 0x10) == 0 )
        DecPaintCount(v5);
      return;
    }
LABEL_75:
    if ( *((_QWORD *)v5 + 20) == 1LL )
    {
      v30 = CreateEmptyRgnPublic(a1, a2);
      *((_QWORD *)v5 + 20) = v30;
      if ( !v30 || !(unsigned int)CalcWindowRgn(v5, v30, ((unsigned __int8)~*((_BYTE *)v5 + 41) >> 3) & 1) )
        goto LABEL_48;
    }
    v31 = GreCombineRgn(*((_QWORD *)v5 + 20), *((_QWORD *)v5 + 20), v4, 4LL);
    if ( !v31 )
      goto LABEL_48;
    if ( v31 != 1 )
      goto LABEL_67;
    goto LABEL_80;
  }
}

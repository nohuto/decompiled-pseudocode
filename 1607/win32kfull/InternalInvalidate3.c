/*
 * XREFs of InternalInvalidate3 @ 0x1C005AD8C
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     CalcWindowRgn @ 0x1C0056EE4 (CalcWindowRgn.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     DecPaintCount @ 0x1C005CB80 (DecPaintCount.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0113A60 (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetWakeBitInterMoveSize @ 0x1C01CB3D0 (SetWakeBitInterMoveSize.c)
 *     IncPaintCount @ 0x1C02250F0 (IncPaintCount.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, _BOOL8 a3, _BOOL8 a4)
{
  BOOL v4; // ebx
  __int64 v5; // r14
  struct tagWND *v6; // rdi
  BOOL v7; // esi
  struct tagWND *v8; // rax
  BOOL v9; // ebp
  int v10; // esi
  int v11; // r15d
  int v12; // r12d
  int v13; // ecx
  int v14; // ebp
  int v15; // ebp
  int v16; // r15d
  int v17; // r12d
  int v18; // ecx
  int v19; // esi
  int v20; // ebp
  int v21; // r15d
  int v22; // r12d
  int v23; // ecx
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

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a3;
  if ( !a3 )
    goto LABEL_38;
  a1 = (struct tagWND *)*((_QWORD *)a1 + 3);
  v8 = 0LL;
  if ( a1 )
  {
    a2 = *((_QWORD *)a1 + 1);
    if ( a2 )
      v8 = *(struct tagWND **)(a2 + 16);
  }
  if ( v6 != v8 || !(unsigned int)IsWindowDesktopComposed(v6) )
  {
LABEL_38:
    v9 = *((_QWORD *)v6 + 20) || (*((_BYTE *)v6 + 41) & 0x10) != 0;
    v38 = v9;
    if ( (v4 & 0x407) != 0 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1LL, v6, 272LL, 1LL);
      if ( !v7 )
        goto LABEL_36;
      v10 = *((_DWORD *)v6 + 13);
      v11 = *((_DWORD *)v6 + 12);
      v12 = *((_DWORD *)v6 + 72);
      *((_BYTE *)v6 + 41) &= ~1u;
      if ( !(unsigned int)IsWindowDesktopComposed(v6) )
        goto LABEL_16;
      v13 = *((_DWORD *)v6 + 13);
      a2 = *((unsigned int *)v6 + 12);
      v14 = *((_DWORD *)v6 + 72);
      a3 = v11 != (_DWORD)a2;
      a4 = v12 != v14;
      if ( v10 == v13 )
      {
        if ( v11 == (_DWORD)a2 )
        {
          if ( v12 != v14 && ((v12 ^ v14) & 0x5C00180) != 0 )
            goto LABEL_88;
LABEL_16:
          if ( *((_QWORD *)v6 + 2) != gptiCurrent )
          {
            SetOrClrWF(1LL, v6, 288LL, 1LL);
            if ( (*((_BYTE *)v6 + 44) & 1) != 0 )
            {
              SetOrClrWF(1LL, v6, 1026LL, 1LL);
              gRdwFlags |= v4;
            }
          }
          if ( v5 == 1 && (*((_BYTE *)v6 + 45) & 1) == 0 )
            SetOrClrWF(0LL, v6, 258LL, 1LL);
          if ( (v4 & 4) != 0 )
          {
            v15 = *((_DWORD *)v6 + 13);
            v16 = *((_DWORD *)v6 + 12);
            v17 = *((_DWORD *)v6 + 72);
            *((_BYTE *)v6 + 41) |= 2u;
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              v18 = *((_DWORD *)v6 + 13);
              a2 = *((unsigned int *)v6 + 12);
              v19 = *((_DWORD *)v6 + 72);
              a3 = v16 != (_DWORD)a2;
              a4 = v17 != v19;
              if ( v15 == v18 )
              {
                if ( v16 == (_DWORD)a2 )
                {
                  if ( v17 == v19 || ((v17 ^ v19) & 0x5C00180) == 0 )
                    goto LABEL_23;
                }
                else if ( ((v16 ^ (unsigned int)a2) & 0x4E27A9) == 0 )
                {
                  goto LABEL_23;
                }
              }
              else if ( ((v15 ^ v18) & 0xB9CF0000) == 0 )
              {
                goto LABEL_23;
              }
              v33 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildStyleChange(v33);
            }
          }
LABEL_23:
          if ( (v4 & 0x404) != 0 && (*((_BYTE *)v6 + 48) & 0x20) == 0 )
          {
            if ( (*((_BYTE *)v6 + 43) & 0x18) == 0 && *((_QWORD *)v6 + 11) == GetDesktopWindow(v6) )
              VWPLAddBase(gpvwplHungRedraw, 0LL, v6, 0xAu, v37);
            v20 = *((_DWORD *)v6 + 13);
            v21 = *((_DWORD *)v6 + 12);
            v22 = *((_DWORD *)v6 + 72);
            *((_BYTE *)v6 + 43) |= 8u;
            if ( (unsigned int)IsWindowDesktopComposed(v6) )
            {
              v23 = *((_DWORD *)v6 + 13);
              a2 = *((unsigned int *)v6 + 12);
              v24 = *((_DWORD *)v6 + 72);
              a4 = v21 != (_DWORD)a2;
              a3 = v22 != v24;
              if ( v20 != v23 )
              {
                if ( ((v20 ^ v23) & 0xB9CF0000) == 0 )
                  goto LABEL_30;
                goto LABEL_100;
              }
              if ( v21 != (_DWORD)a2 )
              {
                if ( ((v21 ^ (unsigned int)a2) & 0x4E27A9) == 0 )
                  goto LABEL_30;
                goto LABEL_100;
              }
              if ( v22 != v24 && ((v22 ^ v24) & 0x5C00180) != 0 )
              {
LABEL_100:
                v34 = (void *)ReferenceDwmApiPort();
                DwmAsyncChildStyleChange(v34);
              }
            }
          }
LABEL_30:
          if ( (v4 & 0x400) != 0 )
            SetOrClrWF(1LL, v6, 264LL, 1LL);
          v25 = *((_QWORD *)v6 + 20);
          if ( v25 == 1 )
            goto LABEL_36;
          if ( v5 != 1 )
          {
            if ( v25 )
            {
              if ( (unsigned int)GreCombineRgn(v25, *((_QWORD *)v6 + 20), v5, 2LL) )
                goto LABEL_36;
            }
            else
            {
              EmptyRgnPublic = CreateEmptyRgnPublic(0LL, a2);
              *((_QWORD *)v6 + 20) = EmptyRgnPublic;
              if ( EmptyRgnPublic && (unsigned int)GreCombineRgn(EmptyRgnPublic, v5, 0LL, 5LL) )
              {
LABEL_36:
                if ( !v38 && (*((_QWORD *)v6 + 20) || (*((_BYTE *)v6 + 41) & 0x10) != 0) )
                {
                  v26 = (v4 & 0x20000) != 0;
                  v27 = *((_QWORD *)v6 + 2);
                  if ( v26 )
                  {
                    if ( v27 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) )
                    {
                      IncPaintCount(v6);
                    }
                    else
                    {
                      v35 = *((_QWORD *)v6 + 2);
                      v36 = *(_DWORD *)(v35 + 520);
                      *(_DWORD *)(v35 + 520) = v36 + 1;
                      if ( !v36 )
                      {
                        EtwTraceWakePump(v35, v6, 15LL);
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
                      EtwTraceWakePump(v27, v6, 15LL);
                      SetWakeBit(v27, 32LL);
                    }
                  }
                }
                return;
              }
            }
          }
LABEL_50:
          DeleteMaybeSpecialRgn(*((_QWORD *)v6 + 20));
          *((_QWORD *)v6 + 20) = 1LL;
          goto LABEL_36;
        }
        if ( ((v11 ^ (unsigned int)a2) & 0x4E27A9) == 0 )
          goto LABEL_16;
      }
      else if ( ((v10 ^ v13) & 0xB9CF0000) == 0 )
      {
        goto LABEL_16;
      }
LABEL_88:
      v32 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v32);
      goto LABEL_16;
    }
    if ( (v4 & 0x838) == 0 )
      return;
    LOBYTE(a1) = (*((_BYTE *)v6 + 41) >> 5) & ((v4 & 0x8000) == 0);
    if ( (_BYTE)a1 )
      return;
    if ( (v4 & 0x10) != 0 )
      SetOrClrWF(0LL, v6, 272LL, 1LL);
    if ( (v4 & 8) == 0 )
      goto LABEL_67;
    if ( (v4 & 0x20) != 0 )
      SetOrClrWF(0LL, v6, 258LL, 1LL);
    if ( (v4 & 0x800) != 0 )
    {
      SetOrClrWF(0LL, v6, 264LL, 1LL);
      SetOrClrWF(0LL, v6, 1664LL, 1LL);
    }
    if ( (v4 & 0x820) != 0 )
      ClearHungFlag(v6, 0x308u);
    if ( !*((_QWORD *)v6 + 20) )
      goto LABEL_67;
    if ( (*((_BYTE *)v6 + 41) & 8) != 0 )
    {
      if ( v5 != 1 )
        goto LABEL_75;
      v5 = ghrgnInv2;
      CalcWindowRgn((__int64)v6, ghrgnInv2, 1);
    }
    if ( v5 == 1 )
    {
LABEL_80:
      DeleteMaybeSpecialRgn(*((_QWORD *)v6 + 20));
      *((_QWORD *)v6 + 20) = 0LL;
      SetOrClrWF(0LL, v6, 258LL, 1LL);
      ClearHungFlag(v6, 0x308u);
LABEL_67:
      if ( v9 && !*((_QWORD *)v6 + 20) && (*((_BYTE *)v6 + 41) & 0x10) == 0 )
        DecPaintCount(v6);
      return;
    }
LABEL_75:
    if ( *((_QWORD *)v6 + 20) == 1LL )
    {
      v30 = CreateEmptyRgnPublic(a1, a2);
      *((_QWORD *)v6 + 20) = v30;
      if ( !v30 || !(unsigned int)CalcWindowRgn((__int64)v6, v30, ((unsigned __int8)~*((_BYTE *)v6 + 41) >> 3) & 1) )
        goto LABEL_50;
    }
    v31 = GreCombineRgn(*((_QWORD *)v6 + 20), *((_QWORD *)v6 + 20), v5, 4LL);
    if ( !v31 )
      goto LABEL_50;
    if ( v31 != 1 )
      goto LABEL_67;
    goto LABEL_80;
  }
}

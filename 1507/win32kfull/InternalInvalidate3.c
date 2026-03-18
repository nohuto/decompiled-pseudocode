/*
 * XREFs of InternalInvalidate3 @ 0x1C008F748
 * Callers:
 *     xxxEndPaint @ 0x1C0079A28 (xxxEndPaint.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     CalcWindowRgn @ 0x1C00912AC (CalcWindowRgn.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00ACA7C (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     DecPaintCount @ 0x1C00EB508 (DecPaintCount.c)
 *     SetWakeBitInterMoveSize @ 0x1C01D1720 (SetWakeBitInterMoveSize.c)
 *     IncPaintCount @ 0x1C0225018 (IncPaintCount.c)
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
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // ebp
  _BOOL8 v16; // r9
  int v17; // ebp
  int v18; // r15d
  int v19; // r12d
  __int64 v20; // rcx
  int v21; // esi
  _BOOL8 v22; // r9
  int v23; // ebp
  int v24; // r15d
  int v25; // r12d
  __int64 v26; // rcx
  int v27; // esi
  _BOOL8 v28; // r8
  __int64 v29; // rcx
  bool v30; // cf
  __int64 v31; // rbx
  int v32; // r8d
  __int64 EmptyRgnPublic; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // esi
  void *v37; // rax
  int v38; // ebp
  void *v39; // rax
  void *v40; // rax
  __int64 v41; // rbx
  int v42; // edx
  int v43; // [rsp+20h] [rbp-38h]
  BOOL v44; // [rsp+70h] [rbp+18h]

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
    v44 = v8;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) != 0 )
        SetOrClrWF(1, v5, 0x110u, 1);
      if ( !v6 )
        goto LABEL_36;
      v9 = *((_DWORD *)v5 + 13);
      v10 = *((_DWORD *)v5 + 12);
      v11 = *((_DWORD *)v5 + 72);
      *((_BYTE *)v5 + 41) &= ~1u;
      v13 = -268435456;
      if ( (unsigned int)IsWindowDesktopComposed(v5) )
      {
        v14 = *((unsigned int *)v5 + 13);
        v12 = *((unsigned int *)v5 + 12);
        v15 = *((_DWORD *)v5 + 72);
        v16 = v11 != v15;
        if ( v9 == (_DWORD)v14 )
        {
          if ( v10 == (_DWORD)v12 )
          {
            if ( v11 != v15 && ((v11 ^ v15) & 0x4C00180) != 0 )
            {
              v36 = -268435456;
LABEL_89:
              v37 = (void *)ReferenceDwmApiPort(v14, v12, v10 != (_DWORD)v12, v16);
              DwmAsyncChildStyleChange(v37, *(_QWORD *)v5, v36, v15);
            }
          }
          else if ( ((v10 ^ (unsigned int)v12) & 0x4E27A9) != 0 )
          {
            v36 = -20;
            v15 = *((_DWORD *)v5 + 12);
            goto LABEL_89;
          }
        }
        else if ( ((v9 ^ (unsigned int)v14) & 0xB9CF0000) != 0 )
        {
          v36 = -16;
          v15 = *((_DWORD *)v5 + 13);
          goto LABEL_89;
        }
      }
      if ( *((_QWORD *)v5 + 2) != gptiCurrent )
      {
        SetOrClrWF(1, v5, 0x120u, 1);
        if ( (*((_BYTE *)v5 + 44) & 1) != 0 )
          SetOrClrWF(1, v5, 0x402u, 1);
      }
      if ( v4 == 1 && (*((_BYTE *)v5 + 45) & 1) == 0 )
        SetOrClrWF(0, v5, 0x102u, 1);
      if ( (a3 & 4) != 0 )
      {
        v17 = *((_DWORD *)v5 + 13);
        v18 = *((_DWORD *)v5 + 12);
        v19 = *((_DWORD *)v5 + 72);
        *((_BYTE *)v5 + 41) |= 2u;
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v20 = *((unsigned int *)v5 + 13);
          v12 = *((unsigned int *)v5 + 12);
          v21 = *((_DWORD *)v5 + 72);
          v22 = v19 != v21;
          if ( v17 == (_DWORD)v20 )
          {
            if ( v18 == (_DWORD)v12 )
            {
              if ( v19 == v21 || ((v19 ^ v21) & 0x4C00180) == 0 )
                goto LABEL_23;
              v38 = -268435456;
            }
            else
            {
              if ( ((v18 ^ (unsigned int)v12) & 0x4E27A9) == 0 )
                goto LABEL_23;
              v38 = -20;
              v21 = *((_DWORD *)v5 + 12);
            }
          }
          else
          {
            if ( ((v17 ^ (unsigned int)v20) & 0xB9CF0000) == 0 )
              goto LABEL_23;
            v38 = -16;
            v21 = *((_DWORD *)v5 + 13);
          }
          v39 = (void *)ReferenceDwmApiPort(v20, v12, v18 != (_DWORD)v12, v22);
          DwmAsyncChildStyleChange(v39, *(_QWORD *)v5, v38, v21);
        }
      }
LABEL_23:
      if ( (a3 & 0x404) != 0 && (*((_BYTE *)v5 + 48) & 0x20) == 0 )
      {
        if ( (*((_BYTE *)v5 + 43) & 0x18) == 0 && *((_QWORD *)v5 + 11) == GetDesktopWindow((__int64)v5) )
          VWPLAddBase(gpvwplHungRedraw, 0LL, v5, 0xAu, v43);
        v23 = *((_DWORD *)v5 + 13);
        v24 = *((_DWORD *)v5 + 12);
        v25 = *((_DWORD *)v5 + 72);
        *((_BYTE *)v5 + 43) |= 8u;
        if ( (unsigned int)IsWindowDesktopComposed(v5) )
        {
          v26 = *((unsigned int *)v5 + 13);
          v12 = *((unsigned int *)v5 + 12);
          v27 = *((_DWORD *)v5 + 72);
          v28 = v25 != v27;
          if ( v23 != (_DWORD)v26 )
          {
            if ( ((v23 ^ (unsigned int)v26) & 0xB9CF0000) == 0 )
              goto LABEL_30;
            v13 = -16;
            v27 = *((_DWORD *)v5 + 13);
            goto LABEL_103;
          }
          if ( v24 != (_DWORD)v12 )
          {
            if ( ((v24 ^ (unsigned int)v12) & 0x4E27A9) == 0 )
              goto LABEL_30;
            v13 = -20;
            v27 = *((_DWORD *)v5 + 12);
            goto LABEL_103;
          }
          if ( v25 != v27 && ((v25 ^ v27) & 0x4C00180) != 0 )
          {
LABEL_103:
            v40 = (void *)ReferenceDwmApiPort(v26, v12, v28, v24 != (_DWORD)v12);
            DwmAsyncChildStyleChange(v40, *(_QWORD *)v5, v13, v27);
          }
        }
      }
LABEL_30:
      if ( (a3 & 0x400) != 0 )
        SetOrClrWF(1, v5, 0x108u, 1);
      v29 = *((_QWORD *)v5 + 20);
      if ( v29 == 1 )
        goto LABEL_36;
      if ( v4 != 1 )
      {
        if ( v29 )
        {
          if ( (unsigned int)GreCombineRgn(v29, *((_QWORD *)v5 + 20), v4, 2LL) )
            goto LABEL_36;
        }
        else
        {
          EmptyRgnPublic = CreateEmptyRgnPublic(0LL, v12);
          *((_QWORD *)v5 + 20) = EmptyRgnPublic;
          if ( EmptyRgnPublic && (unsigned int)GreCombineRgn(EmptyRgnPublic, v4, 0LL, 5LL) )
          {
LABEL_36:
            if ( !v44 && (*((_QWORD *)v5 + 20) || (*((_BYTE *)v5 + 41) & 0x10) != 0) )
            {
              v30 = (a3 & 0x20000) != 0;
              v31 = *((_QWORD *)v5 + 2);
              if ( v30 )
              {
                if ( v31 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                {
                  IncPaintCount(v5);
                }
                else
                {
                  v41 = *((_QWORD *)v5 + 2);
                  v42 = *(_DWORD *)(v41 + 528);
                  *(_DWORD *)(v41 + 528) = v42 + 1;
                  if ( !v42 )
                  {
                    EtwTraceWakePump(v41, v5, 15LL);
                    SetWakeBitInterMoveSize(v41);
                  }
                }
              }
              else
              {
                v32 = *(_DWORD *)(v31 + 528);
                *(_DWORD *)(v31 + 528) = v32 + 1;
                if ( !v32 )
                {
                  EtwTraceWakePump(v31, v5, 15LL);
                  SetWakeBit(v31, 32LL);
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
    if ( (a3 & 0x838) == 0 )
      return;
    LOBYTE(a1) = (*((_BYTE *)v5 + 41) >> 5) & ((a3 & 0x8000) == 0);
    if ( (_BYTE)a1 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0, v5, 0x110u, 1);
    if ( (a3 & 8) == 0 )
      goto LABEL_67;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0, v5, 0x102u, 1);
    if ( (a3 & 0x800) != 0 )
    {
      SetOrClrWF(0, v5, 0x108u, 1);
      SetOrClrWF(0, v5, 0x680u, 1);
    }
    if ( (a3 & 0x820) != 0 )
      ClearHungFlag(v5, 0x308u);
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
      SetOrClrWF(0, v5, 0x102u, 1);
      ClearHungFlag(v5, 0x308u);
LABEL_67:
      if ( v8 && !*((_QWORD *)v5 + 20) && (*((_BYTE *)v5 + 41) & 0x10) == 0 )
        DecPaintCount(v5);
      return;
    }
LABEL_75:
    if ( *((_QWORD *)v5 + 20) == 1LL )
    {
      v34 = CreateEmptyRgnPublic(a1, a2);
      *((_QWORD *)v5 + 20) = v34;
      if ( !v34 || !(unsigned int)CalcWindowRgn(v5, v34, ((unsigned __int8)~*((_BYTE *)v5 + 41) >> 3) & 1) )
        goto LABEL_48;
    }
    v35 = GreCombineRgn(*((_QWORD *)v5 + 20), *((_QWORD *)v5 + 20), v4, 4LL);
    if ( !v35 )
      goto LABEL_48;
    if ( v35 != 1 )
      goto LABEL_67;
    goto LABEL_80;
  }
}

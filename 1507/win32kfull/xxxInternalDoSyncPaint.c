/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0062240
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxDoSyncPaint @ 0x1C00D526C (xxxDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     xxxSendEraseBkgnd @ 0x1C0088150 (xxxSendEraseBkgnd.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EB40C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00EC2A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
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
  _BOOL8 v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  int v15; // edx
  unsigned __int64 v16; // rbx
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  HRGN NCUpdateRgn; // rax
  HRGN v22; // rbp
  int v23; // ebp
  void *v24; // rax
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+60h] [rbp+8h]
  unsigned int v28; // [rsp+68h] [rbp+10h]
  int v29; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v5 = a1;
  if ( !a1 )
  {
LABEL_4:
    v6 = *(_DWORD *)(a1 + 52);
    v28 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 288);
    *(_BYTE *)(a1 + 42) &= ~0x40u;
    v27 = v7;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v8 = v28;
      v9 = *(_DWORD *)(a1 + 52);
      v10 = *(_DWORD *)(a1 + 48);
      v11 = v28 != v10;
      v29 = *(_DWORD *)(a1 + 288);
      v12 = v27 != v29;
      if ( v6 == v9 )
      {
        if ( !v11 )
        {
          if ( v27 == v29 || ((v27 ^ v29) & 0x4C00180) == 0 )
            goto LABEL_8;
          v23 = -268435456;
          goto LABEL_56;
        }
        if ( (((unsigned int)v8 ^ v10) & 0x4E27A9) != 0 )
        {
          v23 = -20;
          v29 = *(_DWORD *)(a1 + 48);
LABEL_56:
          v24 = (void *)ReferenceDwmApiPort(v12, v11, v8, v27);
          DwmAsyncChildStyleChange(v24, *(_QWORD *)a1, v23, v29);
        }
      }
      else if ( ((v6 ^ v9) & 0xB9CF0000) != 0 )
      {
        v23 = -16;
        v29 = *(_DWORD *)(a1 + 52);
        goto LABEL_56;
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
          SetOrClrWF(0, (_DWORD *)a1, 0x102u, 1);
          SetOrClrWF(0, (_DWORD *)a1, 0x104u, 1);
          v2 &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 16) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)a1, 1);
          v22 = NCUpdateRgn;
          if ( ((*(_BYTE *)(a1 + 41) >> 3) & ((v2 & 2) != 0)) != 0 )
            xxxSendNCPaint((struct tagWND *)a1, NCUpdateRgn);
          if ( (v2 & 1) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 41) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v22);
              v22 = GetNCUpdateRgn((struct tagWND *)a1, 0);
            }
            if ( (*(_BYTE *)(a1 + 41) & 2) != 0 )
            {
              SetOrClrWF(0, (_DWORD *)a1, 0x102u, 1);
              SetOrClrWF(0, (_DWORD *)a1, 0x104u, 1);
              xxxSendEraseBkgnd(a1, 0LL, v22);
            }
            ClearHungFlag((struct tagWND *)a1);
          }
          LOBYTE(v5) = DeleteMaybeSpecialRgn(v22);
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
                  ClearHungFlag((struct tagWND *)a1);
                  LOBYTE(v5) = xxxRedrawHungWindow((struct tagWND *)a1);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, (_DWORD *)a1, 0x108u, 1);
        SetOrClrWF(0, (_DWORD *)a1, 0x102u, 1);
        SetOrClrWF(0, (_DWORD *)a1, 0x680u, 1);
        SetOrClrWF(0, (_DWORD *)a1, 0x104u, 1);
        LOBYTE(v5) = ClearHungFlag((struct tagWND *)a1);
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
    v5 = BuildHwndList(*(_QWORD *)(a1 + 96), 2LL, 0LL);
    v30 = v5;
    if ( v5 )
    {
      v13 = v5 + 32;
      v14 = *(_QWORD *)(v5 + 32);
      if ( v14 != 1 )
      {
        do
        {
          if ( v14 )
          {
            PsGetThreadWin32Thread(KeGetCurrentThread());
            v15 = (unsigned __int16)v14;
            if ( (unsigned __int64)(unsigned __int16)v14 < *(_QWORD *)(gpsi + 8LL) )
            {
              v16 = v14 >> 16;
              v17 = (__int64 *)(gSharedInfo[1] + (unsigned int)(v15 * LODWORD(gSharedInfo[2])));
              if ( ((_WORD)v16 == *((_WORD *)v17 + 9)
                 || (_WORD)v16 == 0xFFFF
                 || !(_WORD)v16 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
                && (*((_BYTE *)v17 + 17) & 1) == 0
                && *((_BYTE *)v17 + 16) == 1 )
              {
                v18 = *v17;
                if ( *v17 )
                {
                  if ( (*(_BYTE *)(v18 + 55) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v18 + 16) )
                  {
                    v26[0] = *(_QWORD *)(gptiCurrent + 376LL);
                    *(_QWORD *)(gptiCurrent + 376LL) = v26;
                    v26[1] = v18;
                    ++*(_DWORD *)(v18 + 8);
                    xxxInternalDoSyncPaint(v18, a2);
                    ThreadUnlock1(v20, v19);
                  }
                }
              }
            }
          }
          v14 = *(_QWORD *)(v13 + 8);
          v13 += 8LL;
        }
        while ( v14 != 1 );
        v5 = v30;
      }
      LOBYTE(v5) = FreeHwndList(v5);
    }
  }
  return v5;
}

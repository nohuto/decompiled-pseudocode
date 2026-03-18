/*
 * XREFs of xxxSetScrollBar @ 0x1C00ACED4
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C00ACDD0 (NtUserSetScrollInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00AD140 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     _InitPwSB @ 0x1C00AFCC8 (_InitPwSB.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00FFF8C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022AFE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v5; // r8d
  int v6; // r14d
  int v8; // ebp
  unsigned __int16 v9; // r12
  int v10; // eax
  int v11; // esi
  __int64 inited; // rax
  int v13; // r15d
  struct tagSBDATA *v14; // rcx
  int v16; // r15d
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  struct tagSBCALC *v21; // rdx
  __int64 v22; // rcx
  int v23[18]; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a2;
  v6 = a4;
  if ( a4 )
    v6 = IsVisible(a1);
  if ( v5 == 2 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(a1, 233LL, v6, a3, 0, 0, 0LL, 1, 1);
  }
  if ( v5 )
  {
    v8 = 1;
    v9 = 3616;
  }
  else
  {
    v8 = 0;
    v9 = 3600;
  }
  v10 = *(_DWORD *)(a3 + 4);
  v11 = ((unsigned __int8)v9 & *((_BYTE *)a1 + HIBYTE(v9) + 40)) != 0;
  v23[0] = v11;
  if ( (v10 & 1) != 0 || v11 || *((_QWORD *)a1 + 22) )
  {
    inited = *((_QWORD *)a1 + 22);
    if ( inited )
    {
      v13 = 0;
    }
    else
    {
      v13 = 1;
      inited = InitPwSB();
      if ( !inited )
        return 0LL;
    }
    v14 = (struct tagSBDATA *)(inited + 20);
    if ( !v8 )
      v14 = (struct tagSBDATA *)(inited + 4);
    if ( (unsigned int)SBSetParms(v14, (struct tagSCROLLINFO *)a3, v23, &v25) || v13 )
    {
      SetOrClrWF(0, a1, v9, 1);
      v16 = v23[0];
      if ( v23[0] )
      {
        SetOrClrWF(1, a1, v9, 1);
      }
      else if ( (*((_BYTE *)a1 + 54) & 0x30) == 0 )
      {
        v17 = (_DWORD *)*((_QWORD *)a1 + 22);
        if ( v17[1] == v17[2] && v17[5] == v17[6] )
        {
          DesktopFree(*((_QWORD *)a1 + 3));
          *((_QWORD *)a1 + 22) = 0LL;
        }
      }
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v11 )
        {
          SetOrClrWF(1, a1, v9, 1);
          xxxEnableWndSBArrows(a1, a2, v16 == 0 ? 3 : 0);
        }
      }
      else if ( v16 != v11 )
      {
        v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
        if ( v18 && a1 == *(struct tagWND **)(v18 + 8) )
          *(_DWORD *)v18 |= 8u;
        xxxSetWindowPosAndBand(a1, 0, 0, 0, 0, 0, 55, 0);
        return (unsigned int)v25;
      }
      if ( v16 && v6 )
      {
        v19 = *((_BYTE *)a1 + 40);
        if ( v8 ? v19 & 2 : v19 & 4 )
          goto LABEL_46;
      }
    }
    else if ( v11 && v6 )
    {
LABEL_46:
      xxxWindowEvent(0x800Eu, (__int64 *)a1, (v8 != 0) - 6, 0, 1);
      v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
      if ( !v22
        || a1 != *(struct tagWND **)(v22 + 8)
        || ((*(_DWORD *)v22 >> 1) & 1) != v8
        || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v22 + 48) != xxxTrackThumb )
      {
        xxxDrawThumb(a1, v21, v8);
      }
    }
    return (unsigned int)v25;
  }
  UserSetLastError(1447LL);
  return 0LL;
}

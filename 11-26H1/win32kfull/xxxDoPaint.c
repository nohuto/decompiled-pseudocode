/*
 * XREFs of xxxDoPaint @ 0x14004F698
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x140004EB8 (ExchangeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x14004FC10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall xxxDoPaint(struct tagWND *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct tagWND *v6; // rdi
  struct tagWND *v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  char v10; // cl
  int v11; // ebx
  int v12; // esi
  int v13; // r12d
  _DWORD *v14; // rax
  int v15; // r15d
  int v16; // ebp
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rax
  int v20; // ebx
  int v21; // r15d
  int v22; // r12d
  _DWORD *v23; // rax
  int v24; // r14d
  int v25; // ebp
  int v26; // eax
  int v27; // r14d
  struct tagWND *v28; // rdx
  __int64 v29; // rax
  int v31; // ebx
  int v32; // esi
  int v33; // r12d
  _DWORD *v34; // rax
  int v35; // r15d
  int v36; // ebp
  int v37; // eax
  int v38; // r15d
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  struct tagTHREADINFO *v47; // rax
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  void *v52; // rax
  _QWORD v53[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v54; // [rsp+30h] [rbp-38h]

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 4) != 0 )
  {
    v45 = *(_QWORD *)(v5 + 648);
    if ( !v45 )
      return 0LL;
    v6 = *(struct tagWND **)(*(_QWORD *)(v45 + 24) + 8LL);
    v46 = *((_QWORD *)v6 + 5);
    if ( !*(_QWORD *)(v46 + 136) && (*(_BYTE *)(v46 + 17) & 0x10) == 0 )
    {
      v6 = 0LL;
      v47 = PtiCurrent(v4);
      v53[0] = *((_QWORD *)v47 + 47);
      *((_QWORD *)v47 + 47) = v53;
      v48 = *(_QWORD **)(v45 + 16);
      v49 = UserDereferenceObject;
      v53[1] = 0LL;
      v54 = UserDereferenceObject;
      if ( v48 )
      {
        do
        {
          ObfReferenceObject(v48);
          ExchangeW32ThreadLock((__int64)v48, (__int64)v53);
          v6 = xxxInternalDoPaint(*(struct tagWND **)(v48[1] + 24LL), (struct tagTHREADINFO *)v5);
          if ( v6 )
            break;
          v48 = (_QWORD *)v48[4];
        }
        while ( v48 );
        v49 = v54;
      }
      if ( v49 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v53);
        v54 = -1LL;
      }
    }
  }
  else
  {
    v6 = xxxInternalDoPaint(
           *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v5 + 488) + 8LL) + 24LL),
           (struct tagTHREADINFO *)v5);
  }
  if ( !v6 )
    return 0LL;
  if ( a1 && a1 != v6 )
  {
    v7 = v6;
    while ( v7 && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
      if ( a1 == v7 )
      {
        v8 = 1;
        goto LABEL_13;
      }
    }
    v8 = 0;
LABEL_13:
    if ( !v8 )
      return 0LL;
  }
  v9 = *((_QWORD *)v6 + 5);
  v10 = *(_BYTE *)(v9 + 17);
  if ( (v10 & 0x10) == 0 )
    goto LABEL_15;
  v31 = *(_DWORD *)(v9 + 28);
  v32 = *(_DWORD *)(v9 + 24);
  v33 = *(_DWORD *)(v9 + 232);
  *(_BYTE *)(v9 + 17) = v10 & 0xEF;
  if ( (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v34 = (_DWORD *)*((_QWORD *)v6 + 5);
    v35 = v34[7];
    v36 = v32 ^ v34[6];
    v37 = v33 ^ v34[58];
    v38 = v31 ^ v35;
    if ( !v38 )
    {
      if ( v36 )
      {
LABEL_64:
        if ( (v36 & 0x4E27A9) == 0 && (v37 & 0x372C0) == 0 )
        {
LABEL_62:
          if ( (v38 & 0x1C40000) != 0 || (v36 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(v6, 1LL);
          goto LABEL_33;
        }
LABEL_61:
        DirtyVisRgnTrackers(v6);
        v52 = (void *)ReferenceDwmApiPort(v51, v50);
        DwmAsyncChildStyleChange(v52);
        goto LABEL_62;
      }
      if ( !v37 )
        goto LABEL_33;
    }
    if ( (v38 & 0xB9CF0000) != 0 )
      goto LABEL_61;
    goto LABEL_64;
  }
LABEL_33:
  v9 = *((_QWORD *)v6 + 5);
  if ( !*(_QWORD *)(v9 + 136) )
  {
    DecPaintCount(v6);
    v9 = *((_QWORD *)v6 + 5);
  }
LABEL_15:
  v11 = *(_DWORD *)(v9 + 28);
  v12 = *(_DWORD *)(v9 + 24);
  v13 = *(_DWORD *)(v9 + 232);
  *(_BYTE *)(v9 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(v6) )
    goto LABEL_19;
  v14 = (_DWORD *)*((_QWORD *)v6 + 5);
  v15 = v14[7];
  v16 = v12 ^ v14[6];
  v17 = v13 ^ v14[58];
  v18 = v11 ^ v15;
  if ( !v18 )
  {
    if ( v16 )
      goto LABEL_40;
    if ( !v17 )
      goto LABEL_19;
  }
  if ( (v18 & 0xB9CF0000) != 0 )
  {
LABEL_37:
    DirtyVisRgnTrackers(v6);
    v41 = (void *)ReferenceDwmApiPort(v40, v39);
    DwmAsyncChildStyleChange(v41);
    goto LABEL_38;
  }
LABEL_40:
  if ( (v16 & 0x4E27A9) != 0 || (v17 & 0x372C0) != 0 )
    goto LABEL_37;
LABEL_38:
  if ( (v18 & 0x1C40000) != 0 || (v16 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(v6, 1LL);
LABEL_19:
  v19 = *((_QWORD *)v6 + 5);
  v20 = *(_DWORD *)(v19 + 28);
  v21 = *(_DWORD *)(v19 + 24);
  v22 = *(_DWORD *)(v19 + 232);
  *(_BYTE *)(v19 + 17) &= ~0x20u;
  if ( !(unsigned int)IsWindowDesktopComposed(v6) )
    goto LABEL_23;
  v23 = (_DWORD *)*((_QWORD *)v6 + 5);
  v24 = v23[7];
  v25 = v21 ^ v23[6];
  v26 = v22 ^ v23[58];
  v27 = v20 ^ v24;
  if ( !v27 )
  {
    if ( v25 )
      goto LABEL_47;
    if ( !v26 )
      goto LABEL_23;
  }
  if ( (v27 & 0xB9CF0000) != 0 )
  {
LABEL_44:
    DirtyVisRgnTrackers(v6);
    v44 = (void *)ReferenceDwmApiPort(v43, v42);
    DwmAsyncChildStyleChange(v44);
    goto LABEL_45;
  }
LABEL_47:
  if ( (v25 & 0x4E27A9) != 0 || (v26 & 0x372C0) != 0 )
    goto LABEL_44;
LABEL_45:
  if ( (v27 & 0x1C40000) != 0 || (v25 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(v6, 1LL);
LABEL_23:
  v28 = v6;
  while ( v28 && (*(_WORD *)(*((_QWORD *)v28 + 5) + 42LL) & 0x2FFF) != 0x29D )
  {
    v28 = (struct tagWND *)*((_QWORD *)v28 + 13);
    if ( (*(_BYTE *)(*((_QWORD *)v28 + 5) + 31LL) & 2) == 0 )
    {
      SetOrClrWF(1, v6, 0x401u, 1);
      break;
    }
  }
  *(_QWORD *)a2 = *(_QWORD *)v6;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v29 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)v6 + 5) + 288LL));
  *(_DWORD *)(a2 + 8) = 15;
  *(_QWORD *)(a2 + 36) = v29;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}

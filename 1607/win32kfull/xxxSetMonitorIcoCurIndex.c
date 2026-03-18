/*
 * XREFs of xxxSetMonitorIcoCurIndex @ 0x1C008F454
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C008F1E4 (xxxUpdateSystemCursorFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01D3468 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D34E4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxEnsureMonitorCursors @ 0x1C01DD64C (xxxEnsureMonitorCursors.c)
 *     xxxSetSystemCursor @ 0x1C0228DC8 (xxxSetSystemCursor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     FixupCursorForMonitor @ 0x1C005C91C (FixupCursorForMonitor.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetCursorForDim @ 0x1C008F7BC (GetCursorForDim.c)
 *     zzzSetSystemImage @ 0x1C008F7D4 (zzzSetSystemImage.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     xxxClientLoadImage @ 0x1C0090238 (xxxClientLoadImage.c)
 *     xxxClientCopyImage @ 0x1C00A9BF0 (xxxClientCopyImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetMonitorIcoCurIndex(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v5; // r12
  __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // ebp
  int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 CursorForDim; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r15
  int v17; // esi
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // r8
  int v32; // ecx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // eax
  __int64 Image; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int128 v51; // xmm0

  v5 = &gfCursorSizeNeeded;
  LODWORD(v6) = 0;
  result = a3;
  v8 = 0;
  v9 = a2;
  do
  {
    if ( *v5 == (_DWORD)v6 )
      goto LABEL_65;
    v10 = 2LL * (int)result;
    v11 = *(_QWORD *)&gasyscur[8 * (int)result + 4];
    if ( !v11 )
      goto LABEL_64;
    if ( v8 )
    {
      switch ( v8 )
      {
        case 1u:
          v12 = 48;
          break;
        case 2u:
          v12 = 64;
          break;
        case 3u:
          v12 = 96;
          break;
        default:
          v12 = 128;
          break;
      }
    }
    else
    {
      v12 = 32;
    }
    CursorForDim = GetCursorForDim(v11, v12);
    v17 = v6;
    v16 = CursorForDim;
    LOBYTE(v17) = CursorForDim == 0;
    if ( !a4 && v17 )
    {
LABEL_47:
      Image = xxxClientLoadImage(a1, v14, 2, v12, v12, v9 | 0x40000u);
      goto LABEL_51;
    }
    if ( a4 != 1 )
    {
      if ( a4 != 2 || v17 )
        goto LABEL_64;
      Image = xxxClientCopyImage(*v15, 2, v12, v12, v6);
LABEL_51:
      LODWORD(v6) = 0;
      v49 = Image;
      if ( Image )
      {
        *(_DWORD *)(Image + 76) = v12;
        if ( v17 )
        {
          v50 = *(_QWORD *)&gasyscur[4 * v10 + 4];
          if ( (*(_DWORD *)(Image + 80) & 0x1000) != 0 && v50 && *(_QWORD *)(Image + 48) == Image )
          {
            *(_WORD *)(Image + 72) = *(_WORD *)(v50 + 72);
            if ( *(_WORD *)(Image + 56) )
              Win32FreePool(*(_QWORD *)(Image + 64), v47, v48);
            v51 = *(_OWORD *)(v50 + 56);
            *(_QWORD *)(v49 + 48) = v50;
            *(_OWORD *)(v49 + 56) = v51;
            HMAssignmentLock(v49 + 40, *(_QWORD *)(v50 + 40));
            HMAssignmentLock(v50 + 40, v49);
          }
          else
          {
            DestroyCursor((struct tagCURSOR *)Image);
          }
        }
        else
        {
          zzzSetSystemImage((struct tagCURSOR *)Image);
          if ( FixupCursorForMonitor(gpcurLogCurrent) == v16 )
          {
            gpcurPhysCurrent = 0LL;
            gpcurLogCurrent = 0LL;
            zzzUpdateCursorImage();
          }
        }
        LODWORD(v6) = 0;
      }
      v9 = a2;
      goto LABEL_64;
    }
    if ( v17 )
      goto LABEL_64;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0xDuLL) )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21);
      LODWORD(v6) = 0;
      if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
        goto LABEL_26;
    }
    else if ( IsDPIDWMSysMet(v19) && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
      LODWORD(v6) = 0;
      if ( *(_QWORD *)(ThreadWin32Thread + 408) )
      {
        v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v31, 0LL)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1;
        LODWORD(v6) = 0;
      }
      else
      {
        v32 = 0;
      }
      if ( v32 )
      {
LABEL_26:
        v33 = (_DWORD *)(gpsi + 2320LL);
        goto LABEL_36;
      }
    }
    if ( IsDPIDWMSysMet(0xDuLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v14, v35, v6) & 0xF) == 1 )
      {
        v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v36, v37);
        LODWORD(v6) = 0;
        if ( *(_QWORD *)(v38 + 408) )
        {
          v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v14,
                                                      v39,
                                                      0LL)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1;
          LODWORD(v6) = 0;
        }
        else
        {
          v40 = 0;
        }
        if ( v40 )
        {
          v33 = (_DWORD *)(gpsi + 2708LL);
          goto LABEL_36;
        }
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    v33 = (_DWORD *)(gpsi + 1932LL);
LABEL_36:
    v41 = *v33 - 32;
    if ( v41 )
    {
      v42 = v41 - 16;
      if ( !v42 )
      {
        v45 = 1;
        goto LABEL_46;
      }
      v43 = v42 - 16;
      if ( !v43 )
      {
        v45 = 2;
        goto LABEL_46;
      }
      v44 = v43 - 32;
      if ( !v44 )
      {
        v45 = 3;
        goto LABEL_46;
      }
      if ( v44 == 32 )
      {
        v45 = 4;
        goto LABEL_46;
      }
    }
    v45 = v6;
LABEL_46:
    if ( v8 != v45 )
      goto LABEL_47;
LABEL_64:
    result = a3;
LABEL_65:
    ++v8;
    ++v5;
  }
  while ( v8 < 5 );
  return result;
}

/*
 * XREFs of xxxSetMonitorIcoCurIndex @ 0x1C0136358
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01360E8 (xxxUpdateSystemCursorFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DB428 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DB4A4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxEnsureMonitorCursors @ 0x1C01E6A14 (xxxEnsureMonitorCursors.c)
 *     xxxSetSystemCursor @ 0x1C02291C8 (xxxSetSystemCursor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxClientCopyImage @ 0x1C007E418 (xxxClientCopyImage.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 *     FixupCursorForMonitor @ 0x1C00909E8 (FixupCursorForMonitor.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 *     GetCursorForDim @ 0x1C0136708 (GetCursorForDim.c)
 *     zzzSetSystemImage @ 0x1C0136720 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C0136A30 (xxxClientLoadImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetMonitorIcoCurIndex(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v5; // r12
  int v6; // r9d
  __int64 result; // rax
  unsigned int v8; // ebp
  int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 CursorForDim; // rax
  int v14; // edx
  __int64 *v15; // rcx
  __int64 v16; // r15
  int v17; // esi
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 ThreadWin32Thread; // rax
  int v24; // ecx
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  __int64 Image; // rax
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int128 v37; // xmm0

  v5 = &gfCursorSizeNeeded;
  v6 = 0;
  result = a3;
  v8 = 0;
  v9 = a2;
  do
  {
    if ( *v5 == v6 )
      goto LABEL_67;
    v10 = 2LL * (int)result;
    v11 = *(_QWORD *)&gasyscur[8 * (int)result + 4];
    if ( !v11 )
      goto LABEL_66;
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
LABEL_49:
      Image = xxxClientLoadImage(a1, v14, 2, v12, v12, v9 | 0x40000u);
      goto LABEL_53;
    }
    if ( a4 != 1 )
    {
      if ( a4 != 2 || v17 )
        goto LABEL_66;
      Image = xxxClientCopyImage(*v15, 2LL, v12, v12, v6);
LABEL_53:
      v6 = 0;
      v35 = Image;
      if ( Image )
      {
        *(_DWORD *)(Image + 76) = v12;
        if ( v17 )
        {
          v36 = *(_QWORD *)&gasyscur[4 * v10 + 4];
          if ( (*(_DWORD *)(Image + 80) & 0x1000) != 0 && v36 && *(_QWORD *)(Image + 48) == Image )
          {
            *(_WORD *)(Image + 72) = *(_WORD *)(v36 + 72);
            if ( *(_WORD *)(Image + 56) )
              Win32FreePool(*(_QWORD *)(Image + 64));
            v37 = *(_OWORD *)(v36 + 56);
            *(_QWORD *)(v35 + 48) = v36;
            *(_OWORD *)(v35 + 56) = v37;
            HMAssignmentLock(v35 + 40, *(_QWORD *)(v36 + 40));
            HMAssignmentLock(v36 + 40, v35);
          }
          else
          {
            DestroyCursor((struct tagCURSOR *)Image, 0);
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
        v6 = 0;
      }
      v9 = a2;
      goto LABEL_66;
    }
    if ( v17 )
      goto LABEL_66;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0xDuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        v6 = 0;
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x4000) == 0 )
          goto LABEL_28;
      }
    }
    else if ( IsDPIDWMSysMet(v18)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) == 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6 = 0;
      if ( *(_QWORD *)(ThreadWin32Thread + 416) )
      {
        v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1;
        v6 = 0;
      }
      else
      {
        v24 = 0;
      }
      if ( v24 )
      {
LABEL_28:
        v25 = (_DWORD *)(gpsi + 2320LL);
        goto LABEL_38;
      }
    }
    if ( IsDPIDWMSysMet(0xDuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0 )
      {
        v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v6 = 0;
        if ( *(_QWORD *)(v27 + 416) )
        {
          v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1;
          v6 = 0;
        }
        else
        {
          v28 = 0;
        }
        if ( v28 )
        {
          v25 = (_DWORD *)(gpsi + 2708LL);
          goto LABEL_38;
        }
      }
      else
      {
        v6 = 0;
      }
    }
    v25 = (_DWORD *)(gpsi + 1932LL);
LABEL_38:
    v29 = *v25 - 32;
    if ( v29 )
    {
      v30 = v29 - 16;
      if ( !v30 )
      {
        v33 = 1;
        goto LABEL_48;
      }
      v31 = v30 - 16;
      if ( !v31 )
      {
        v33 = 2;
        goto LABEL_48;
      }
      v32 = v31 - 32;
      if ( !v32 )
      {
        v33 = 3;
        goto LABEL_48;
      }
      if ( v32 == 32 )
      {
        v33 = 4;
        goto LABEL_48;
      }
    }
    v33 = v6;
LABEL_48:
    if ( v8 != v33 )
      goto LABEL_49;
LABEL_66:
    result = a3;
LABEL_67:
    ++v8;
    ++v5;
  }
  while ( v8 < 5 );
  return result;
}

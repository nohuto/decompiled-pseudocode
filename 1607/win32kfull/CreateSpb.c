/*
 * XREFs of CreateSpb @ 0x1C012210C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 * Callees:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000D0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C000E53C (SpbCheck.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     SubtractRect @ 0x1C0113BD0 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C028FA38 (GreSaveScreenBits.c)
 */

__int64 __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 result; // rax
  _QWORD **v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int *v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // ecx
  _DWORD *v45; // rcx
  __int64 v46; // rbx
  _QWORD **v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ebx
  int v51; // r15d
  int v52; // r13d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v54; // rbp
  int v55; // ebx
  struct tagWND *v56; // rdx
  _BYTE v58[16]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v59; // [rsp+78h] [rbp-50h]

  v4 = a1;
  result = IsWindowDesktopComposed(a1);
  if ( !(_DWORD)result || a2 == 2 )
  {
    if ( (a2 & 2) != 0 || !*((_QWORD *)v4 + 11) || (result = GetDesktopWindow((__int64)v4), v18 == result) )
    {
      if ( *(_QWORD *)(gpDispInfo + 72LL) )
      {
        SpbCheck();
      }
      else
      {
        GreLockVisRgn(*gpDispInfo);
        v6 = (_QWORD **)gpDispInfo;
        v7 = *(_QWORD **)(gpDispInfo + 64LL);
        if ( v7 )
        {
          do
          {
            GreGetBounds(v7[1], 0LL, 1LL);
            v7 = (_QWORD *)*v7;
          }
          while ( v7 );
          v6 = (_QWORD **)gpDispInfo;
        }
        GreUnlockVisRgn(**v6);
      }
      result = Win32AllocPoolWithQuota(72LL, 1651733333LL);
      v8 = result;
      if ( result )
      {
        v9 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
        *(_QWORD *)(v8 + 64) = v9;
        if ( !v9 )
          return Win32FreePool(v8, v10, v11);
        v12 = (int *)(v8 + 24);
        v13 = (__int64 *)(v8 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_OWORD *)(v8 + 24) = *((_OWORD *)v4 + 7);
        if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(gpDispInfo + 104LL)) )
        {
LABEL_47:
          Win32FreePool(*(_QWORD *)(v8 + 64), v14, v15);
          return Win32FreePool(v8, v10, v11);
        }
        *(_QWORD *)(v8 + 40) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
        *(_DWORD *)(v8 + 48) = a2;
        HMAssignmentLock(v8 + 8, v4);
        if ( (a2 & 2) != 0 )
        {
LABEL_14:
          *(_QWORD *)v8 = *(_QWORD *)(gpDispInfo + 72LL);
          *(_QWORD *)(gpDispInfo + 72LL) = v8;
          SetRectRgnIndirect(ghrgnSPB2, v8 + 24);
          v16 = *(_QWORD *)(*v13 + 200);
          if ( !v16 || (result = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v16, 1LL), (_DWORD)result) )
          {
            result = IsDesktopWindow(*v13);
            if ( (_DWORD)result || (*(_BYTE *)(v17 + 50) & 8) == 0 )
            {
              v56 = *(struct tagWND **)(v17 + 88);
              if ( !v56 || (result = SpbTransfer((struct tagSPB *)v8, v56, 0), (_DWORD)result) )
              {
                while ( v4 )
                {
                  result = SpbTransfer((struct tagSPB *)v8, v4, 1);
                  if ( !(_DWORD)result )
                    break;
                  v4 = (struct tagWND *)*((_QWORD *)v4 + 9);
                }
              }
            }
            else
            {
              return SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v17, 1);
            }
          }
          return result;
        }
        v59 = *(_OWORD *)v12;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) != 0 )
            goto LABEL_24;
        }
        else if ( !IsDPIDWMSysMet(v20)
               || (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36, v37) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 408)
                 ? (v44 = 0)
                 : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v41,
                                                                v42,
                                                                v43)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v44) )
        {
LABEL_24:
          if ( IsDPIDWMSysMet(0x51uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
              ? (v33 = 0)
              : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v30,
                                                             v31,
                                                             v32)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v33) )
          {
            v45 = (_DWORD *)(gpsi + 2980LL);
          }
          else
          {
            v45 = (_DWORD *)(gpsi + 2204LL);
          }
LABEL_39:
          if ( *v45 )
          {
            v47 = (_QWORD **)gpDispInfo;
          }
          else
          {
            v46 = MonitorFromRect((int *)(v8 + 24), 1u);
            if ( SubtractRect((__int64)v58, (int *)(v8 + 24), (int *)(v46 + 28))
              && (unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 152LL), v58) )
            {
              goto LABEL_44;
            }
            if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(v46 + 28)) )
              goto LABEL_44;
            v47 = (_QWORD **)gpDispInfo;
            if ( v46 != *(_QWORD *)(gpDispInfo + 88LL) )
              goto LABEL_44;
          }
          if ( *((_QWORD *)v4 + 25) || (v49 = GreSaveScreenBits(**v47, 0LL, 0LL), (*(_QWORD *)(v8 + 56) = v49) == 0LL) )
          {
            v50 = *v12 & 7;
            v51 = *(_DWORD *)(v8 + 32) - *v12;
            v52 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
            CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v51 + v50, v52, 0, 0LL);
            *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
            if ( !CompatibleBitmapInternal
              || (v54 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal)) == 0
              || (v55 = NtGdiBitBltInternal(ghdcMem, v50, 0, v51, v52, a3, *v12, *(_DWORD *)(v8 + 28), 0xCC0000u, 0, 0),
                  GreSelectBitmap(ghdcMem, v54),
                  !v55) )
            {
LABEL_44:
              v48 = *(_QWORD *)(v8 + 16);
              if ( v48 )
                GreDeleteObject(v48);
              HMAssignmentUnlock(v8 + 8);
              goto LABEL_47;
            }
            GreSetBitmapOwner(*(_QWORD *)(v8 + 16), 0LL);
          }
          else
          {
            *(_DWORD *)(v8 + 48) |= 1u;
          }
          SetOrClrWF(1, v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 9);
          goto LABEL_14;
        }
        v45 = (_DWORD *)(gpsi + 2592LL);
        goto LABEL_39;
      }
    }
  }
  return result;
}

/*
 * XREFs of CreateSpb @ 0x1C00FF068
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0008F64 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C0009B04 (SpbCheck.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     SubtractRect @ 0x1C008B93C (SubtractRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C0290ED8 (GreSaveScreenBits.c)
 */

__int64 __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 result; // rax
  _QWORD **v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // r14
  __int64 *v11; // r12
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  _DWORD *v23; // rcx
  __int64 v24; // rbx
  _QWORD **v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // ebx
  int v29; // r15d
  int v30; // r13d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v32; // rbp
  int v33; // ebx
  struct tagWND *v34; // rdx
  _BYTE v36[16]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v37; // [rsp+78h] [rbp-50h]

  v4 = a1;
  result = IsWindowDesktopComposed(a1);
  if ( !(_DWORD)result || a2 == 2 )
  {
    if ( (a2 & 2) != 0 || !*((_QWORD *)v4 + 11) || (result = GetDesktopWindow((__int64)v4), v14 == result) )
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
          return Win32FreePool(v8);
        v10 = (int *)(v8 + 24);
        v11 = (__int64 *)(v8 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_OWORD *)(v8 + 24) = *((_OWORD *)v4 + 7);
        if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(gpDispInfo + 104LL)) )
        {
LABEL_49:
          Win32FreePool(*(_QWORD *)(v8 + 64));
          return Win32FreePool(v8);
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
          v12 = *(_QWORD *)(*v11 + 200);
          if ( !v12 || (result = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v12, 1LL), (_DWORD)result) )
          {
            result = IsDesktopWindow(*v11);
            if ( (_DWORD)result || (*(_BYTE *)(v13 + 50) & 8) == 0 )
            {
              v34 = *(struct tagWND **)(v13 + 88);
              if ( !v34 || (result = SpbTransfer((struct tagSPB *)v8, v34, 0), (_DWORD)result) )
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
              return SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v13, 1);
            }
          }
          return result;
        }
        v37 = *(_OWORD *)v10;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
          {
            goto LABEL_25;
          }
        }
        else if ( !IsDPIDWMSysMet(v15)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v22 = 0)
                 : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v22) )
        {
LABEL_25:
          if ( IsDPIDWMSysMet(0x51uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v19 = 0)
              : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v19) )
          {
            v23 = (_DWORD *)(gpsi + 2980LL);
          }
          else
          {
            v23 = (_DWORD *)(gpsi + 2204LL);
          }
LABEL_41:
          if ( *v23 )
          {
            v25 = (_QWORD **)gpDispInfo;
          }
          else
          {
            v24 = MonitorFromRect((int *)(v8 + 24), 1LL, v17);
            if ( SubtractRect((__int64)v36, v8 + 24, v24 + 28)
              && (unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 152LL), v36) )
            {
              goto LABEL_46;
            }
            if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(v24 + 28)) )
              goto LABEL_46;
            v25 = (_QWORD **)gpDispInfo;
            if ( v24 != *(_QWORD *)(gpDispInfo + 88LL) )
              goto LABEL_46;
          }
          if ( *((_QWORD *)v4 + 25) || (v27 = GreSaveScreenBits(**v25, 0LL, 0LL), (*(_QWORD *)(v8 + 56) = v27) == 0LL) )
          {
            v28 = *v10 & 7;
            v29 = *(_DWORD *)(v8 + 32) - *v10;
            v30 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
            CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v29 + v28, v30, 0, 0LL);
            *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
            if ( !CompatibleBitmapInternal
              || (v32 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal)) == 0
              || (v33 = NtGdiBitBltInternal(ghdcMem, v28, 0, v29, v30, a3, *v10, *(_DWORD *)(v8 + 28), 0xCC0000u, 0, 0),
                  GreSelectBitmap(ghdcMem, v32),
                  !v33) )
            {
LABEL_46:
              v26 = *(_QWORD *)(v8 + 16);
              if ( v26 )
                GreDeleteObject(v26);
              HMAssignmentUnlock(v8 + 8);
              goto LABEL_49;
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
        v23 = (_DWORD *)(gpsi + 2592LL);
        goto LABEL_41;
      }
    }
  }
  return result;
}

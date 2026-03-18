/*
 * XREFs of CreateSpb @ 0x1C010B97C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 * Callees:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000C0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C000C7D8 (SpbCheck.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     SubtractRect @ 0x1C00EE448 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C0290CD0 (GreSaveScreenBits.c)
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
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  _DWORD *v22; // rcx
  __int64 v23; // rbx
  _QWORD **v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  LONG v27; // ebx
  int v28; // r15d
  int v29; // r13d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v31; // rbp
  int v32; // ebx
  struct tagWND *v33; // rdx
  _BYTE v35[16]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v36; // [rsp+78h] [rbp-50h]

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
              v33 = *(struct tagWND **)(v13 + 88);
              if ( !v33 || (result = SpbTransfer((struct tagSPB *)v8, v33, 0), (_DWORD)result) )
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
        v36 = *(_OWORD *)v10;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
          {
            goto LABEL_25;
          }
        }
        else if ( !IsDPIDWMSysMet(v15)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v21 = 0)
                 : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v21) )
        {
LABEL_25:
          if ( IsDPIDWMSysMet(0x51uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v18 = 0)
              : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v18) )
          {
            v22 = (_DWORD *)(gpsi + 2980LL);
          }
          else
          {
            v22 = (_DWORD *)(gpsi + 2204LL);
          }
LABEL_41:
          if ( *v22 )
          {
            v24 = (_QWORD **)gpDispInfo;
          }
          else
          {
            v23 = MonitorFromRect((int *)(v8 + 24), 1u);
            if ( SubtractRect((__int64)v35, (int *)(v8 + 24), (int *)(v23 + 28))
              && (unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 152LL), v35) )
            {
              goto LABEL_46;
            }
            if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(v23 + 28)) )
              goto LABEL_46;
            v24 = (_QWORD **)gpDispInfo;
            if ( v23 != *(_QWORD *)(gpDispInfo + 88LL) )
              goto LABEL_46;
          }
          if ( *((_QWORD *)v4 + 25) || (v26 = GreSaveScreenBits(**v24, 0LL, 0LL), (*(_QWORD *)(v8 + 56) = v26) == 0LL) )
          {
            v27 = *v10 & 7;
            v28 = *(_DWORD *)(v8 + 32) - *v10;
            v29 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
            CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal((__int64)a3, v28 + v27, v29, 0, 0LL);
            *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
            if ( !CompatibleBitmapInternal
              || (v31 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal)) == 0
              || (v32 = NtGdiBitBltInternal(ghdcMem, v27, 0, v28, v29, a3, *v10, *(_DWORD *)(v8 + 28), 0xCC0000u, 0, 0),
                  GreSelectBitmap(ghdcMem, v31),
                  !v32) )
            {
LABEL_46:
              v25 = *(_QWORD *)(v8 + 16);
              if ( v25 )
                GreDeleteObject(v25);
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
        v22 = (_DWORD *)(gpsi + 2592LL);
        goto LABEL_41;
      }
    }
  }
  return result;
}

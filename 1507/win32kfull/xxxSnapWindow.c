/*
 * XREFs of xxxSnapWindow @ 0x1C0120278
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     xxxCloseClipboard @ 0x1C00D61F0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00D63D8 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00D65D0 (ReferenceWindowStation.c)
 *     PlayEventSound @ 0x1C00EBE10 (PlayEventSound.c)
 *     GreEnableAppContainerRestriction @ 0x1C00FD3BC (GreEnableAppContainerRestriction.c)
 *     _SetClipboardData @ 0x1C0120824 (_SetClipboardData.c)
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 *     ClientNoMemoryPopup @ 0x1C020DE0C (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C0231474 (CreateScreenPalette.c)
 *     DwmAsyncSnapshotWindow @ 0x1C025FB08 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  HDC CompatibleDC; // r13
  char *v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  bool v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // esi
  __int64 DCEx; // rax
  __int64 v21; // rdx
  HDC v22; // r12
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  _DWORD *v30; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 Bitmap; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v38; // [rsp+70h] [rbp-39h]
  __int64 v39; // [rsp+78h] [rbp-31h]
  __int64 v40; // [rsp+80h] [rbp-29h]
  _QWORD v41[3]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v42[3]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v43[9]; // [rsp+B8h] [rbp+Fh] BYREF
  PVOID Object; // [rsp+120h] [rbp+77h] BYREF
  __int64 v46; // [rsp+128h] [rbp+7Fh]

  CompatibleDC = 0LL;
  v46 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput == grpdeskLogon )
    return 0LL;
  if ( ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) < 0 )
    return 0LL;
  v4 = (char *)Object;
  if ( (*((_DWORD *)Object + 8) & 4) != 0 || *(PVOID *)(*(_QWORD *)(a1 + 24) + 24LL) != Object )
    return 0LL;
  while ( (*(_BYTE *)(a1 + 55) & 0x40) != 0 )
    a1 = *(_QWORD *)(a1 + 88);
  if ( !(unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v41[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v41;
    v41[1] = a1;
    ++*(_DWORD *)(a1 + 8);
    PushW32ThreadLock((__int64)v4, v43, UserDereferenceObject);
    ObfReferenceObject(v4);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 16LL);
    v42[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v42;
    v42[1] = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = (unsigned int)OpenClipboard(v12, 0LL) != 0;
    ThreadUnlock1(v15, v14);
    if ( !v13 )
    {
      PopAndFreeW32ThreadLock((__int64)v43);
      ThreadUnlock1(v17, v16);
      return 0LL;
    }
    xxxEmptyClipboard((struct tagWINDOWSTATION *)v4);
    *(_OWORD *)v37 = *(_OWORD *)(a1 + 112);
    if ( !(unsigned int)IntersectRect(v37, v37, (int *)(gpDispInfo + 104LL)) )
    {
      v11 = 0;
      goto LABEL_66;
    }
    v18 = v37[2] - v37[0];
    v19 = v37[3] - v37[1];
    v37[2] -= v37[0];
    v37[3] -= v37[1];
    if ( a1 != GetDesktopWindow(a1) )
    {
      v37[0] -= *(_DWORD *)(a1 + 112);
      v37[1] -= *(_DWORD *)(a1 + 116);
    }
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v22 = (HDC)DCEx;
    if ( !DCEx )
      goto LABEL_63;
    CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx, v21);
    if ( !CompatibleDC )
      goto LABEL_63;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0 )
      {
        goto LABEL_25;
      }
    }
    else if ( !IsDPIDWMSysMet(v23)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v29 = 0)
             : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               v4 = (char *)Object,
               v19 = v37[3],
               v18 = v37[2],
               !v29) )
    {
LABEL_25:
      if ( IsDPIDWMSysMet(0x51uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v26 = 0)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v4 = (char *)Object,
            v19 = v37[3],
            v18 = v37[2],
            v26) )
      {
        v30 = (_DWORD *)(gpsi + 2980LL);
      }
      else
      {
        v30 = (_DWORD *)(gpsi + 2204LL);
      }
LABEL_41:
      if ( *v30 )
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v22, v18, v19, 0, 0LL);
      else
        CompatibleBitmapInternal = GreCreateBitmap(v18, v19, 1LL, *(unsigned __int16 *)(gpDispInfo + 178LL), 0LL);
      Bitmap = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal || (Bitmap = GreCreateBitmap(v18, v19, 1LL, 1LL, 0LL)) != 0 )
      {
        v38 = GreSelectBitmap(CompatibleDC, Bitmap);
        if ( !a2
          && a1 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 416) + 8LL) + 16LL)
          && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
        {
          LOBYTE(Object) = 1;
          GreEnableAppContainerRestriction(0);
        }
        else
        {
          LOBYTE(Object) = 0;
        }
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          UserSessionSwitchLeaveCrit(v34, v33);
          v11 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v18, v19, v22, v37[0], v37[1], 0x40CC0020u, 0, 0);
          EnterCrit(1LL);
        }
        else
        {
          v11 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v18, v19, v22, v37[0], v37[1], 0x40CC0020u, 0, 0);
        }
        if ( (_BYTE)Object )
          GreEnableAppContainerRestriction(1);
        GreSelectBitmap(CompatibleDC, v38);
        if ( v11 )
        {
          SetClipboardData(2LL, Bitmap, 0LL, 1LL);
          if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 && (int)CreateScreenPalette(v22) >= 0 )
          {
            SetClipboardData(9LL, v40, 0LL, 1LL);
            Win32FreePool(v39);
          }
          v11 = 1;
        }
        else if ( Bitmap )
        {
          GreDeleteObject(Bitmap);
        }
        goto LABEL_64;
      }
LABEL_63:
      ClientNoMemoryPopup();
      v11 = 0;
LABEL_64:
      if ( v22 )
        _ReleaseDC(v22);
LABEL_66:
      xxxCloseClipboard((struct tagWINDOWSTATION *)v4);
      HMAssignmentUnlock(v4 + 80);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      PopAndFreeW32ThreadLock((__int64)v43);
      ThreadUnlock1(v36, v35);
      if ( !v11 )
        return v11;
      goto LABEL_69;
    }
    v30 = (_DWORD *)(gpsi + 2592LL);
    goto LABEL_41;
  }
  v10 = (void *)ReferenceDwmApiPort(v7, v6, v8, v9);
  if ( (int)DwmAsyncSnapshotWindow(v10) >= 0 )
  {
    v11 = 1;
LABEL_69:
    PlayEventSound(0xDu);
    return v11;
  }
  return 0;
}

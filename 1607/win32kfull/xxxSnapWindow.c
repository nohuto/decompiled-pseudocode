/*
 * XREFs of xxxSnapWindow @ 0x1C014F320
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00F8FE4 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00F91F0 (ReferenceWindowStation.c)
 *     xxxEmptyClipboard @ 0x1C00F94F0 (xxxEmptyClipboard.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     GreEnableAppContainerRestriction @ 0x1C012BF28 (GreEnableAppContainerRestriction.c)
 *     _SetClipboardData @ 0x1C014F6A0 (_SetClipboardData.c)
 *     ClientNoMemoryPopup @ 0x1C0205478 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C022A6EC (CreateScreenPalette.c)
 *     DwmAsyncSnapshotWindow @ 0x1C025CA58 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  HDC CompatibleDC; // r13
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  bool v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  unsigned int v20; // esi
  __int64 DCEx; // rax
  __int64 v22; // rdx
  HDC v23; // r12
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *v36; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 Bitmap; // r15
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  void *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  BOOL v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  int v72[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v73; // [rsp+70h] [rbp-39h]
  __int64 v74; // [rsp+78h] [rbp-31h]
  __int64 v75; // [rsp+80h] [rbp-29h]
  _QWORD v76[3]; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v77[3]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v78[9]; // [rsp+B8h] [rbp+Fh] BYREF
  PVOID Object; // [rsp+120h] [rbp+77h] BYREF
  __int64 v81; // [rsp+128h] [rbp+7Fh]

  CompatibleDC = 0LL;
  v81 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon
    && ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0 )
  {
    v4 = (char *)Object;
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && *(PVOID *)(*(_QWORD *)(a1 + 24) + 24LL) == Object )
    {
      while ( (*(_BYTE *)(a1 + 55) & 0x40) != 0 )
        a1 = *(_QWORD *)(a1 + 88);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v50 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
        if ( (int)DwmAsyncSnapshotWindow(v50) < 0 )
          return 0;
        v40 = 1;
LABEL_37:
        PlayEventSound(0xDu);
        return v40;
      }
      v76[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v76;
      v76[1] = a1;
      ++*(_DWORD *)(a1 + 8);
      PushW32ThreadLock((__int64)v4, v78, UserDereferenceObject, v8);
      ObfReferenceObject(v4);
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
      v77[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v77;
      v77[1] = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      v10 = (unsigned int)OpenClipboard(v9, 0LL) != 0;
      ThreadUnlock1(v12, v11);
      if ( v10 )
      {
        xxxEmptyClipboard(v4, v13, v14, v15);
        *(_OWORD *)v72 = *(_OWORD *)(a1 + 112);
        if ( !(unsigned int)IntersectRect(v72, v72, (int *)(gpDispInfo + 104LL)) )
        {
          v40 = 0;
          goto LABEL_34;
        }
        v19 = v72[2] - v72[0];
        v20 = v72[3] - v72[1];
        v72[2] -= v72[0];
        v72[3] -= v72[1];
        if ( a1 != GetDesktopWindow(a1) )
        {
          v72[0] -= *(_DWORD *)(a1 + 112);
          v72[1] -= *(_DWORD *)(a1 + 116);
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v23 = (HDC)DCEx;
        if ( !DCEx )
          goto LABEL_62;
        CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx, v22);
        if ( !CompatibleDC )
          goto LABEL_62;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 0 )
          {
LABEL_53:
            v36 = (_DWORD *)(gpsi + 2592LL);
            goto LABEL_19;
          }
        }
        else if ( IsDPIDWMSysMet(v25) && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 0 )
        {
          v59 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54, v55) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v56,
                                                      v57,
                                                      v58)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1;
          v4 = (char *)Object;
          v20 = v72[3];
          v19 = v72[2];
          if ( v59 )
            goto LABEL_53;
        }
        if ( IsDPIDWMSysMet(0x51uLL)
          && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 408)
            ? (v66 = 0)
            : (v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v63,
                                                           v64,
                                                           v65)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v4 = (char *)Object,
              v20 = v72[3],
              v19 = v72[2],
              v66) )
        {
          v36 = (_DWORD *)(gpsi + 2980LL);
        }
        else
        {
          v36 = (_DWORD *)(gpsi + 2204LL);
        }
LABEL_19:
        if ( *v36 )
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(v23, v19, v20, 0, 0LL);
        else
          CompatibleBitmapInternal = GreCreateBitmap(v19, v20, 1LL, *(unsigned __int16 *)(gpDispInfo + 178LL), 0LL);
        Bitmap = CompatibleBitmapInternal;
        if ( CompatibleBitmapInternal || (Bitmap = GreCreateBitmap(v19, v20, 1LL, 1LL, 0LL)) != 0 )
        {
          v73 = GreSelectBitmap(CompatibleDC, Bitmap);
          if ( !a2
            && a1 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 408) + 8LL) + 16LL)
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
          {
            LOBYTE(Object) = 1;
            GreEnableAppContainerRestriction(0, v67, v68, v69);
          }
          else
          {
            LOBYTE(Object) = 0;
          }
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            if ( gdwInAtomicOperation )
            {
              v39 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v39, gdwInAtomicOperation);
            v40 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v19, v20, v23, v72[0], v72[1], 0x40CC0020u, 0, 0);
            EnterCrit(0LL, 1LL);
          }
          else
          {
            v40 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v19, v20, v23, v72[0], v72[1], 0x40CC0020u, 0, 0);
          }
          if ( (_BYTE)Object )
            GreEnableAppContainerRestriction(1, v41, v42, v43);
          GreSelectBitmap(CompatibleDC, v73);
          if ( v40 )
          {
            SetClipboardData(2LL, Bitmap, 0LL, 1LL);
            if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && (int)CreateScreenPalette(v23) >= 0 )
            {
              SetClipboardData(9LL, v74, 0LL, 1LL);
              Win32FreePool(v75, v70, v71);
            }
            v40 = 1;
          }
          else if ( Bitmap )
          {
            GreDeleteObject(Bitmap);
          }
          goto LABEL_32;
        }
LABEL_62:
        ClientNoMemoryPopup();
        v40 = 0;
LABEL_32:
        if ( v23 )
          _ReleaseDC(v23);
LABEL_34:
        xxxCloseClipboard((struct tagWINDOWSTATION *)v4, v16, v17, v18);
        HMAssignmentUnlock(v4 + 80);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)v78, v44, v45, v46);
        ThreadUnlock1(v48, v47);
        if ( !v40 )
          return v40;
        goto LABEL_37;
      }
      PopAndFreeW32ThreadLock((__int64)v78, v13, v14, v15);
      ThreadUnlock1(v52, v51);
    }
  }
  return 0LL;
}

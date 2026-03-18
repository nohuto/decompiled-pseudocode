/*
 * XREFs of _GetPointerDeviceRects @ 0x1C00E3B58
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C00E3A60 (NtUserGetPointerDeviceRects.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0213560 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C021F6F8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C021FF5C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C0229304 (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C00E3CC0 (EnsurePointerDeviceHasMonitor.c)
 *     _FindPointerDevice @ 0x1C00E44A4 (_FindPointerDevice.c)
 *     MiPConvertLogicalRect @ 0x1C01C8020 (MiPConvertLogicalRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01DD09C (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _OWORD *v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rdx
  _OWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v44[8]; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v45[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v46; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v44);
  v43 = 0LL;
  v46 = 0LL;
  if ( !(unsigned int)FindPointerDevice(a1, &v46, &v43) )
  {
    if ( !gptiCurrent )
      goto LABEL_16;
    v8 = *(_QWORD *)(gptiCurrent + 1136LL);
    if ( !v8 || (*(_DWORD *)v8 & 1) == 0 || a1 != *(_QWORD *)(v8 + 40) )
      goto LABEL_16;
LABEL_27:
    if ( a3 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v32, v33) + 408)
          ? (v31 = 0LL)
          : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v30,
                                                         v32,
                                                         v33)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v31) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 408)
            ? (v42 = 0)
            : (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v39,
                                                           v40,
                                                           v41)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v42) )
        {
          v34 = (_QWORD *)gpDispInfo;
          v35 = (_OWORD *)(gpDispInfo + 136LL);
        }
        else
        {
          v34 = (_QWORD *)gpDispInfo;
          v35 = (_OWORD *)(gpDispInfo + 104LL);
        }
      }
      else
      {
        v34 = (_QWORD *)gpDispInfo;
        v35 = (_OWORD *)(gpDispInfo + 120LL);
      }
      *a3 = *v35;
    }
    else
    {
      v34 = (_QWORD *)gpDispInfo;
    }
    if ( a2 )
      *a2 = *(_OWORD *)MiPConvertLogicalRect(v45, *v34 + 104LL);
    goto LABEL_15;
  }
  if ( v43 && !*(_BYTE *)(v43 + 48) )
    goto LABEL_27;
  v11 = v46;
  if ( v46 )
  {
    EnsurePointerDeviceHasMonitor(v46);
    if ( !a3 || *(_QWORD *)(v11 + 280) )
    {
      if ( a2 )
      {
        if ( (*a2 = *(_OWORD *)(v11 + 140), v13 = gpDispInfo, *(_DWORD *)(gpDispInfo + 80LL) > 1u)
          && (*(_DWORD *)(v11 + 252) & 0x20) == 0
          && (unsigned int)(*(_DWORD *)(v11 + 24) - 6) <= 1
          || (v16 = *(_DWORD *)(v11 + 252), (v16 & 0x20) != 0) && (v16 & 0x8000) == 0 )
        {
          VirtualizeMultiMonDigitizerSize(a2);
        }
      }
      if ( !a3 )
        goto LABEL_15;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 0 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v19, v20) + 408) )
          v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v17,
                                                      v19,
                                                      v20)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1;
        else
          v18 = 0LL;
        if ( (_DWORD)v18 )
        {
          v24 = (_OWORD *)(*(_QWORD *)(v46 + 280) + 44LL);
          goto LABEL_14;
        }
        v11 = v46;
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) == 1 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23) + 408) )
          v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v26,
                                                      v27,
                                                      v28)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1;
        else
          v29 = 0;
        if ( v29 )
        {
          v24 = (_OWORD *)(*(_QWORD *)(v46 + 280) + 60LL);
          goto LABEL_14;
        }
        v11 = v46;
      }
      v24 = (_OWORD *)(*(_QWORD *)(v11 + 280) + 28LL);
LABEL_14:
      *a3 = *v24;
LABEL_15:
      v6 = 1;
    }
  }
LABEL_16:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v44);
  return v6;
}

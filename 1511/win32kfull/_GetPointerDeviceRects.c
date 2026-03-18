/*
 * XREFs of _GetPointerDeviceRects @ 0x1C0117E98
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C0117DA0 (NtUserGetPointerDeviceRects.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C021A790 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02295DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C0229D04 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     MiPConvertLogicalRect @ 0x1C0009FC0 (MiPConvertLogicalRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0117D60 (EnsurePointerDeviceHasMonitor.c)
 *     _FindPointerDevice @ 0x1C011A7F8 (_FindPointerDevice.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E6914 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _OWORD *v12; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rax
  int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v20[8]; // [rsp+28h] [rbp-18h] BYREF
  int v21[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v19 = 0LL;
  v22 = 0LL;
  if ( !(unsigned int)FindPointerDevice(a1, &v22, &v19) )
  {
    if ( !gptiCurrent )
      goto LABEL_16;
    v7 = *(_QWORD *)(gptiCurrent + 1112LL);
    if ( !v7 || (*(_DWORD *)v7 & 1) == 0 || a1 != *(_QWORD *)(v7 + 40) )
      goto LABEL_16;
LABEL_21:
    if ( a3 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v15 = 0LL)
          : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            !(_DWORD)v15) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v18 = 0)
            : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v18) )
        {
          v16 = gpDispInfo;
          v17 = (_OWORD *)(gpDispInfo + 136LL);
        }
        else
        {
          v16 = gpDispInfo;
          v17 = (_OWORD *)(gpDispInfo + 104LL);
        }
      }
      else
      {
        v16 = gpDispInfo;
        v17 = (_OWORD *)(gpDispInfo + 120LL);
      }
      *a3 = *v17;
    }
    else
    {
      v16 = gpDispInfo;
    }
    if ( a2 )
      *a2 = *(_OWORD *)MiPConvertLogicalRect(v21, (_DWORD *)(*(_QWORD *)v16 + 104LL));
    goto LABEL_15;
  }
  if ( v19 && !*(_BYTE *)(v19 + 48) )
    goto LABEL_21;
  v8 = v22;
  if ( v22 )
  {
    EnsurePointerDeviceHasMonitor(v22);
    if ( !a3 || *(_QWORD *)(v8 + 280) )
    {
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v8 + 140);
        v10 = gpDispInfo;
        if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u && ((*(_DWORD *)(v8 + 252) & 0x20) != 0 || *(_DWORD *)(v8 + 24) == 7) )
          VirtualizeMultiMonDigitizerSize(a2, v9);
      }
      if ( !a3 )
        goto LABEL_15;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) == 0 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
          v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1;
        else
          v11 = 0LL;
        if ( (_DWORD)v11 )
        {
          v12 = (_OWORD *)(*(_QWORD *)(v22 + 280) + 44LL);
          goto LABEL_14;
        }
        v8 = v22;
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
          v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1;
        else
          v14 = 0;
        if ( v14 )
        {
          v12 = (_OWORD *)(*(_QWORD *)(v22 + 280) + 60LL);
          goto LABEL_14;
        }
        v8 = v22;
      }
      v12 = (_OWORD *)(*(_QWORD *)(v8 + 280) + 28LL);
LABEL_14:
      *a3 = *v12;
LABEL_15:
      v6 = 1;
    }
  }
LABEL_16:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  return v6;
}

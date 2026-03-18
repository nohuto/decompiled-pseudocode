/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C00B791C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C00B772C (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C022F294 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  void *v10; // rdi
  NTSTATUS TitleBarInfo; // edi
  char *v12; // rdi
  __int64 v13; // rbp
  int v14; // eax
  ULONG v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rdi
  int v20; // ebx
  int v21; // esi
  int v22; // [rsp+60h] [rbp+18h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v22 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v10 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v10, *(_QWORD *)a1, (__int128 *)a2, &v22);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v16 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v16);
    v14 = 1;
  }
  else
  {
    v2 = 1;
    v23 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, 0LL, &v23);
    v12 = (char *)a2 + 44;
    v13 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v12, v12, 0LL, &v23);
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v14 = v22;
  }
  if ( !v14 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2, v17, v18);
    v19 = (_DWORD *)((char *)a2 + 28);
    v20 = 2;
    v21 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v19 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v20, (unsigned int)&v23, v21, (__int64)&v22, 1);
      ++v20;
      v21 += 16;
      ++v19;
    }
    while ( v20 <= 5 );
    return 1;
  }
  return v2;
}

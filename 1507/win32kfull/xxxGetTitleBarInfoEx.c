/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C011E5EC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0093D50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C011E744 (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0236794 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS TitleBarInfo; // ebx
  char *v13; // rbx
  __int64 v14; // rbp
  int v15; // eax
  ULONG v16; // eax
  _DWORD *v17; // rsi
  int v18; // ebx
  int v19; // edi
  int v21; // [rsp+60h] [rbp+18h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v21 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_8;
  v9 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
  UserSessionSwitchLeaveCrit(v11, v10);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v9);
  EnterCrit(1LL);
  if ( TitleBarInfo < 0 )
  {
    v16 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v16);
    v15 = 1;
  }
  else
  {
    v2 = 1;
    v22 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, 0LL, &v22);
    v13 = (char *)a2 + 44;
    v14 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v13, v13, 0LL, &v22);
      v13 += 16;
      --v14;
    }
    while ( v14 );
    v15 = v21;
  }
  if ( !v15 )
  {
LABEL_8:
    *(_QWORD *)((char *)a2 + 20) = 0LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *(_QWORD *)((char *)a2 + 36) = 0LL;
    memset((char *)a2 + 44, 0, 0x60uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v17 = (_DWORD *)((char *)a2 + 28);
    v18 = 2;
    v19 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v17 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v18, (unsigned int)&v22, v19, (__int64)&v21, 1);
      ++v18;
      v19 += 16;
      ++v17;
    }
    while ( v18 <= 5 );
    return 1;
  }
  return v2;
}

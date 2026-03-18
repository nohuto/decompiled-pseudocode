/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CE9BC
 * Callers:
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401B22B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

HBITMAP __fastcall xxxGetDummyBitmap(struct tagTHREADINFO **a1, struct tagGETCLIPBDATA *a2)
{
  void *v4; // rbx
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  HBITMAP result; // rax
  struct tagCLIP *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  HBITMAP v12; // rbx
  struct tagCLIP *v13; // rax
  struct tagCLIP *v14; // rsi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  ClipboardData = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9u, (__int64)a2);
  ClipFormat = FindClipFormat((unsigned __int64)a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) != 2LL )
    {
      result = (HBITMAP)xxxGetClipboardData(a1, 0x11u, (__int64)a2);
      v4 = result;
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v8 = FindClipFormat((unsigned __int64)a1, 8u, 1);
  if ( v8 && *((_QWORD *)v8 + 1) != 2LL )
    v4 = xxxGetClipboardData(a1, 8u, (__int64)a2);
  if ( !v4 )
    return 0LL;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  v10 = HMValidateHandleNoRip((__int64)v4, 6);
  if ( !v10 )
  {
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
    return 0LL;
  }
  v11 = PtiCurrent(v9);
  Win32HM_LockIntoThread<1>((__int64)v11, v10, (__int64 *)BugCheckParameter3);
  v12 = xxxDIBtoBMP((struct tagBITMAPINFO *)(v10 + 20), (__int64)ClipboardData, *(_DWORD *)(v10 + 16));
  if ( v12 )
  {
    v13 = FindClipFormat((unsigned __int64)a1, 2u, 1);
    v14 = v13;
    if ( v13 )
    {
      UT_FreeCBFormat(v13);
      *((_QWORD *)v14 + 1) = v12;
      GreSetBitmapOwner(v12, 0LL);
      *(_DWORD *)a2 = 2;
    }
    else
    {
      GreDeleteObject(v12);
      v12 = 0LL;
    }
  }
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  return v12;
}

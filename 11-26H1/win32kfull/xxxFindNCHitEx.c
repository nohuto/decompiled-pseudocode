/*
 * XREFs of xxxFindNCHitEx @ 0x14018DE2C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z @ 0x14018DF78 (-FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z.c)
 *     xxxClientHitTestScrollBar @ 0x14028C0BC (xxxClientHitTestScrollBar.c)
 */

__int64 __fastcall xxxFindNCHitEx(__int64 *a1, unsigned int a2, struct tagPOINT a3)
{
  unsigned int v6; // ebx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagPOINT v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  if ( a2 == 5 )
  {
    if ( a1[21] && (*(_BYTE *)(a1[5] + 16) & 1) != 0 )
      return FindNCMNItemHitEx((struct tagWND *)a1, 5, &v8);
    return a2;
  }
  if ( a2 == 7 )
  {
    if ( (*(_BYTE *)(a1[5] + 16) & 2) != 0 )
    {
      Win32HM_LockIntoThread<0>(a1[2], (__int64)a1, BugCheckParameter3);
      v6 = (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))xxxClientHitTestScrollBar)(*a1, 1LL, a3) | 0x10000;
      goto LABEL_10;
    }
    return a2;
  }
  if ( a2 != 6 || (*(_BYTE *)(a1[5] + 16) & 4) == 0 )
    return a2;
  Win32HM_LockIntoThread<0>(a1[2], (__int64)a1, BugCheckParameter3);
  v6 = (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))xxxClientHitTestScrollBar)(*a1, 0LL, a3);
LABEL_10:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  return v6;
}

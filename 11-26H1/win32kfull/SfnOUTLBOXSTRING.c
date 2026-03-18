/*
 * XREFs of SfnOUTLBOXSTRING @ 0x140129FE0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1401296BC (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(
        _QWORD *a1,
        unsigned int a2,
        ULONG_PTR a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  _QWORD *v11; // rbx
  int v12; // edi
  __int64 result; // rax
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  unsigned int ListboxString; // ebx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  v11 = a1;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  v12 = 1;
  result = HMValidateHandleNoSecure((__int64)a1, 1);
  if ( result )
  {
    v14 = *(unsigned int *)(v11[5] + 28LL);
    if ( (v14 & 0x40) != 0 || (v14 & 0x30) == 0 )
      v12 = 0;
    v15 = PtiCurrent(v14);
    Win32HM_LockIntoThread<1>((__int64)v15, (__int64)v11, (__int64 *)BugCheckParameter3);
    ListboxString = ClientGetListboxString(v11, a2, a3, a4, a5, a6, a7, v12, a8);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    return ListboxString;
  }
  return result;
}

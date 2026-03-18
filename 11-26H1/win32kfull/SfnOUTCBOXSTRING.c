/*
 * XREFs of SfnOUTCBOXSTRING @ 0x1400462F0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1401296BC (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTCBOXSTRING(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  __int64 v11; // rbx
  int v12; // edi
  __int64 result; // rax
  int v14; // ecx
  unsigned int ListboxString; // ebx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  v10 = a2;
  v11 = (__int64)a1;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  v12 = 1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
    if ( (v14 & 0x200) != 0 || (v14 & 0x30) == 0 )
      v12 = 0;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v11);
    ListboxString = ClientGetListboxString(v11, v10, a3, a4, a5, a6, a7, v12, a8);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    return ListboxString;
  }
  return result;
}

/*
 * XREFs of FindRimDevBackedDeviceInfo @ 0x1C014F184
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D8D34 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

struct DEVICEINFO *__fastcall FindRimDevBackedDeviceInfo(__int64 a1, int a2, __int64 a3)
{
  struct DEVICEINFO *v3; // rbx
  struct DEVICEINFO *v4; // rdi
  struct DEVICEINFO *i; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  LOBYTE(a3) = a2 == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3LL, a3, &v8) >= 0 )
  {
    v4 = (struct DEVICEINFO *)(v8 + 64);
    if ( !v8 )
      v4 = 0LL;
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v7, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( i == v4 )
      {
        v3 = i;
        break;
      }
    }
    RawInputManagerDeviceObjectDereference(v8);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  }
  return v3;
}

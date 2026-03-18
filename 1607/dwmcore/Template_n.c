/*
 * XREFs of Template_n @ 0x180140DFC
 * Callers:
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180029928 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_n(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ULONGLONG a4)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a4;
  UserData.Size = 16;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 1u, &UserData);
}

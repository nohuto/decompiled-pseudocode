/*
 * XREFs of DwmAsyncSnapshotWindow @ 0x1C025FB08
 * Callers:
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncSnapshotWindow(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  _DWORD v6[14]; // [rsp+20h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset((char *)v6 + 2, 0, 0x32uLL);
    v6[0] = 3407884;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = -2147483638;
    *(_QWORD *)&v6[11] = a2;
    EtwUpdateEvent(0LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}

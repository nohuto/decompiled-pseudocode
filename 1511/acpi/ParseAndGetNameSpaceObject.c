/*
 * XREFs of ParseAndGetNameSpaceObject @ 0x1C000CD58
 * Callers:
 *     ParseNameObj @ 0x1C0016A2C (ParseNameObj.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     ParseName @ 0x1C0012EF0 (ParseName.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseAndGetNameSpaceObject(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned int NameSpaceObject; // ebx
  _BYTE Src[256]; // [rsp+30h] [rbp-128h] BYREF

  NameSpaceObject = ParseName(a1, Src);
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(Src);
    if ( NameSpaceObject == -1073741772 )
    {
      if ( a4 )
      {
        NameSpaceObject = 0;
        *a3 = 0LL;
      }
      else
      {
        LogError(3221225524LL);
        PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}

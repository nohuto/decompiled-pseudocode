/*
 * XREFs of ParseAndGetNameSpaceObject @ 0x1C000C7C8
 * Callers:
 *     ParseNameObj @ 0x1C0015A18 (ParseNameObj.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
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

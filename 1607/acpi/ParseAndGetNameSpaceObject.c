/*
 * XREFs of ParseAndGetNameSpaceObject @ 0x1C001EDE8
 * Callers:
 *     ParseNameObj @ 0x1C001DEBC (ParseNameObj.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     ParseName @ 0x1C00199B0 (ParseName.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAndGetNameSpaceObject(__int64 a1, char **a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int NameSpaceObject; // ebx
  char Src[256]; // [rsp+30h] [rbp-138h] BYREF

  NameSpaceObject = ParseName(a1, a2, Src);
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(Src);
    if ( NameSpaceObject == -1073741772 )
    {
      if ( a5 )
      {
        NameSpaceObject = 0;
        *a4 = 0LL;
      }
      else
      {
        LogError(3221225524LL);
        AcpiDiagTraceAmlError(a1, 3221225524LL);
        PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}

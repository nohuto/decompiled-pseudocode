/*
 * XREFs of SdbpCheckMatchingDevice @ 0x1406C2224
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // ebx
  const char *v10; // r9
  int v11; // r8d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 960);
  v7 = 0;
  *a1 = 0;
  if ( !v6 )
  {
    v10 = "No device query callback specified";
    v11 = 1781;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", v11, (_DWORD)v10);
    return v7;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
  {
    v10 = "Failed to read HWID attribute";
    v11 = 1787;
    goto LABEL_3;
  }
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    v10 = "Failed to get HWID";
    v11 = 1793;
    goto LABEL_3;
  }
  v7 = 1;
  *a1 = v6(StringTagPtr);
  if ( a6 )
    *(_DWORD *)(a6 + 80) = 1;
  return v7;
}

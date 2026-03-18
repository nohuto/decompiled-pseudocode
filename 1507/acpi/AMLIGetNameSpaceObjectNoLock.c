/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C000DBA0
 * Callers:
 *     ACPIDockIsDockDevice @ 0x1C000D7C8 (ACPIDockIsDockDevice.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C000FF00 (GetNameSpaceObjectNoLock.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(_BYTE *Src, __int64 a2, _QWORD *a3)
{
  int NameSpaceObjectNoLock; // ebx
  __int64 v8; // rcx
  char v9; // dl
  __int64 v10; // [rsp+20h] [rbp-18h]

  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( !Src || !*Src )
    return 3221225486LL;
  if ( a2 && (*(_BYTE *)(*(_QWORD *)a2 + 56LL) & 4) != 0 )
  {
    return (unsigned int)-1073741738;
  }
  else
  {
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Src);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v8 = v10;
      if ( v10 )
      {
        dword_1C005A218 = 0;
        v9 = gdwfAMLI;
        byte_1C005A21C = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 120));
          v8 = v10;
          v9 = gdwfAMLI;
        }
        *a3 = v10 + 112;
        if ( (v9 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 104), 0xFFFFFFFF) == 1 )
        {
          *(_WORD *)(v10 + 56) |= 4u;
          if ( (*(_WORD *)(v10 + 56) & 0x40) == 0 )
            FreeNameSpaceObjects();
        }
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
  }
  return (unsigned int)NameSpaceObjectNoLock;
}

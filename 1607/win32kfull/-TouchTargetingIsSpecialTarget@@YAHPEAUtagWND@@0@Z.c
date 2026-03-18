/*
 * XREFs of ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C0221A84
 * Callers:
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220C84 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingIsSpecialTarget(struct tagWND *a1, struct tagWND *a2)
{
  __int64 result; // rax

  LOBYTE(result) = *((_QWORD *)a1 + 2) != *((_QWORD *)a2 + 2)
                || *((_DWORD *)a2 + 28) == *((_DWORD *)a2 + 30) && *((_DWORD *)a2 + 29) == *((_DWORD *)a2 + 31);
  return (unsigned __int8)result;
}

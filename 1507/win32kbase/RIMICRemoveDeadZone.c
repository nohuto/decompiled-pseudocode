/*
 * XREFs of RIMICRemoveDeadZone @ 0x1C00D2D84
 * Callers:
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMICRemoveDeadZone(__int64 a1)
{
  __int64 result; // rax
  struct tagRECT v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  result = *(unsigned int *)(a1 + 604);
  if ( (result & 1) != 0 )
  {
    v3 = *(struct tagRECT *)(a1 + 588);
    gbSetDeadZoneExp = 1;
    gGlobalDeadZone = v3;
    v4 = MEMORY[0xFFFFF78000000320];
    v5 = MEMORY[0xFFFFF78000000004];
    *(_DWORD *)(a1 + 604) &= ~1u;
    v6 = (unsigned __int64)(v4 * v5) >> 24;
    result = 0LL;
    gdwDeadZoneExpirationTime = v6;
    *(_QWORD *)(a1 + 588) = 0LL;
    *(_QWORD *)(a1 + 596) = 0LL;
  }
  gHandedness = 0;
  return result;
}

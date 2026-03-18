/*
 * XREFs of RIMICRemoveDeadZone @ 0x1C00D4BA4
 * Callers:
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
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

  result = *(unsigned int *)(a1 + 636);
  if ( (result & 1) != 0 )
  {
    v3 = *(struct tagRECT *)(a1 + 620);
    gbSetDeadZoneExp = 1;
    gGlobalDeadZone = v3;
    v4 = MEMORY[0xFFFFF78000000320];
    v5 = MEMORY[0xFFFFF78000000004];
    *(_DWORD *)(a1 + 636) &= ~1u;
    v6 = (unsigned __int64)(v4 * v5) >> 24;
    result = 0LL;
    gdwDeadZoneExpirationTime = v6;
    *(_QWORD *)(a1 + 620) = 0LL;
    *(_QWORD *)(a1 + 628) = 0LL;
  }
  gHandedness = 0;
  return result;
}

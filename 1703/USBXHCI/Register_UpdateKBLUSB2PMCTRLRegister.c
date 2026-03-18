/*
 * XREFs of Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C002323C
 * Callers:
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C005325C (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Register_UpdateKBLUSB2PMCTRLRegister(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 33220LL) = a2 | *(_DWORD *)(*(_QWORD *)(a1 + 24) + 33220LL) & 0xFFFFFFFC;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}

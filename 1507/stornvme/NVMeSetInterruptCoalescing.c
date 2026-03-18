/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x1C000B874
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004400 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

_UNKNOWN **__fastcall NVMeSetInterruptCoalescing(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  char v5; // di
  char v6; // bl
  char v7; // al
  void *v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v5 = 0;
    v6 = 0;
    if ( *(_BYTE *)(a1 + 40) )
      v5 = *(_BYTE *)(a1 + 40);
    v7 = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(a1 + 563) = 0;
    v8 = *(void **)(a1 + 648);
    if ( v7 )
      v6 = v7;
    memset(v8, 0, 0x10A8uLL);
    v9 = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 616) = v9;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v9 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    v10 = *(_BYTE **)(a1 + 648);
    v10[4140] = v6;
    v10[4096] = 9;
    v10[4136] = 8;
    v10[4141] = v5;
    ProcessCommand(a1, a1 + 560);
    LOBYTE(v11) = a2;
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v11, 10000LL);
  }
  return result;
}

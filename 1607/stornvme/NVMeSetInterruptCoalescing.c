/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x1C000E190
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
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
    *(_BYTE *)(a1 + 571) = 0;
    v8 = *(void **)(a1 + 656);
    if ( v7 )
      v6 = v7;
    memset(v8, 0, 0x1098uLL);
    v9 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 624) = v9;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v9 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    v10 = *(_BYTE **)(a1 + 656);
    v10[4140] = v6;
    v10[4096] = 9;
    v10[4136] = 8;
    v10[4141] = v5;
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v11) = a2;
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v11, 10000LL);
  }
  return result;
}

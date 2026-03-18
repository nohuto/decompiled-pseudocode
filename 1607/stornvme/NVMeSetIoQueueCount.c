/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C000E290
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 v6; // si
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // bx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8

  if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 232);
    v7 = *(_WORD *)(a1 + 234);
  }
  else
  {
    *(_DWORD *)(a1 + 232) = 0;
    if ( *(_BYTE *)(a1 + 16) )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v6 = *(_WORD *)(a1 + 36);
      if ( !v6 )
        v6 = *(_WORD *)(a1 + 162);
      v7 = *(_WORD *)(a1 + 38);
      if ( !v7 )
      {
        v8 = *(_WORD *)(a1 + 200);
        if ( v8 <= 1u )
          v7 = 1;
        else
          v7 = v8 - 1;
      }
      if ( v6 <= v7 )
        v6 = v7;
    }
  }
  *(_BYTE *)(a1 + 571) = 0;
  memset(*(void **)(a1 + 656), 0, 0x1098uLL);
  v9 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v9;
  *(_DWORD *)(a1 + 560) = 1;
  *(_BYTE *)(v9 + 4245) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
  v10 = *(_QWORD *)(a1 + 656);
  *(_WORD *)(v10 + 4142) = v7 - 1;
  *(_BYTE *)(v10 + 4096) = 9;
  *(_BYTE *)(v10 + 4136) = 7;
  *(_WORD *)(v10 + 4140) = v6 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 656) + 4216LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 656) + 4224LL) = a2;
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v11) = a3;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v11, 10000LL);
}

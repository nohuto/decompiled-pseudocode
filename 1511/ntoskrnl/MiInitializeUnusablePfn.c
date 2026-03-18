/*
 * XREFs of MiInitializeUnusablePfn @ 0x14074676C
 * Callers:
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 */

__int64 __fastcall MiInitializeUnusablePfn(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbp
  _KPROCESS *Process; // rbx
  unsigned __int8 v6; // r14
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rcx
  __int64 result; // rax

  v4 = (a1 + 0x58000000000LL) / 48;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = MiLockPageInline(a1);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFDuLL;
  *(_QWORD *)(a1 + 16) = 128LL;
  v9 = v8 | 0xFFFFFFFFDLL;
  *(_QWORD *)a1 = Process;
  *(_QWORD *)(a1 + 40) = v9;
  *(_WORD *)(a1 + 32) = 2;
  v10 = *(_BYTE *)(a1 + 34) & 0x3F | 0x40;
  *(_QWORD *)(a1 + 24) = v7 & 0xC000000000000000uLL | 1;
  *(_BYTE *)(a1 + 34) = v10;
  if ( a2 == 29 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 40) = v9 & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
  }
  *(_BYTE *)(a1 + 34) = v10 & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v4, 0) << 58);
  v11 = *(_QWORD *)(a1 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(v4) & 3) << 36) | 0x20000000000000LL;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(a1 + 40) = v11;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
  __writecr8(v6);
  ++qword_1402FF820;
  return result;
}

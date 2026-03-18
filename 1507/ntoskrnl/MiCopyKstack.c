/*
 * XREFs of MiCopyKstack @ 0x140134B58
 * Callers:
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1401347E4 (MiJumpStackTarget.c)
 * Callees:
 *     KeCopyPage @ 0x140186CC0 (KeCopyPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiCopyKstack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 PteShadow; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  char v10; // cl
  __int64 result; // rax

  v4 = (a1 + 0x58000000000LL) / 48;
  v5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  KeCopyPage(a3 << 25 >> 16, (__int64)(v5 << 25) >> 16);
  PteShadow = *(_QWORD *)v5;
  v7 = 0x90482413000LL;
  v8 = 2040LL;
  if ( v5 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
  v9 = PteShadow ^ (PteShadow ^ (v4 << 12)) & 0xFFFFFFFFF000LL;
  *(_QWORD *)v5 = v9;
  if ( v5 + v7 <= v8 )
    MiWritePteShadow(v5, v9);
  v10 = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  result = (__int64)(v5 << 25) >> 16;
  *(_BYTE *)(a2 + 34) = v10;
  return result;
}

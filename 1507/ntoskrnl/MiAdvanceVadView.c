/*
 * XREFs of MiAdvanceVadView @ 0x1400F1AD4
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 */

__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  bool v9; // zf
  _WORD *SubsectionNode; // rax
  _WORD *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  v4 = a2 + (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v5 = *(__int64 **)(a1 + 72);
    v6 = *v5;
    v7 = (a2 << 12) + MiStartingOffset(v5, *(_QWORD *)(a1 + 80), 0xFFFFFFFF);
    v8 = v7 >> 12;
    v9 = *(_QWORD *)(v6 + 64) == 0LL;
    v19 = v7 >> 12;
    if ( v9 )
    {
      SubsectionNode = MiLocatePagefileSubsection((unsigned int *)(v6 + 120), &v19);
      v8 = v19;
    }
    else
    {
      SubsectionNode = MiLocateSubsectionNode((volatile signed __int32 *)v6, v7, 0);
    }
    v11 = SubsectionNode;
    v12 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)(SubsectionNode[16] & 0xFFC0) << 26);
    *(_QWORD *)(a1 + 72) = SubsectionNode;
    v13 = v8 - v12;
    v14 = *((_QWORD *)SubsectionNode + 1) + 8 * v13;
    v15 = *(unsigned int *)(a1 + 28);
    *(_QWORD *)(a1 + 80) = v14;
    v16 = (v15 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v4 + v13;
    v17 = *((unsigned int *)v11 + 11);
    result = *((_QWORD *)v11 + 1);
    if ( v16 >= v17 )
      v18 = result + 8LL * (unsigned int)(*((_DWORD *)v11 + 13) - 1 + v17);
    else
      v18 = result + 8 * v16;
    *(_QWORD *)(a1 + 88) = v18;
  }
  *(_DWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 32) = BYTE4(v4);
  return result;
}

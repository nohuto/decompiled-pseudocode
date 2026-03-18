/*
 * XREFs of ?ReevaluateQFrameHasDelegation@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C15F4
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C01C1740 (-SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall ReevaluateQFrameHasDelegation(const struct tagPOINTERINPUTFRAME *a1, unsigned int a2)
{
  __int64 v2; // r11
  unsigned int v3; // r8d
  unsigned int v4; // esi
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rcx
  int *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 result; // rax

  v2 = *((_QWORD *)a1 + 12);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 10);
  v7 = 0;
  v8 = 5LL * a2;
  do
  {
    if ( v7 >= v4 )
      break;
    v9 = *((_QWORD *)a1 + 11) + 216LL * v7;
    if ( *(_DWORD *)(v9 + 8) == a2 && (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v9) )
    {
      if ( (v11 = *v10, (*v10 & 0x100000) != 0) && (v11 & 0x200000) == 0 && (v11 & 0x400000) == 0
        || (v11 & 0x800000) != 0 && (v11 & 0x1000000) != 0 && (v11 & 0x2000000) == 0 && (v11 & 0x4000000) == 0
        || (v11 & 0x8000000) != 0 && (v11 & 0x10000000) != 0 && (v11 & 0x20000000) == 0 && (v11 & 0x40000000) == 0
        || v11 < 0 && (v12 = v10[1], (v12 & 1) != 0) && (v12 & 2) == 0 && (v12 & 4) == 0
        || (v13 = v10[1], (v13 & 8) != 0) && (v13 & 0x10) != 0 && (v13 & 0x20) == 0 && (v13 & 0x40) == 0 )
      {
        v3 = 1;
      }
    }
    ++v7;
  }
  while ( !v3 );
  result = v3;
  *(_DWORD *)(v2 + 8 * v8 + 20) ^= (*(_DWORD *)(v2 + 8 * v8 + 20) ^ (8 * v3)) & 8;
  return result;
}

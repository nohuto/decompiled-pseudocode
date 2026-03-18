/*
 * XREFs of ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C079C
 * Callers:
 *     DelegateCoalescePointerMessage @ 0x1C01F2FF8 (DelegateCoalescePointerMessage.c)
 * Callees:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01BFB0C (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall PointerFrameList::DelegateCoalesceQFrame(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2)
{
  _DWORD *v2; // r10
  int v3; // edx
  int v5; // eax
  struct tagPOINTERINPUTFRAME *v6; // rax
  __int64 v7; // r10
  const struct tagPOINTERINPUTFRAME *v8; // r11
  struct tagPOINTERINPUTFRAME *v9; // rdi
  unsigned int v10; // ebx

  v2 = (_DWORD *)(*((_QWORD *)this + 12) + 40LL * (unsigned int)a2);
  v3 = v2[5];
  if ( (v3 & 8) != 0 )
  {
    v2[7] = 9;
    return 0LL;
  }
  if ( (v3 & 2) == 0 && v2[6] != 9 )
  {
    v5 = v2[7];
    if ( v5 )
    {
      if ( v5 != 9 )
        return 0LL;
    }
  }
  if ( (v3 & 1) == 0 )
  {
    v2[7] = 13;
    return 0LL;
  }
  v6 = ReferencePreviousFrameByDeviceInt(this);
  v9 = v6;
  if ( !v6 )
  {
    *(_DWORD *)(v7 + 28) = 10;
    return 0LL;
  }
  v10 = CoalesceQFrames(v8, (struct tagPOINTERQFRAME *)v7, v6);
  UnreferenceFrameInt(v9);
  return v10;
}

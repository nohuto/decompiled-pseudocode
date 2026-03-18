/*
 * XREFs of ?IsAnyNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C022FC2C
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C02302FC (-SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall IsAnyNodeMessageDelegated(const struct tagPOINTERINFONODE *a1)
{
  __int64 result; // rax
  int *v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax

  result = IsPointerInfoNodeValid(a1);
  if ( (_DWORD)result )
  {
    v4 = *v2;
    v5 = 1;
    if ( ((v4 & 0x80000) == 0 || (v4 & 0x100000) != 0 || (v4 & 0x200000) != 0)
      && ((v4 & 0x400000) == 0 || (v4 & 0x800000) == 0 || (v4 & 0x1000000) != 0 || (v4 & 0x2000000) != 0)
      && ((v4 & 0x4000000) == 0 || (v4 & 0x8000000) == 0 || (v4 & 0x10000000) != 0 || (v4 & 0x20000000) != 0) )
    {
      if ( (v4 & 0x40000000) == 0 || v4 >= 0 || (v6 = *(_DWORD *)(v3 + 4), (v6 & 1) != 0) || (v6 & 2) != 0 )
      {
        v7 = *(_DWORD *)(v3 + 4);
        if ( (v7 & 4) == 0 || (v7 & 8) == 0 || (v7 & 0x10) != 0 || (v7 & 0x20) != 0 )
          return 0;
      }
    }
    return v5;
  }
  return result;
}

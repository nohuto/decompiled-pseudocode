/*
 * XREFs of MiImagePageOk @ 0x1400790FC
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 * Callees:
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE *PrototypePteDirect; // rsi
  char v5; // r8
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rbx
  _BOOL8 result; // rax
  __int64 Address; // rax
  int v12; // edx

  result = 1;
  if ( a1 < 0xFFFF800000000000uLL || (MiFlags & 0x30000) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 40);
    if ( (v2 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 && ((v2 >> 54) & 7) != 3 )
    {
      PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*(_QWORD *)(a2 + 16), a2, HIWORD(MiFlags), a2);
      v7 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0
        && ((v5 & 3u) <= 1 || (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v3 + 16) & 2) != 0 || !MiCanPageMove(v8)) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 8LL);
        if ( v9 && (v9 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v9 & 3) != 2 )
        {
          if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(v7 + 92) & 0xC000000) != 0 )
            return 0;
          Address = MiLocateAddress(v6);
          if ( !Address )
            return 0;
          v12 = *(_DWORD *)(Address + 48);
          if ( (v12 & 7) != 2 )
            return 0;
          if ( (v12 & 0xF8) != 8
            && ((*(_DWORD *)(Address + 64) & 0x10000000) == 0 || (v9 & 4) != 0)
            && ((MiFlags & 0x400) == 0 || (PrototypePteDirect[34] & 2) == 0) )
          {
            return 0;
          }
        }
      }
    }
  }
  return result;
}

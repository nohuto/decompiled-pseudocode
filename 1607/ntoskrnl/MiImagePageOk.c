/*
 * XREFs of MiImagePageOk @ 0x14009CCE8
 * Callers:
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 PrototypePteDirect; // rax
  int v4; // r8d
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r10
  _BOOL8 result; // rax
  unsigned __int64 Address; // rax
  char v10; // r10
  __int64 v11; // r11
  int v12; // edx

  result = 1;
  if ( a1 < 0xFFFF800000000000uLL || (MiFlags & 0x4000) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 40);
    if ( (v2 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 && ((v2 >> 54) & 7) != 3 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a2 + 16));
      v6 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL);
        if ( v7 )
        {
          if ( (v7 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v7 & 3) != 2 )
          {
            if ( (v4 & 0x80000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC000000) != 0 )
              return 0;
            Address = MiLocateAddress(v5);
            if ( !Address )
              return 0;
            v12 = *(_DWORD *)(Address + 48);
            if ( (v12 & 7) != 2 )
              return 0;
            if ( (v12 & 0xF8) != 8
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v10 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v11 + 34) & 2) == 0) )
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

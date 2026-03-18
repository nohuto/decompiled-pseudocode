/*
 * XREFs of MiImagePageOk @ 0x1400E2EAC
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // r10
  _BOOL8 result; // rax
  unsigned __int64 Address; // rax
  char v10; // r10
  __int64 v11; // r11
  int v12; // edx

  result = 1;
  if ( a1 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    if ( (v3 & 0x200000000000000LL) != 0 )
    {
      v4 = *(_QWORD *)(a2 + 16);
      if ( (v4 & 0x400) != 0 && ((v3 >> 54) & 7) != 3 )
      {
        v5 = v4 >> 16;
        v6 = *(_QWORD *)v5;
        if ( (*(_DWORD *)(*(_QWORD *)v5 + 56LL) & 0x20) != 0 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL);
          if ( v7 )
          {
            if ( (v7 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v7 & 3) != 2 )
            {
              if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC000000) != 0 )
                return 0;
              Address = MiLocateAddress(a1);
              if ( !Address )
                return 0;
              v12 = *(_DWORD *)(Address + 48);
              if ( (v12 & 7) != 2
                || (v12 & 0xF8) != 8
                && ((*(_DWORD *)(Address + 64) & 0x10000000) == 0 || (v10 & 4) != 0)
                && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v11 + 34) & 2) == 0) )
              {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

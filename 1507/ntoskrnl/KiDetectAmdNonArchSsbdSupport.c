/*
 * XREFs of KiDetectAmdNonArchSsbdSupport @ 0x140208600
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall KiDetectAmdNonArchSsbdSupport(__int64 a1, int *a2)
{
  int v2; // r8d
  __int64 v20; // rax

  v2 = *a2;
  if ( (*a2 & 0x80u) == 0 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x2000000) != 0 )
    {
      KiSsbdMsr = -1073676001;
LABEL_16:
      *a2 = v2 | 0x80;
      return;
    }
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
      return;
    switch ( *(_BYTE *)(a1 + 1520) )
    {
      case 0x15:
        v20 = 0x40000000000000LL;
        break;
      case 0x16:
        v20 = 0x200000000LL;
        break;
      case 0x17:
        KiSsbdBit = 1024LL;
        goto LABEL_15;
      default:
        return;
    }
    KiSsbdBit = v20;
LABEL_15:
    KiSsbdMsr = -1073672160;
    goto LABEL_16;
  }
}

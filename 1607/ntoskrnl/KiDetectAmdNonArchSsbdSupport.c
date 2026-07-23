/*
 * XREFs of KiDetectAmdNonArchSsbdSupport @ 0x1401D955C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall KiDetectAmdNonArchSsbdSupport(__int64 a1, int *a2)
{
  int v2; // r8d
  __int64 v15; // rax

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
      *a2 = v2 | 0x80;
      return;
    }
    if ( !HviIsAnyHypervisorPresent() )
    {
      switch ( *(_BYTE *)(a1 + 1520) )
      {
        case 0x15:
          v15 = 0x40000000000000LL;
          break;
        case 0x16:
          v15 = 0x200000000LL;
          break;
        case 0x17:
          KiSsbdBit = 1024LL;
          goto LABEL_15;
        default:
          return;
      }
      KiSsbdBit = v15;
LABEL_15:
      *a2 |= 0x80u;
      KiSsbdMsr = -1073672160;
    }
  }
}

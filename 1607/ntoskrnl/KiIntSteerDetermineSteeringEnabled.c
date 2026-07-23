/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140792718
 * Callers:
 *     KiIntSteerInit @ 0x14079266C (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

bool KiIntSteerDetermineSteeringEnabled()
{
  char v0; // r8

  if ( !KiInterruptSteeringDisabled
    && (unsigned __int16)KiActiveGroups <= 1u
    && KeQueryActiveProcessorCountEx(0) >= 2
    && !(_BYTE)dword_1403A9160 )
  {
    v0 = byte_1402F4F8C;
    if ( byte_1402F4F8C == -1 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      v0 = 0;
      if ( (int)_RCX < 0 )
      {
        _RAX = 1073741825LL;
        __asm { cpuid }
        v0 = (_DWORD)_RAX == 1986945624;
      }
      byte_1402F4F8C = v0;
    }
    if ( !v0 )
    {
      if ( HvlHypervisorConnected )
      {
        if ( (HvlpFlags & 2) != 0 )
          return KeQueryActiveProcessorCountEx(0) <= 0x10;
      }
      else if ( !HviIsAnyHypervisorPresent() )
      {
        return KeQueryActiveProcessorCountEx(0) <= 0x10;
      }
    }
  }
  return 0;
}

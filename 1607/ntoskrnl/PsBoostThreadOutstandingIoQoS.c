/*
 * XREFs of PsBoostThreadOutstandingIoQoS @ 0x14020EE94
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

void __fastcall PsBoostThreadOutstandingIoQoS(__int64 a1)
{
  unsigned __int64 ExtensionTable; // rax

  if ( *(_DWORD *)(a1 + 1792) )
  {
    ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
    if ( ExtensionTable )
    {
      (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a1);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
    }
  }
}

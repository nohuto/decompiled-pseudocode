/*
 * XREFs of ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024056C
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023CD74 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FED4 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024050C (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __fastcall InteractiveControlParser::FreeDeviceCapabilities(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  if ( a1 )
  {
    InteractiveControlParser::FreeComponentInformation(a1, a2, a3);
    v4 = *((_QWORD *)a1 + 21);
    if ( v4 )
    {
      RawInputManagerDeviceObjectDereference(v4);
      *((_QWORD *)a1 + 21) = 0LL;
    }
    memset(a1, 0, 0xB0uLL);
  }
}

/*
 * XREFs of ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024050C
 * Callers:
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FAFC (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LIN.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C024056C (-FreeDeviceCapabilities@InteractiveControlParser@@SAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlParser::FreeComponentInformation(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 **v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax

  if ( *((_DWORD *)a1 + 26) )
  {
    v4 = (__int64 **)((char *)a1 + 112);
    while ( *v4 != (__int64 *)v4 )
    {
      v5 = *v4;
      v6 = **v4;
      if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
        __fastfail(3u);
      *v4 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v4;
      Win32FreePool(v5, a2, a3);
      --*((_DWORD *)a1 + 26);
    }
  }
  memset((char *)a1 + 68, 0, 0x24uLL);
}

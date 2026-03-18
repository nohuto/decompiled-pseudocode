/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00F15DC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006CF60 (UpdateWindowMonitor.c)
 *     WindowHasShadow @ 0x1C00F15B4 (WindowHasShadow.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C02242A0 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C0224370 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C02243D4 (zzzMoveShadow.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  for ( result = gpshadowFirst;
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}

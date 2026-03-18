/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0081990
 * Callers:
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     WindowHasShadow @ 0x1C0081968 (WindowHasShadow.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C0223A60 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C0223B30 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C0223B94 (zzzMoveShadow.c)
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

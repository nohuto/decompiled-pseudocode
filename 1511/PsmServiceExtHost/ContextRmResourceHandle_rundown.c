/*
 * XREFs of ContextRmResourceHandle_rundown @ 0x180036FF0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ContextRmResourceHandle_rundown(__int64 a1)
{
  return ((__int64 (__fastcall *)(struct IUnknown *, __int64))g_pResourceManager->lpVtbl[7].Release)(
           g_pResourceManager,
           a1);
}

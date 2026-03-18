/*
 * XREFs of ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C28D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CMILFactory::QueryInterface((CMILCOMBase *)(a1 - 432), a2, a3);
}

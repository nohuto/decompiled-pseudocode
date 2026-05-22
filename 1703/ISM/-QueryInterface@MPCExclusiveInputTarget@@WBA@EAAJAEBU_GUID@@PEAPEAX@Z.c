/*
 * XREFs of ?QueryInterface@MPCExclusiveInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCExclusiveInputTarget::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3,
        const char *a4)
{
  return MPCExclusiveInputTarget::QueryInterface((MPCExclusiveInputTarget *)(a1 - 16), a2, a3, a4);
}

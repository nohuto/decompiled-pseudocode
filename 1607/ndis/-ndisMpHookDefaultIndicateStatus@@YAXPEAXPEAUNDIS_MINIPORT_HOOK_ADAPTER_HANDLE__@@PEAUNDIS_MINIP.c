/*
 * XREFs of ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0019F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisMpHookDefaultIndicateStatus(
        void *a1,
        struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *a2,
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a3,
        struct _NDIS_STATUS_INDICATION *a4)
{
  ndisMRawIndicateStatusEx(a3, a4);
}

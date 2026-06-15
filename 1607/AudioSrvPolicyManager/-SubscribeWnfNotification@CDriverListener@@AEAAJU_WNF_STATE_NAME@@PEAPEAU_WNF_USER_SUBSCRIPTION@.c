/*
 * XREFs of ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x18002325C
 * Callers:
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800230C4 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     Template_dsdp @ 0x180022E10 (Template_dsdp.c)
 */

__int64 __fastcall CDriverListener::SubscribeWnfNotification(
        CDriverListener *this,
        struct _WNF_STATE_NAME a2,
        struct _WNF_USER_SUBSCRIPTION **a3,
        int (*a4)(struct _WNF_STATE_NAME, unsigned int, struct _WNF_TYPE_ID *, void *, const void *, unsigned int))
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
         a3,
         a2,
         0LL,
         a4,
         this,
         0LL,
         0,
         0);
  v8 = v6 | 0x10000000;
  if ( v6 < 0 )
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    {
      LODWORD(v10) = 55;
      Template_dsdp(v7, &EUVolumePolicy_Error_Propagation, v8, "CDriverListener::SubscribeWnfNotification", v10, this);
    }
    return v8;
  }
  return v4;
}

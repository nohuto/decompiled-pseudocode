/*
 * XREFs of ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x180031244
 * Callers:
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800311A8 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     Template_dsdp @ 0x1800AAD10 (Template_dsdp.c)
 */

__int64 __fastcall CDriverListener::SubscribeWnfNotification(
        CDriverListener *this,
        struct _WNF_STATE_NAME a2,
        struct _WNF_USER_SUBSCRIPTION **a3,
        int (*a4)(struct _WNF_STATE_NAME, unsigned int, struct _WNF_TYPE_ID *, void *, const void *, unsigned int))
{
  unsigned int v4; // ebx
  char v5; // si
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edi

  v4 = 0;
  v5 = (char)this;
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
      Template_dsdp(
        v7,
        (unsigned int)&EUVolumePolicy_Error_Propagation,
        v8,
        (unsigned int)"CDriverListener::SubscribeWnfNotification",
        55,
        v5);
    return v8;
  }
  return v4;
}

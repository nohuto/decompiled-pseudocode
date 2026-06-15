/*
 * XREFs of ?OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006F770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CVolumeSoftware::OnPersistState(
        struct _TP_CALLBACK_INSTANCE *a1,
        CVolumeSoftware *a2,
        struct _TP_TIMER *a3)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x4000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x4Cu,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      a2);
  }
  CVolumeSoftware::PersistVolumeState(a2);
}

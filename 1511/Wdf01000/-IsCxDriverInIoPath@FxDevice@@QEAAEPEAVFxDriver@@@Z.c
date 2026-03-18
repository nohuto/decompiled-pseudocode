/*
 * XREFs of ?IsCxDriverInIoPath@FxDevice@@QEAAEPEAVFxDriver@@@Z @ 0x1C006440C
 * Callers:
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C001ABE0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00B9360 (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDevice::IsCxDriverInIoPath(FxDevice *this, FxDriver *CxDriver)
{
  _LIST_ENTRY *i; // rax

  for ( i = this->m_CxDeviceInfoListHead.Flink; i != &this->m_CxDeviceInfoListHead; i = i->Flink )
  {
    if ( (FxDriver *)i[1].Flink == CxDriver )
      return i != 0LL;
  }
  i = 0LL;
  return i != 0LL;
}

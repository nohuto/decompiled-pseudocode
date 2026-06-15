/*
 * XREFs of ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x18006D090
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CMeterHardware::ProviderFinalRelease(CMeterHardware *this)
{
  __int64 v2; // rdi

  ATL::CComPtrBase<IPart>::Release((__int64 *)this + 5);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

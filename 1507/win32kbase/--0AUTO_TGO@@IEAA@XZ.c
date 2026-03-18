/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x1C001CA34
 * Callers:
 *     _DrvChangeDisplaySettings_::_4_::_AUTO_KM::_AUTO_KM @ 0x1C001BD2C (_DrvChangeDisplaySettings_--_4_--_AUTO_KM--_AUTO_KM.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::AUTO_TGO(AUTO_TGO *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // rax

  *(_QWORD *)this = &AUTO_TGO::`vftable';
  v2 = PushThreadGuardedObject((char *)this + 16, this, AUTO_TGO::_DisposeThis);
  *((_DWORD *)this + 2) = v2;
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v5);
  }
  return this;
}

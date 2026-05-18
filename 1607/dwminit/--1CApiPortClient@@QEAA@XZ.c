/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x180004BD4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x180008530 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x180004C24 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x1800053E0 (-ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  const struct reg_FeatureDescriptor *v2; // rcx
  CApiPortClient *v3; // rcx

  EnterCriticalSection(&CriticalSection);
  CApiPortClient::Disconnect(v1);
  if ( !EvaluateCurrentState(v2) )
    CApiPortClient::ReleaseExtraDataSection(v3);
  byte_18000D778 = 1;
  LeaveCriticalSection(&CriticalSection);
  DeleteCriticalSection(&CriticalSection);
}

/*
 * XREFs of ??1?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@XZ @ 0x18006802C
 * Callers:
 *     _CPolicyConfig::GetApplicationDefaultEndpoint_::_1_::dtor$0 @ 0x180046F80 (_CPolicyConfig--GetApplicationDefaultEndpoint_--_1_--dtor$0.c)
 *     _CPolicyConfig::SetApplicationDefaultEndpoint_::_1_::dtor$0 @ 0x180088240 (_CPolicyConfig--SetApplicationDefaultEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)a1);
    *(_BYTE *)(a1 + 8) = 0;
  }
}

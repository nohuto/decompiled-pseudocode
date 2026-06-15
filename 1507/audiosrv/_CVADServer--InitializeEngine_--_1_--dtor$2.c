/*
 * XREFs of _CVADServer::InitializeEngine_::_1_::dtor$2 @ 0x18008B407
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::InitializeEngine_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(
           (__int64 *)(a2 + 112),
           (volatile int *)a2);
}

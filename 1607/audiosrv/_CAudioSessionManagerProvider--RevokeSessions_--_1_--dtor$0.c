/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor$0 @ 0x18006425D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CInterfaceArray<CAudioSessionManager,&_GUID const IID_IUnknown>::~CInterfaceArray<CAudioSessionManager,&_GUID const IID_IUnknown>(a2 + 96);
}

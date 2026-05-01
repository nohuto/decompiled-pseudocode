/*
 * XREFs of ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180014840
 * Callers:
 *     ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180013C20 (-ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180014920 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall ResourceSetClientProxy::ReleaseCallback(ResourceSetClientProxy *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( *((_QWORD *)this + 5) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}

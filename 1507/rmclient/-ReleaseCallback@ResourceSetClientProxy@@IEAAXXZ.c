/*
 * XREFs of ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180013AF0
 * Callers:
 *     ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180012EF0 (-ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180013BD0 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall ResourceSetClientProxy::ReleaseCallback(ResourceSetClientProxy *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( *((_QWORD *)this + 5) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}

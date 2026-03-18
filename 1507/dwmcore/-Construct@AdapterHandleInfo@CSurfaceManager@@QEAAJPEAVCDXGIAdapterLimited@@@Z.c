/*
 * XREFs of ?Construct@AdapterHandleInfo@CSurfaceManager@@QEAAJPEAVCDXGIAdapterLimited@@@Z @ 0x18008A1F0
 * Callers:
 *     ?EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ @ 0x180087BF0 (-EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSurfaceManager::AdapterHandleInfo::Construct(
        CSurfaceManager::AdapterHandleInfo *this,
        struct CDXGIAdapterLimited *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, CSurfaceManager::AdapterHandleInfo *))a2 + 3))(
         *((_QWORD *)a2 + 3),
         &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
         this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x237u);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, (char *)this + 8);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x239u);
  }
  return v4;
}

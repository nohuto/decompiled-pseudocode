/*
 * XREFs of ?GetPrimaryYUVBitmapRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@AEBAPEAVCDxHandleYUVBitmapRealization@@XZ @ 0x180151F6C
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct CDxHandleYUVBitmapRealization *__fastcall CCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVBitmapRealizationNoRef(
        CCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( *((_DWORD *)this + 14) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 4);
    v4 = 0LL;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2)(*v2, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v4) >= 0 )
    {
      if ( v4 )
        v1 = v4 - 416;
      (*(void (**)(void))(*(_QWORD *)v4 + 16LL))();
    }
  }
  return (struct CDxHandleYUVBitmapRealization *)v1;
}

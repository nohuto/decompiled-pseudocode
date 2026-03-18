/*
 * XREFs of ?GetBitmapDeviceInfo@CMagnifierRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAW4StereoContext@@@Z @ 0x1800EC5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::GetBitmapDeviceInfo(
        CMagnifierRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        enum StereoContext *a4)
{
  if ( a4 )
    *(_DWORD *)a4 = *((_DWORD *)this + 8 * *((unsigned int *)this + 138) + 78);
  return (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, struct DisplayId *))(**(_QWORD **)(*((_QWORD *)this + 15)
                                                                                             + 8LL
                                                                                             * *((unsigned int *)this
                                                                                               + 138))
                                                                               + 104LL))(
           *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * *((unsigned int *)this + 138)),
           a2,
           a3);
}

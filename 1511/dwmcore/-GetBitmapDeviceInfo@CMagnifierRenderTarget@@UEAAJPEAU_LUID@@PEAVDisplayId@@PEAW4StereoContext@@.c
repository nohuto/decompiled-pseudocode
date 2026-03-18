/*
 * XREFs of ?GetBitmapDeviceInfo@CMagnifierRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAW4StereoContext@@@Z @ 0x180107FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::GetBitmapDeviceInfo(
        CMagnifierRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        enum StereoContext *a4)
{
  if ( a4 )
    *(_DWORD *)a4 = *((_DWORD *)this + 8 * *((unsigned int *)this + 132) + 72);
  return (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, struct DisplayId *))(**(_QWORD **)(*((_QWORD *)this + 12)
                                                                                             + 8LL
                                                                                             * *((unsigned int *)this
                                                                                               + 132))
                                                                               + 104LL))(
           *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * *((unsigned int *)this + 132)),
           a2,
           a3);
}

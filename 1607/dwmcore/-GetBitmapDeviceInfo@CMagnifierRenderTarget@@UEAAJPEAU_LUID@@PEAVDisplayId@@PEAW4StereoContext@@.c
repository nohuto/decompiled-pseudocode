/*
 * XREFs of ?GetBitmapDeviceInfo@CMagnifierRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAW4StereoContext@@@Z @ 0x18011EB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::GetBitmapDeviceInfo(
        CMagnifierRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        enum StereoContext *a4)
{
  __int64 v4; // rcx

  if ( a4 )
    *(_DWORD *)a4 = *((_DWORD *)this + 8 * *((unsigned int *)this + 132) + 72);
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * *((unsigned int *)this + 132));
  return (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct DisplayId *, _QWORD))(*(_QWORD *)v4 + 104LL))(
           v4,
           a2,
           a3,
           0LL);
}

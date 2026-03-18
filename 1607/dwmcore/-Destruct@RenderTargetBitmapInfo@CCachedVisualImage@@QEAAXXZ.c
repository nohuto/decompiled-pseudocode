/*
 * XREFs of ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180034114
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18003366C (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180033738 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180033798 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Destruct(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(_QWORD *)this ? *(_QWORD *)this + 128LL : 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, v3);
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
}

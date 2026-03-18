/*
 * XREFs of ?IsHardwareProtected@CCachedVisualImage@@UEBA_NXZ @ 0x180144020
 * Callers:
 *     ?IsHardwareProtected@CCachedVisualImage@@WIA@EBA_NXZ @ 0x1800C0650 (-IsHardwareProtected@CCachedVisualImage@@WIA@EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCachedVisualImage::IsHardwareProtected(CCachedVisualImage *this)
{
  int v1; // edi
  char v3; // bl
  __int64 v4; // rcx

  v1 = *((_DWORD *)this + 62);
  v3 = 0;
  while ( v1 > 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 28) + 48LL * (unsigned int)(v1 - 1) + 8) + 112LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4) )
      return 1;
    --v1;
  }
  return v3;
}

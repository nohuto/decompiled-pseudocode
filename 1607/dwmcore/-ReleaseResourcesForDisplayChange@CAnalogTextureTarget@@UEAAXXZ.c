/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ @ 0x1801665F0
 * Callers:
 *     ?DetachFromChannel@CAnalogTextureTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180166140 (-DetachFromChannel@CAnalogTextureTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogTextureTarget::ReleaseResourcesForDisplayChange(CAnalogTextureTarget *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  CAnalogTextureTarget::ReleaseResources((CAnalogTextureTarget *)((char *)this - 112));
}

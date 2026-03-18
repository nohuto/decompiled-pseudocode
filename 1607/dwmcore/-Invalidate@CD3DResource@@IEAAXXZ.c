/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x18009EEE8
 * Callers:
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180016E1C (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x180017DB0 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  int v2; // edi
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  if ( *((_BYTE *)this + 77) )
  {
    v2 = *((_DWORD *)this + 26);
    *((_BYTE *)this + 77) = 0;
    while ( v2 > 0 )
    {
      v3 = *(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 10) + 8LL * (unsigned int)(v2 - 1));
      (**v3)(v3, (char *)this + 24);
      --v2;
    }
  }
}

/*
 * XREFs of ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18018ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::UpdateAttributes(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 472) && HasAlphaChannel(*((_DWORD *)this + 112)) )
  {
    if ( *v4 != *((_DWORD *)this + 32) )
    {
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
      v5 = *((_QWORD *)this + 60);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        *((_QWORD *)this + 60) = 0LL;
      }
    }
    *((_BYTE *)this + 472) = 0;
  }
  CBitmapRealization::UpdateAttributes((struct _LUID *)this, a2);
}

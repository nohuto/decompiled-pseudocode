/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1800812B0
 * Callers:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 v2; // rcx
  __int64 i; // rdi
  CMILPoolResource *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
    {
      v4 = *(CMILPoolResource **)(*((_QWORD *)this + 25) + 8 * i);
      if ( v4 )
      {
        CMILPoolResource::Release(v4);
        *(_QWORD *)(*((_QWORD *)this + 25) + 8 * i) = 0LL;
      }
    }
  }
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 28) = 0LL;
  }
  v7 = *((_QWORD *)this + 29);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 29) = 0LL;
  }
  v8 = *((_QWORD *)this + 27);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 27) = 0LL;
  }
  CD3DTexture::ReleaseD2DBitmaps(this);
}

/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x180084A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  CMILPoolResource *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v1 = *((_QWORD *)this + 16);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 16));
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
  v7 = *((_QWORD *)this + 27);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
  CD3DTexture::ReleaseD2DBitmaps(this);
}

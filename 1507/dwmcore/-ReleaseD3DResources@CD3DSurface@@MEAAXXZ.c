/*
 * XREFs of ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x180014F00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DSurface::ReleaseD3DResources(CD3DSurface *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 28));
    *((_QWORD *)this + 28) = 0LL;
  }
}

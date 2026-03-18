/*
 * XREFs of ??1CMesh2DEffect@@MEAA@XZ @ 0x18015AE44
 * Callers:
 *     ??_GCMesh2DEffect@@MEAAPEAXI@Z @ 0x18015AF20 (--_GCMesh2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMesh2DEffect::~CMesh2DEffect(CMesh2DEffect *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = *((_QWORD *)this + 17);
  *(_QWORD *)this = &CMesh2DEffect::`vftable'{for `ID2D1EffectImpl'};
  *((_QWORD *)this + 1) = &CMesh2DEffect::`vftable'{for `ID2D1DrawTransform'};
  *((_QWORD *)this + 2) = &CMesh2DEffect::`vftable'{for `CMILRefCountBase'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 16));
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 22));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 21));
  *((_QWORD *)this + 2) = &CMILRefCountBase::`vftable';
}

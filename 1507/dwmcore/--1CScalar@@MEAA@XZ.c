/*
 * XREFs of ??1CScalar@@MEAA@XZ @ 0x180107AC8
 * Callers:
 *     ??_ECScalar@@MEAAPEAXI@Z @ 0x1800F9580 (--_ECScalar@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180107C10 (-UpdateAnimateValues@CScalar@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 */

void __fastcall CScalar::~CScalar(CScalar *this)
{
  CScalar *v2; // rcx
  bool v3; // zf
  unsigned int i; // ebp

  *(_QWORD *)this = &CScalar::`vftable'{for `CResource'};
  v2 = (CScalar *)((char *)this + 40);
  v3 = *((_BYTE *)this + 80) == 0;
  *(_QWORD *)v2 = &CScalar::`vftable'{for `IAnimationResource'};
  if ( !v3 )
    CScalar::UpdateAnimateValues(v2, 0LL);
  for ( i = 0; i < *((_DWORD *)this + 18); ++i )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 16LL * i) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL * i));
  *((_DWORD *)this + 18) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 6, 0x10u);
  CBaseAnimation::~CBaseAnimation(this);
}

/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x180084F44
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800850E0 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180003C90 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180083E88 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  __int64 v4; // rbx
  unsigned int (__fastcall *v5)(CVisualTree *); // rdi
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // r9
  __int64 v11; // rdi
  unsigned int v12; // ebp

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 40);
  v3 = (*((_BYTE *)this + 96) & 2) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 11) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 13) && *((_DWORD *)this + 18) )
    CAnimation::UpdateAnimateValues(v2, 0LL);
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = *(unsigned int (__fastcall **)(CVisualTree *))(*(_QWORD *)v4 + 8LL);
    if ( v5 == CVisualTree::Release )
      CVisualTree::Release(*((CVisualTree **)this + 13));
    else
      v5(*((CVisualTree **)this + 13));
  }
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 27));
  CAnimation::EndAnimation(this);
  if ( (*((_BYTE *)this + 96) & 2) != 0 && *((_DWORD *)this + 18) )
  {
    v12 = 0;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 16LL * v12) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL * v12));
      ++v12;
    }
    while ( v12 < *((_DWORD *)this + 18) );
    *((_DWORD *)this + 18) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 6, 0x10u);
  }
  v7 = *((_QWORD *)this + 16);
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 + 64);
    v9 = 0LL;
    for ( i = *(_QWORD *)(v7 + 40); (unsigned int)v9 < (unsigned int)v8; v9 = (unsigned int)(v9 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v9) )
        break;
    }
    if ( (unsigned int)v9 < (unsigned int)v8 )
    {
      if ( (unsigned int)v9 < (int)v8 - 1 )
      {
        do
        {
          v8 = (unsigned int)(v9 + 1);
          *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8 * v8);
          v9 = v8;
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v7 + 64) - 1 );
      }
      --*(_DWORD *)(v7 + 64);
    }
    v11 = *((_QWORD *)this + 16);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)v11 + 16LL))(
        *((_QWORD *)this + 16),
        v8,
        v7,
        i);
  }
  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 14));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 17);
  CBaseAnimation::~CBaseAnimation(this);
}

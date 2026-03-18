/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x18003A788
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x18003A910 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180038B80 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180039BB8 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  CVisualTree *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // r9
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 112);
  v3 = (*((_BYTE *)this + 176) & 2) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 21) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 23) && *((_DWORD *)this + 36) )
    CAnimation::UpdateAnimateValues(v2, 0LL);
  v4 = (CVisualTree *)*((_QWORD *)this + 23);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CVisualTree::Release )
      CVisualTree::Release(v4);
    else
      v5();
  }
  v6 = *((_QWORD *)this + 37);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CAnimation::EndAnimation(this);
  if ( (*((_BYTE *)this + 176) & 2) != 0 && *((_DWORD *)this + 36) )
  {
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 15) + 16LL * v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      ++v13;
    }
    while ( v13 < *((_DWORD *)this + 36) );
    *((_DWORD *)this + 36) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 16LL);
  }
  v7 = *((_QWORD *)this + 26);
  if ( v7 )
  {
    v9 = *(unsigned int *)(v7 + 136);
    v10 = 0LL;
    for ( i = *(_QWORD *)(v7 + 112); (unsigned int)v10 < (unsigned int)v9; v10 = (unsigned int)(v10 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v10) )
        break;
    }
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      if ( (unsigned int)v10 < (int)v9 - 1 )
      {
        do
        {
          v9 = (unsigned int)(v10 + 1);
          *(_QWORD *)(i + 8 * v10) = *(_QWORD *)(i + 8 * v9);
          v10 = v9;
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v7 + 136) - 1 );
      }
      --*(_DWORD *)(v7 + 136);
    }
    v12 = *((_QWORD *)this + 26);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v9, v7, i);
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 216, v8, v7);
  CBaseAnimation::~CBaseAnimation(this);
}

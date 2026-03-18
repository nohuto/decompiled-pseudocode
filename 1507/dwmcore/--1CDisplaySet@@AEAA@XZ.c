/*
 * XREFs of ??1CDisplaySet@@AEAA@XZ @ 0x180055400
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180022F20 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplaySet::~CDisplaySet(CDisplaySet *this)
{
  _QWORD *v2; // r14
  __int64 v3; // rbp
  int v4; // eax
  __int64 i; // rbx
  CMILRefCountBase *v6; // rcx
  HMODULE v7; // rcx
  __int64 v8; // rdi

  v2 = (_QWORD *)((char *)this + 120);
  v3 = 13LL;
  do
  {
    if ( *v2 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = *((_DWORD *)this + 18) - 1;
  for ( i = v4; i >= 0; --i )
  {
    v6 = *(CMILRefCountBase **)(*((_QWORD *)this + 6) + 8 * i);
    if ( v6 )
    {
      CMILRefCountBase::Release(v6);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i) = 0LL;
    }
  }
  v7 = (HMODULE)*((_QWORD *)this + 66);
  if ( v7 )
    FreeLibrary(v7);
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 2));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 6);
}

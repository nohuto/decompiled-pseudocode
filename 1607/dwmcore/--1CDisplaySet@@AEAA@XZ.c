/*
 * XREFs of ??1CDisplaySet@@AEAA@XZ @ 0x180036280
 * Callers:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplaySet::~CDisplaySet(CDisplaySet *this, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 i; // rdi
  __int64 v9; // rcx
  HMODULE v10; // rcx
  __int64 v11; // rcx

  v4 = (__int64 *)((char *)this + 120);
  v5 = 13LL;
  do
  {
    v6 = *v4;
    if ( *v4 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    ++v4;
    --v5;
  }
  while ( v5 );
  v7 = *((_DWORD *)this + 18) - 1;
  for ( i = v7; i >= 0; --i )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i) = 0LL;
    }
  }
  v10 = (HMODULE)*((_QWORD *)this + 66);
  if ( v10 )
    FreeLibrary(v10);
  v11 = *((_QWORD *)this + 2);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 48, v6, a3);
}

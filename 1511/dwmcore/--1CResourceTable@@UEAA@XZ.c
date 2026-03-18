/*
 * XREFs of ??1CResourceTable@@UEAA@XZ @ 0x18009462C
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x1800941F0 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CResourceTable::~CResourceTable(CResourceTable *this)
{
  __int64 **v2; // rdi
  WPF::ProcessHeapImpl *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rsi
  _QWORD *v7; // rax

  *(_QWORD *)this = &CResourceTable::`vftable';
  v2 = (__int64 **)((char *)this + 56);
  while ( *v2 != (__int64 *)v2 )
  {
    v4 = *v2;
    v5 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v2;
    v6 = v4 - 1;
    if ( v6 )
      v7 = v6 + 1;
    else
      v7 = 0LL;
    v6[1] = (__int64)v7;
    v6[2] = (__int64)v7;
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
  }
  v3 = WPF::g_pProcessHeap;
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, *((_QWORD *)this + 5));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}

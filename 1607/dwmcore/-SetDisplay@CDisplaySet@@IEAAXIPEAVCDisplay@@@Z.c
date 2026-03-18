/*
 * XREFs of ?SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z @ 0x180161BE8
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1801617C0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplaySet::SetDisplay(CDisplaySet *this, unsigned int a2, struct CDisplay *a3)
{
  __int64 v4; // rsi
  int v6; // r9d
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // rcx

  v4 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 104LL);
  *((_DWORD *)a3 + 26) = v6;
  v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 112LL);
  *((_DWORD *)a3 + 28) = v7;
  v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 108LL);
  *((_DWORD *)a3 + 27) = v8;
  v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 116LL);
  *((_DWORD *)a3 + 29) = v9;
  if ( *((_BYTE *)a3 + 302) )
  {
    v10 = *(_OWORD *)((char *)a3 + 104);
    *((_BYTE *)a3 + 302) = 1;
    *((_DWORD *)a3 + 28) = v7 - v6;
    *(_OWORD *)((char *)a3 + 120) = v10;
    *((_DWORD *)a3 + 29) = v9 - v8;
    *((_QWORD *)a3 + 13) = 0LL;
  }
  *((_DWORD *)a3 + 22) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 88LL);
  *((_DWORD *)a3 + 24) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 96LL);
  *((_DWORD *)a3 + 23) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 92LL);
  *((_DWORD *)a3 + 25) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 100LL);
  *((_DWORD *)a3 + 73) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 292LL);
  *((_QWORD *)a3 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 24LL);
  *((_BYTE *)a3 + 300) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 300LL);
  *((_BYTE *)a3 + 299) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) + 299LL);
  *((_QWORD *)a3 + 17) = 0LL;
  *((_BYTE *)a3 + 301) = 1;
  *((_QWORD *)a3 + 2) = this;
  v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) = a3;
  (**(void (__fastcall ***)(struct CDisplay *))a3)(a3);
}

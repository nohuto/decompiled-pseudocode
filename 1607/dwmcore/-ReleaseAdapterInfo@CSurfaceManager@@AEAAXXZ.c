/*
 * XREFs of ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800371B8
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180037078 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180037258 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18011B6BC (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSurfaceManager::ReleaseAdapterInfo(CSurfaceManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 65);
    if ( *(_QWORD *)(v3 + 40 * i + 16) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 40 * i + 8) + 32LL))(*(_QWORD *)(v3 + 40 * i + 8));
    v4 = *(_QWORD *)(v3 + 40 * i + 8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 136) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 520, 40LL);
  *((_BYTE *)this + 632) = 0;
}

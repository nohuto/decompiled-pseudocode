/*
 * XREFs of ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D3BE4
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B9A60 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C02D358C (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C02D36F0 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NSInstrumentation::CPointerHashTable::Enumerate(
        NSInstrumentation::CPointerHashTable *this,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( *((_DWORD *)this + 12) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *((_QWORD *)this + 4);
      v9 = *(_QWORD *)(v8 + 16LL * v7);
      if ( v9 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a2)(v9, *(_QWORD *)(v8 + 16LL * v7 + 8), a3);
        ++v6;
      }
      ++v7;
    }
    while ( v6 < *((_DWORD *)this + 12) );
  }
}

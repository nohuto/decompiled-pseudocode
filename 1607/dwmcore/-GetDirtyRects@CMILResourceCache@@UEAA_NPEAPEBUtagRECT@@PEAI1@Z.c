/*
 * XREFs of ?GetDirtyRects@CMILResourceCache@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x180187990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CMILResourceCache::GetDirtyRects(
        CMILResourceCache *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  *a2 = (const struct tagRECT *)&unk_1801C82F0;
  *a3 = 0;
  (*(void (__fastcall **)(CMILResourceCache *, unsigned int *))(*(_QWORD *)this + 40LL))(this, a4);
  return 0;
}

/*
 * XREFs of ?UpdateContextColor@CD2DPrimitiveProperties@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18001BF74
 * Callers:
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18001BCB4 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 */

void __fastcall CD2DPrimitiveProperties::UpdateContextColor(
        CD2DPrimitiveProperties *this,
        const struct _D3DCOLORVALUE *a2)
{
  __int64 v3; // rdi
  CD2DContext *v4; // rbx

  v3 = *((_QWORD *)this + 13);
  v4 = *(CD2DContext **)(*((_QWORD *)this + 3) + 24LL);
  CD2DContext::EnsureBeginDraw(v4);
  (*(void (__fastcall **)(_QWORD *, __int64, const struct _D3DCOLORVALUE *))(**((_QWORD **)v4 + 6) + 48LL))(
    *((_QWORD **)v4 + 6),
    v3,
    a2);
}

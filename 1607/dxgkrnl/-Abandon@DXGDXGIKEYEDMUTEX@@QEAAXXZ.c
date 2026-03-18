/*
 * XREFs of ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B064
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C017AF78 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C018184C (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::Abandon(DXGDXGIKEYEDMUTEX *this)
{
  DXGGLOBAL *v2; // rcx

  DXGGLOBAL::GetGlobal((__int64)this);
  DXGGLOBAL::AbandonKeyedMutex(v2, *(_DWORD *)this);
}

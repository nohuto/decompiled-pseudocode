/*
 * XREFs of ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01522E4
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01521F8 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0157BF8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::Abandon(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *v5; // rcx

  DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  DXGGLOBAL::AbandonKeyedMutex(v5, *(_DWORD *)this);
}

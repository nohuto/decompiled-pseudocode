/*
 * XREFs of ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018958
 * Callers:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C001ADD4 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C003F160 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C003F304 (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C007EF7C (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CConnection::ReferenceSystemResource(__int64 a1, int a2)
{
  DirectComposition::CResourceMarshaler *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v5; // r9

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL));
  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 152);
  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < v4[19] )
    v3 = *(DirectComposition::CResourceMarshaler **)(v5 * v4[20] + v4[16]);
  DirectComposition::CResourceMarshaler::AddRef(v3);
  DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
}

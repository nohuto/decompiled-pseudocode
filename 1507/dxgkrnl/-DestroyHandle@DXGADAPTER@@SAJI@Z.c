/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C008A9CC (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00A6C00 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00A7870 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C01258F0 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  HMGRTABLE *v7; // r9
  unsigned int v8; // edx
  __int64 v9; // rbx
  int v10; // r8d
  DXGADAPTER *v11; // rbx
  __int64 v13; // rax
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdAssertion(v3, v2, v5, v6);
    *(_QWORD *)(v13 + 24) = 9886LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v14, Current);
  v7 = (struct DXGPROCESS *)((char *)Current + 216);
  v8 = (v1 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 58)
    && (v9 = *(_QWORD *)v7,
        v10 = *(_DWORD *)(*(_QWORD *)v7 + 16LL * v8 + 8),
        ((v1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v7 + 16LL * v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0xF) == 1
    && (v11 = *(DXGADAPTER **)(v9 + 16LL * v8)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v7, v1, 2LL * v8, (__int64)v7);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    DXGADAPTER::ReleaseReference(v11);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
    return 3221225485LL;
  }
}

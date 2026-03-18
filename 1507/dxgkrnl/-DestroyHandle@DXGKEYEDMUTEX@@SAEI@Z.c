/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404
 * Callers:
 *     DxgkCreateKeyedMutex2 @ 0x1C005AF50 (DxgkCreateKeyedMutex2.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005B2E4 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkCreateKeyedMutex @ 0x1C014E300 (DxgkCreateKeyedMutex.c)
 *     DxgkOpenKeyedMutex @ 0x1C014E5B0 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C014E830 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0152974 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  HMGRTABLE *v7; // r9
  unsigned int v8; // edx
  __int64 v9; // rbx
  DXGKEYEDMUTEX *v10; // rbx
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v3, v2, v5, v6);
    *(_QWORD *)(v12 + 24) = 2867LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, Current);
  v7 = (struct DXGPROCESS *)((char *)Current + 216);
  v8 = (a1 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 58)
    && (v9 = *(_QWORD *)v7, ((a1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v7 + 16LL * v8 + 8) & 0x30))
    && (*(_DWORD *)(*(_QWORD *)v7 + 16LL * v8 + 8) & 0xF) != 0
    && (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0xF) == 9
    && (v10 = *(DXGKEYEDMUTEX **)(v9 + 16LL * v8)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v7, a1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    DXGKEYEDMUTEX::ReleaseReference(v10);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
}

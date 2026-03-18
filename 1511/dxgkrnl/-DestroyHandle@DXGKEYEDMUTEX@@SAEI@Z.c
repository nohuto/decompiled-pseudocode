/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274
 * Callers:
 *     DxgkCreateKeyedMutex2 @ 0x1C005BF20 (DxgkCreateKeyedMutex2.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005C154 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     DxgkCreateKeyedMutex @ 0x1C0152030 (DxgkCreateKeyedMutex.c)
 *     DxgkOpenKeyedMutex @ 0x1C0152200 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C01523A0 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0156C14 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(unsigned int a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rbx
  HMGRTABLE *v4; // r9
  unsigned int v5; // edx
  __int64 v6; // rbx
  DXGKEYEDMUTEX *v7; // rbx
  __int64 v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v9 + 24) = 2818LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
  v4 = (struct DXGPROCESS *)((char *)Current + 216);
  v5 = (a1 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)Current + 58)
    && (v6 = *(_QWORD *)v4, ((a1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v4 + 16LL * v5 + 8) & 0x30))
    && (*(_DWORD *)(*(_QWORD *)v4 + 16LL * v5 + 8) & 0xF) != 0
    && (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0xF) == 9
    && (v7 = *(DXGKEYEDMUTEX **)(v6 + 16LL * v5)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v4, a1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    DXGKEYEDMUTEX::ReleaseReference(v7);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}

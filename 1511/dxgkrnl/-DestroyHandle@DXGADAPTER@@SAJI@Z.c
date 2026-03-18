/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00B98D4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0067BB4 (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D060 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D3B0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00B9800 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C012BA90 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(unsigned int a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  char *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  HMGRTABLE *v7; // r10
  unsigned int v8; // edx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v15 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v15 + 24) = 10231LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v4 = (char *)Current + 192;
  v20 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v16 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)Current + 52);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v5, &EventBlockThread, v6, v17);
    }
    ExAcquirePushLockExclusiveEx((char *)Current + 192, 0LL);
  }
  v7 = (struct DXGPROCESS *)((char *)Current + 216);
  *((_QWORD *)Current + 25) = KeGetCurrentThread();
  v8 = (a1 >> 6) & 0xFFFFFF;
  v21 = 2;
  if ( v8 < *((_DWORD *)Current + 58)
    && (v9 = *(_QWORD *)v7,
        v10 = *(_DWORD *)(*(_QWORD *)v7 + 16LL * v8 + 8),
        ((a1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v7 + 16LL * v8 + 8) & 0x30))
    && (v10 & 0x1000) == 0
    && (v10 & 0xF) != 0
    && (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0xF) == 1
    && (v11 = *(_QWORD *)(v9 + 16LL * v8)) != 0 )
  {
    HMGRTABLE::FreeHandle(v7, a1);
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    v13 = _InterlockedDecrement64((volatile signed __int64 *)(v11 + 24));
    if ( !v13 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v11 + 16), (struct DXGADAPTER *)v11);
    if ( v13 < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v18 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v18);
    }
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    return 3221225485LL;
  }
}

/*
 * XREFs of ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00DABD8
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C00DAC50 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(union _SLIST_HEADER *this)
{
  struct _SLIST_ENTRY *v2; // rax
  __int64 v3; // rcx
  struct _SLIST_ENTRY *v4; // rbx
  union _SLIST_HEADER *v5; // rsi
  struct _SLIST_ENTRY *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax

  v2 = (struct _SLIST_ENTRY *)operator new[](0x2290uLL, 0x4B677844u, PagedPool);
  v4 = v2;
  if ( v2 )
  {
    ExpInterlockedPushEntrySList(this + 2, v2);
    v5 = this + 3;
    v6 = v4 + 1;
    v7 = 8LL;
    do
    {
      ExpInterlockedPushEntrySList(v5, v6);
      v6 += 69;
      --v7;
    }
    while ( v7 );
    return 1;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v9 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v9);
    return 0;
  }
}

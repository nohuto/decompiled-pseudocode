/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C008D61C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00D6300 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00D92C0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DA8E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01ACA68 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C008D6CC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        bool a3)
{
  int v3; // edi
  char *v4; // rsi
  _QWORD *v7; // rbx
  struct DMMVIDPNPRESENTPATH *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int result; // eax
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = 0;
  v4 = (char *)a2 + 96;
  if ( a2 == (struct DMMVIDPN *)-96LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = v4 + 24;
  if ( (_QWORD *)*v7 == v7 )
    return v3;
  v8 = (struct DMMVIDPNPRESENTPATH *)(*v7 - 8LL);
  if ( !v8 )
    return v3;
  while ( 1 )
  {
    v10 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)(v4 + 160)) + 48);
    if ( !*(_QWORD *)(v10 + 8) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v14);
    }
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
               this,
               *(struct DXGADAPTER **)(*(_QWORD *)(v10 + 8) + 16LL),
               v8,
               1,
               a3);
    v3 = result;
    if ( result < 0 )
      break;
    v12 = (char *)*((_QWORD *)v8 + 1);
    if ( v12 == v4 + 24 )
      v8 = 0LL;
    else
      v8 = (struct DMMVIDPNPRESENTPATH *)(v12 - 8);
    if ( !v8 )
      return v3;
  }
  return result;
}

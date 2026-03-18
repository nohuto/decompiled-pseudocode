/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0063868
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_ @ 0x1C0062DF0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C017EE60 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C0063918 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        _BOOL8 a3,
        __int64 a4)
{
  int v4; // edi
  char *v5; // rsi
  bool v6; // r14
  _QWORD *v8; // rbx
  struct DMMVIDPNPRESENTPATH *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int result; // eax
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = 0;
  v5 = (char *)a2 + 96;
  v6 = a3;
  if ( a2 == (struct DMMVIDPN *)-96LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, -96LL, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = v5 + 24;
  if ( (_QWORD *)*v8 == v8 )
    return v4;
  v9 = (struct DMMVIDPNPRESENTPATH *)(*v8 - 8LL);
  if ( !v9 )
    return v4;
  while ( 1 )
  {
    v12 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)(v5 + 160)) + 48);
    if ( !*(_QWORD *)(v12 + 8) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
      WdLogEvent5_WdAssertion(v18);
    }
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
               this,
               *(struct DXGADAPTER **)(*(_QWORD *)(v12 + 8) + 16LL),
               v9,
               1,
               v6);
    v4 = result;
    if ( result < 0 )
      break;
    v16 = (char *)*((_QWORD *)v9 + 1);
    if ( v16 == v5 + 24 )
      v9 = 0LL;
    else
      v9 = (struct DMMVIDPNPRESENTPATH *)(v16 - 8);
    if ( !v9 )
      return v4;
  }
  return result;
}

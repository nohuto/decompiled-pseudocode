/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18003BEB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqq @ 0x18011718C (Template_qqq.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  int v4; // eax
  __int64 v7; // rsi
  int v8; // ebx
  unsigned int v9; // r14d
  __int64 v11; // rcx

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 != *((_DWORD *)this + 276) )
    *((_DWORD *)this + 276) = v4;
  v7 = *((_QWORD *)this + 4);
  v8 = 0;
  v9 = 0;
  for ( *(_BYTE *)(v7 + 109) = *((_DWORD *)a4 + 2) != 0; v9 < *(_DWORD *)(v7 + 96); ++v9 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL * v9);
    (*(void (__fastcall **)(__int64, struct CChannelContext *, struct CResourceTable *))(*(_QWORD *)v11 + 168LL))(
      v11,
      a2,
      a3);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v8) = *((_DWORD *)a4 + 2) != 0;
    Template_qqq(
      *((_DWORD *)this + 276) == 1,
      (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH,
      v8,
      *((_DWORD *)this + 276) == 3,
      *((_DWORD *)this + 276) == 1);
  }
  return 0LL;
}

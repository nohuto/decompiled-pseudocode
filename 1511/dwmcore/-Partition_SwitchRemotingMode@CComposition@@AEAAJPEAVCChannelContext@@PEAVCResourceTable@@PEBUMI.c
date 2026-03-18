/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800956D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180101814 (Template_qqq.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  int v4; // eax
  int v5; // r8d

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 != *((_DWORD *)this + 250) )
    *((_DWORD *)this + 250) = v4;
  v5 = 0;
  *(_BYTE *)(*((_QWORD *)this + 4) + 109LL) = *((_DWORD *)a4 + 2) != 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v5) = *((_DWORD *)a4 + 2) != 0;
    Template_qqq(
      *((_DWORD *)this + 250) == 1,
      (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH,
      v5,
      *((_DWORD *)this + 250) == 3,
      *((_DWORD *)this + 250) == 1);
  }
  return 0LL;
}

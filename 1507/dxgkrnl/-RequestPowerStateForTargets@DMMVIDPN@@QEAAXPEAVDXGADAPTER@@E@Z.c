/*
 * XREFs of ?RequestPowerStateForTargets@DMMVIDPN@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00CBB7C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z @ 0x1C001A7D0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z.c)
 */

void __fastcall DMMVIDPN::RequestPowerStateForTargets(DMMVIDPN *this, struct DXGADAPTER *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // edx
  char *v8; // rbx

  v2 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v2 != v2 )
  {
    v4 = *v2 - 8LL;
    if ( v4 )
    {
      v5 = (char *)this + 120;
      do
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 96LL);
        v7 = *(_DWORD *)(v6 + 384);
        if ( v7 != -1 && !*(_BYTE *)(v6 + 388) )
        {
          DXGADAPTER::SetPowerComponentActiveCBInternal(a2, v7, 1u);
          *(_BYTE *)(v6 + 388) = 1;
        }
        v8 = *(char **)(v4 + 8);
        if ( v8 == v5 )
          v4 = 0LL;
        else
          v4 = (__int64)(v8 - 8);
      }
      while ( v4 );
    }
  }
}

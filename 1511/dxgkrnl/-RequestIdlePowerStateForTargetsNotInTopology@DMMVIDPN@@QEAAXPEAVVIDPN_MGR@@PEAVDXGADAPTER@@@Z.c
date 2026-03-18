/*
 * XREFs of ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C0092344
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     DmmAssignEmptyTopologyToActiveVidPn @ 0x1C017992C (DmmAssignEmptyTopologyToActiveVidPn.c)
 * Callees:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z @ 0x1C0002EC8 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DMMVIDPN::RequestIdlePowerStateForTargetsNotInTopology(
        DMMVIDPN *this,
        struct VIDPN_MGR *a2,
        struct DXGADAPTER *a3)
{
  DMMVIDPNTOPOLOGY *v3; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  const struct DMMVIDEOPRESENTTARGET *i; // rdi
  __int64 v8; // r8
  unsigned int v9; // edx

  v3 = (DMMVIDPN *)((char *)this + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 12) + 72LL));
  v5 = (_QWORD *)*((_QWORD *)a2 + 12);
  v6 = v5 + 3;
  if ( (_QWORD *)*v6 != v6 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v6 - 8LL);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v5, i) )
    {
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v3, *((_DWORD *)i + 6)) )
      {
        v9 = *((_DWORD *)i + 96);
        if ( v9 != -1 )
        {
          if ( *((_BYTE *)i + 388) )
          {
            DXGADAPTER::SetPowerComponentIdleCBInternal(a3, v9, v8);
            *((_BYTE *)i + 388) = 0;
          }
        }
      }
    }
  }
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
}

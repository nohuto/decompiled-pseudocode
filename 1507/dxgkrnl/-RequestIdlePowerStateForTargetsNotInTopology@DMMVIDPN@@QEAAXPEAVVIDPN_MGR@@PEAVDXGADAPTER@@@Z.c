/*
 * XREFs of ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C00CBAEC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z @ 0x1C001AB94 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z.c)
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
  unsigned int v8; // edx

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
        v8 = *((_DWORD *)i + 96);
        if ( v8 != -1 )
        {
          if ( *((_BYTE *)i + 388) )
          {
            DXGADAPTER::SetPowerComponentIdleCBInternal(a3, v8);
            *((_BYTE *)i + 388) = 0;
          }
        }
      }
    }
  }
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
}

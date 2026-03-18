/*
 * XREFs of ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C00CBA0C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourcePoweredOff(DMMVIDPN *this, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  DMMVIDPN *v4; // r8

  v2 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v2 == v2 )
    return 0;
  v3 = (_QWORD *)(*v2 - 8LL);
  if ( !v3 )
    return 0;
  while ( *(_DWORD *)(v3[11] + 24LL) != a2 || *(_DWORD *)(*(_QWORD *)(v3[12] + 96LL) + 104LL) != 2 )
  {
    v4 = (DMMVIDPN *)v3[1];
    if ( v4 == (DMMVIDPN *)((char *)this + 120) )
      v3 = 0LL;
    else
      v3 = (_QWORD *)((char *)v4 - 8);
    if ( !v3 )
      return 0;
  }
  return 1;
}

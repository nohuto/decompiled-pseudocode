/*
 * XREFs of ?_FillTargetInfoMonitorsCallback@CCD_TOPOLOGY@@CAJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z @ 0x1C00A2260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback(
        __int64 a1,
        CCD_TOPOLOGY *a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  unsigned int i; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax

  for ( i = 0; ; ++i )
  {
    v11 = *((_QWORD *)a2 + 8);
    v12 = v11 ? *(_WORD *)(v11 + 20) : 0;
    if ( i >= v12 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
    if ( *((_DWORD *)PathDescriptor + 5) == a3 && *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)(a1 + 252) )
    {
      if ( a5 )
        *(_DWORD *)PathDescriptor |= 0x2000000u;
      if ( a6 )
        *(_DWORD *)PathDescriptor |= 0x1000000u;
      switch ( a4 )
      {
        case 1:
          *(_DWORD *)PathDescriptor |= 0x1000000u;
          continue;
        case 2:
          *(_DWORD *)PathDescriptor |= 0x5000000u;
          break;
        case 3:
          goto LABEL_19;
        case 4:
          *(_DWORD *)PathDescriptor |= 0x9000000u;
          break;
        case 5:
LABEL_19:
          *(_DWORD *)PathDescriptor |= 0x11000000u;
          continue;
        default:
          continue;
      }
    }
  }
  return 0LL;
}

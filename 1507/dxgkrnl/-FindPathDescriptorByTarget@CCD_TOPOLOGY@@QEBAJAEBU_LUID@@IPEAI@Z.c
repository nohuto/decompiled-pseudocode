/*
 * XREFs of ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C017D67C
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C018056C (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FindPathDescriptorByTarget(
        CCD_TOPOLOGY *this,
        const struct _LUID *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v5; // ebp
  unsigned int i; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax

  v5 = a3;
  if ( (_DWORD)a3 == -1 )
    return 3223191554LL;
  if ( !*((_QWORD *)this + 8) )
    return 3221225485LL;
  for ( i = 0; ; ++i )
  {
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( i >= v11 )
      return 3221226021LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, (__int64)a4);
    if ( (*(_DWORD *)PathDescriptor & 0x5000) == 0x5000
      && *((_DWORD *)PathDescriptor + 2) == a2->LowPart
      && *((_DWORD *)PathDescriptor + 3) == a2->HighPart
      && *((_DWORD *)PathDescriptor + 5) == v5 )
    {
      break;
    }
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}

/*
 * XREFs of ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A3104
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0009FC0 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3190 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3630 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(CCD_TOPOLOGY *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  int CloneGroupContentResolutionValid; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  int CloneGroupDWMClipBoxValid; // eax
  __int64 v9; // rax

  v2 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    CCD_TOPOLOGY::GetPathDescriptor(this, v2);
    if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v2) )
    {
      CloneGroupContentResolutionValid = CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(this, v3);
      v6 = CloneGroupContentResolutionValid;
      if ( CloneGroupContentResolutionValid < 0 )
        break;
      CloneGroupDWMClipBoxValid = CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(this, v2);
      v6 = CloneGroupDWMClipBoxValid;
      if ( CloneGroupDWMClipBoxValid < 0 )
        break;
    }
    if ( ++v2 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  v9 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v9 + 24) = v2;
  *(_QWORD *)(v9 + 32) = v6;
  WdLogEvent5_WdError(v9);
  return (unsigned int)v6;
}

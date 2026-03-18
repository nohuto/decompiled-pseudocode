/*
 * XREFs of ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008B470
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0006E1C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008B4F0 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008B998 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
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

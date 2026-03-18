/*
 * XREFs of ProcgrpRevertToUserGroupAffinityThread @ 0x1C009EB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcgrpRevertToUserGroupAffinityThread(_GROUP_AFFINITY *PreviousAffinity)
{
  if ( !PreviousAffinity->Reserved[0] && !PreviousAffinity->Reserved[1] && !PreviousAffinity->Reserved[2] )
  {
    if ( PreviousAffinity->Mask )
    {
      if ( !PreviousAffinity->Group )
        PfnKeRevertToUserAffinityThreadEx(PreviousAffinity->Mask);
    }
    else
    {
      KeRevertToUserAffinityThread();
    }
  }
}

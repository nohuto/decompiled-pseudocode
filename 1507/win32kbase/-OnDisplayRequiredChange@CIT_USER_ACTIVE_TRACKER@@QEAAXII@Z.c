/*
 * XREFs of ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C0052834
 * Callers:
 *     CitDisplayRequestChange @ 0x1C000735C (CitDisplayRequestChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00527AC (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C00528B0 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        CIT_USER_ACTIVE_TRACKER *this,
        unsigned int a2,
        int a3)
{
  unsigned int v5; // edx

  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  if ( a3 )
  {
    v5 = 1;
LABEL_6:
    CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), v5);
    goto LABEL_4;
  }
  if ( *(_DWORD *)this && (unsigned int)(dword_1C0101FC0 + *((_DWORD *)this + 1)) < *((_DWORD *)this + 2) )
  {
    v5 = 0;
    goto LABEL_6;
  }
LABEL_4:
  *(_DWORD *)this = a3;
}

/*
 * XREFs of ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0011E84
 * Callers:
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C0011C30 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0011DB0 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0011EB4 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent(CIT_USER_ACTIVE_TRACKER *this, unsigned int a2)
{
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 1u);
  *((_DWORD *)this + 1) = a2;
}

/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x14049C2E4
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = a1 + 92;
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 2, v2) || ExfAcquireRundownProtection(v1) )
    return 0LL;
  else
    return 3221225738LL;
}

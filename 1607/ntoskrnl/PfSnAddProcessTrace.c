/*
 * XREFs of PfSnAddProcessTrace @ 0x140006C18
 * Callers:
 *     PfSnActivateTrace @ 0x140006B70 (PfSnActivateTrace.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x140006D40 (ExAcquireRundownProtectionEx.c)
 */

__int64 __fastcall PfSnAddProcessTrace(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  BOOLEAN v4; // al
  unsigned int v5; // edx

  if ( (*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    return (unsigned int)-1073741791;
  }
  else
  {
    v4 = ExAcquireRundownProtectionEx(a2 + 45, 0x10u);
    v5 = 0;
    if ( v4 )
    {
      if ( a2 )
        *(_QWORD *)(a1 + 1192) = (char *)a2 + 15;
      else
        *(_QWORD *)(a1 + 1192) = 0LL;
    }
    else
    {
      return (unsigned int)-1073741431;
    }
  }
  return v5;
}

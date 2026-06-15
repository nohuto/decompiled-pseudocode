/*
 * XREFs of ?QueryInterface@CMonitorNotification@CMonitor@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180095360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitorNotification::QueryInterface(
        CMonitor::CMonitorNotification *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 5);
      *a3 = this;
    }
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_24918acc_64b3_37c1_8ca9_74a66e9957a8.Data4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 5);
      *a3 = this;
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}

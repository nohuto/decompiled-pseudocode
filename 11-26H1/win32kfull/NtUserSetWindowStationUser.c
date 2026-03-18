/*
 * XREFs of NtUserSetWindowStationUser @ 0x1402BEB90
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetWindowStationUser @ 0x14022EB3C (_SetWindowStationUser.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, __int64 a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // r14
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID Object; // [rsp+28h] [rbp-30h] BYREF
  __int64 ULong64FromUser; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  v4 = a4;
  v8 = 0;
  Object = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  LOBYTE(v9) = 1;
  if ( (int)ValidateHwinsta(a1, v9, 0LL, &Object) >= 0 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    ULong64FromUser = RtlReadULong64FromUser(a2);
    if ( a3 )
    {
      if ( !(_DWORD)v4 )
      {
LABEL_8:
        ObfDereferenceObject(Object);
        goto LABEL_9;
      }
      ProbeForRead(a3, v4, 4u);
    }
    v8 = SetWindowStationUser(Object, &ULong64FromUser, (const void *)a3, v4);
    goto LABEL_8;
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}

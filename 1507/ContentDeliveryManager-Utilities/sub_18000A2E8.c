/*
 * XREFs of sub_18000A2E8 @ 0x18000A2E8
 * Callers:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

char __fastcall sub_18000A2E8(__int64 *a1, char a2)
{
  char v4; // si
  __int64 *v5; // rcx
  __int64 v6; // rax

  AcquireSRWLockExclusive(&SRWLock);
  if ( !a2 && (a1[18] || qword_18003AD68 || dword_18003AC38) )
  {
    v4 = 0;
  }
  else
  {
    v5 = &qword_18003AC18;
    v4 = 1;
    if ( (__int64 *)qword_18003AC18 != a1 )
    {
      do
        v5 = (__int64 *)(*v5 + 16);
      while ( (__int64 *)*v5 != a1 );
    }
    *v5 = a1[2];
    v6 = *a1;
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64 *))(v6 + 16))(a1);
    if ( !qword_18003AC18 && hObject )
    {
      CloseHandle(hObject);
      hObject = 0LL;
    }
  }
  ReleaseSRWLockExclusive(&SRWLock);
  return v4;
}

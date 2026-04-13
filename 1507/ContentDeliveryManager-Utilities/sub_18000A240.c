/*
 * XREFs of sub_18000A240 @ 0x18000A240
 * Callers:
 *     pfnti @ 0x1800092B0 (pfnti.c)
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 * Callees:
 *     sub_1800099E4 @ 0x1800099E4 (sub_1800099E4.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_18000A240(_DWORD *a1)
{
  __int64 v2; // rsi

  if ( (int)sub_1800099E4(*a1, a1[1], a1[2], *((_QWORD *)a1 + 2)) < 0 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( qword_18003AD70 )
      *(_QWORD *)(qword_18003AD70 + 24) = a1;
    else
      qword_18003AD68 = (__int64)a1;
    qword_18003AD70 = (__int64)a1;
    ReleaseSRWLockExclusive(&SRWLock);
  }
  else
  {
    v2 = *((_QWORD *)a1 + 2);
    if ( v2 )
    {
      *((_QWORD *)a1 + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(a1);
  }
}

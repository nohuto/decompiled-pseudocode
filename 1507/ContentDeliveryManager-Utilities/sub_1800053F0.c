/*
 * XREFs of sub_1800053F0 @ 0x1800053F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void *__fastcall sub_1800053F0(void *a1, char a2)
{
  __int64 v4; // rsi

  *(_QWORD *)a1 = off_18002C5F0;
  *((_QWORD *)a1 + 1) = off_18002C438;
  CloseHandle(*((HANDLE *)a1 + 6));
  *((_DWORD *)a1 + 9) = -1073741823;
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 )
  {
    *((_QWORD *)a1 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

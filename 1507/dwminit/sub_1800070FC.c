/*
 * XREFs of sub_1800070FC @ 0x1800070FC
 * Callers:
 *     sub_1800070B8 @ 0x1800070B8 (sub_1800070B8.c)
 * Callees:
 *     sub_180001564 @ 0x180001564 (sub_180001564.c)
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 *     sub_180006E5C @ 0x180006E5C (sub_180006E5C.c)
 *     _XcptFilter @ 0x18000735C (_XcptFilter.c)
 */

__int64 __fastcall sub_1800070FC(HMODULE a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax

  v5 = 1;
  if ( a2 <= 1 )
    dword_18000C010 = a2;
  if ( a2 || dword_18000C690 )
  {
    if ( a2 - 1 > 1 )
      goto LABEL_13;
    if ( qword_18000EFD0 )
    {
      v6 = dword_18000C694;
      if ( a2 == 1 )
        v6 = 1;
      dword_18000C694 = v6;
      v5 = qword_18000EFD0(a1, a2, a3);
    }
    if ( v5 )
    {
      v5 = sub_180006E5C((__int64)a1, a2, a3);
      if ( v5 )
      {
LABEL_13:
        v5 = sub_180001564(a1, a2);
        if ( a2 == 1 && !v5 )
        {
          sub_180001564(a1, 0);
          sub_180006E5C((__int64)a1, 0, 0LL);
          if ( qword_18000EFD0 )
            qword_18000EFD0(a1, 0LL, 0LL);
        }
        if ( !a2 || a2 == 3 )
        {
          v5 = sub_180006E5C((__int64)a1, a2, a3);
          if ( qword_18000EFD0 )
          {
            if ( dword_18000C694 )
              v5 = qword_18000EFD0(a1, a2, a3);
          }
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( a2 <= 1 )
    dword_18000C010 = -1;
  return v5;
}

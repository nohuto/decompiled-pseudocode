/*
 * XREFs of sub_180025DE4 @ 0x180025DE4
 * Callers:
 *     DllEntryPoint @ 0x180025DA0 (DllEntryPoint.c)
 * Callees:
 *     sub_180006984 @ 0x180006984 (sub_180006984.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180025B3C @ 0x180025B3C (sub_180025B3C.c)
 *     _XcptFilter @ 0x1800266AE (_XcptFilter.c)
 */

__int64 __fastcall sub_180025DE4(HMODULE a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax

  v5 = 1;
  if ( a2 <= 1 )
    dword_18003A080 = a2;
  if ( a2 || dword_18003A5EC )
  {
    if ( a2 - 1 > 1 )
      goto LABEL_13;
    if ( qword_18003AE80 )
    {
      v6 = dword_18003A5F0;
      if ( a2 == 1 )
        v6 = 1;
      dword_18003A5F0 = v6;
      v5 = qword_18003AE80(a1, a2, a3);
    }
    if ( v5 )
    {
      v5 = sub_180025B3C((__int64)a1, a2, a3);
      if ( v5 )
      {
LABEL_13:
        v5 = sub_180006984(a1, a2);
        if ( a2 == 1 && !v5 )
        {
          sub_180006984(a1, 0);
          sub_180025B3C((__int64)a1, 0, 0LL);
          if ( qword_18003AE80 )
            qword_18003AE80(a1, 0LL, 0LL);
        }
        if ( !a2 || a2 == 3 )
        {
          v5 = sub_180025B3C((__int64)a1, a2, a3);
          if ( qword_18003AE80 )
          {
            if ( dword_18003A5F0 )
              v5 = qword_18003AE80(a1, a2, a3);
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
    dword_18003A080 = -1;
  return v5;
}

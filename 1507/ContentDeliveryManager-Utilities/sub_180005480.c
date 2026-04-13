/*
 * XREFs of sub_180005480 @ 0x180005480
 * Callers:
 *     sub_180006340 @ 0x180006340 (sub_180006340.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180005480(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // esi
  __int64 v5; // rsi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    if ( *a2 == -1527948159 && a2[1] == 1086158537 && a2[2] == -642652533 && a2[3] == -418729457 )
    {
      *a3 = a1;
    }
    else
    {
      v5 = a1 + 8;
      if ( *a2 != -1796592748 || a2[1] != 1239476684 || a2[2] != 1693384640 || a2[3] != -1873047606 )
      {
        if ( *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
        {
          *a3 = v5;
          v4 = 0;
        }
        else
        {
          v4 = -2147467262;
        }
        if ( v4 < 0 )
          return (unsigned int)v4;
        goto LABEL_24;
      }
      *a3 = v5;
    }
    v4 = 0;
LABEL_24:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}

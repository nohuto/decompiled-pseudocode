/*
 * XREFs of DpiSystemDisplayWrite @ 0x1C00283C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiSystemDisplayWrite(__int64 a1, int *a2, char a3)
{
  int v6; // ecx
  int v7; // r10d
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // ecx

  if ( byte_1C0046F50 )
    return 0LL;
  if ( a3 )
    return 3221225659LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      if ( ((v6 - 1) & 0xFFFFFFFB) == 0 && (v6 != 1 || qword_1C0046F60 == *(_QWORD *)(qword_1C0046E88 + 64)) )
      {
        v7 = *a2;
        if ( *a2 < (unsigned int)dword_1C0046F70 )
        {
          v8 = a2[1];
          if ( v8 < dword_1C0046F74 )
          {
            v9 = *(_DWORD *)(a1 + 4);
            v10 = *(_DWORD *)a1;
            v11 = v9;
            if ( v9 > dword_1C0046F70 - v7 )
              v11 = dword_1C0046F70 - v7;
            if ( v10 > dword_1C0046F74 - v8 )
              v10 = dword_1C0046F74 - v8;
            if ( v6 == 1 )
              v12 = (v9 + 1) >> 1;
            else
              v12 = 4 * v9;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, int, unsigned int))(qword_1C0046F58 + 752))(
              *(_QWORD *)(qword_1C0046F60 + 48),
              *(_QWORD *)(a1 + 16),
              v11,
              v10,
              v12,
              v7,
              v8);
            return 0LL;
          }
        }
      }
    }
  }
  return 3221225485LL;
}

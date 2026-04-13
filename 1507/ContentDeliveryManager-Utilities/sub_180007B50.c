/*
 * XREFs of sub_180007B50 @ 0x180007B50
 * Callers:
 *     sub_1800075A0 @ 0x1800075A0 (sub_1800075A0.c)
 *     sub_180007710 @ 0x180007710 (sub_180007710.c)
 *     sub_180007880 @ 0x180007880 (sub_180007880.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180007B50(signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebp
  unsigned int v3; // edi

  for ( i = a1[3]; i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 3, i - 1, i); i = a1[3] )
    ;
  v2 = i - 1;
  if ( i == 1 )
  {
    v3 = (unsigned int)a1[8] >> 2;
    (*(void (__fastcall **)(signed __int32 *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v3 & 1) != 0 && qword_18003AC80 )
LABEL_11:
      _InterlockedDecrement(&dword_18003AC88);
  }
  else if ( (a1[8] & 4) == 0 && i == 2 )
  {
    goto LABEL_11;
  }
  return v2;
}

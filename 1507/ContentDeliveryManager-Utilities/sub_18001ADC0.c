/*
 * XREFs of sub_18001ADC0 @ 0x18001ADC0
 * Callers:
 *     sub_18001A4C0 @ 0x18001A4C0 (sub_18001A4C0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001E1D4 @ 0x18001E1D4 (sub_18001E1D4.c)
 */

__int64 __fastcall sub_18001ADC0(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  int v5; // esi
  void (__fastcall *v6)(__int64, __int64, __int64, __int128 *, __int64, _DWORD); // rbx
  signed __int32 v7; // ecx
  signed __int32 v9[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  signed __int32 v11; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) == 1 )
  {
    v5 = sub_18001E1D4(a1 + 88);
    if ( v5 >= 0 )
    {
      if ( qword_18003AC90 )
      {
        v6 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, _DWORD))(*(_QWORD *)qword_18003AC90
                                                                                           + 64LL);
        v10 = xmmword_18002C040;
        v6(qword_18003AC90, 2LL, 2LL, &v10, a1, 0);
      }
      if ( a2 )
      {
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
      }
      _InterlockedOr(v9, 0);
      v7 = *(_DWORD *)(a1 + 40);
      v12 = -2;
      _InterlockedCompareExchange(&v12, v7, -2);
      if ( (unsigned int)(v12 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)v5;
}

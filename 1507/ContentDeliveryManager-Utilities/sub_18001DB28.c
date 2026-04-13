/*
 * XREFs of sub_18001DB28 @ 0x18001DB28
 * Callers:
 *     sub_18001A160 @ 0x18001A160 (sub_18001A160.c)
 *     sub_18001D5FC @ 0x18001D5FC (sub_18001D5FC.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

bool __fastcall sub_18001DB28(__int64 a1, signed __int32 a2, signed __int32 a3)
{
  bool v3; // si
  _QWORD *v5; // rsi
  __int64 v6; // r14
  signed __int32 v7; // ecx
  signed __int32 v8; // eax
  void (__fastcall *v9)(__int64, __int64, __int64, __int128 *, __int64, int); // rbx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  signed __int32 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v3 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 44), a2, 0) )
  {
    v5 = (_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    GetRestrictedErrorInfo(v5);
    v7 = *(_DWORD *)(a1 + 40);
    v12 = -2;
    _InterlockedCompareExchange(&v12, v7, -2);
    if ( v12 )
    {
      return 0;
    }
    else
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 3, 0);
      v3 = v8 == v12;
      if ( v8 == v12 && qword_18003AC90 )
      {
        v9 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, int))(*(_QWORD *)qword_18003AC90
                                                                                        + 64LL);
        v11 = xmmword_18002C040;
        v9(qword_18003AC90, 2LL, 2LL, &v11, a1, 4);
      }
    }
  }
  return v3;
}

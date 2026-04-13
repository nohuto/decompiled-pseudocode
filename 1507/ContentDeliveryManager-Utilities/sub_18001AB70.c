/*
 * XREFs of sub_18001AB70 @ 0x18001AB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001E124 @ 0x18001E124 (sub_18001E124.c)
 */

__int64 __fastcall sub_18001AB70(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // esi
  void (__fastcall *v6)(__int64, __int64, __int64, __int128 *, __int64, _DWORD); // rbx
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  signed __int32 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v2, -2);
  if ( v10 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 132)) == 1 )
  {
    v5 = sub_18001E124(a1 + 112);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
    }
    _InterlockedOr(v8, 0);
    if ( qword_18003AC90 )
    {
      v6 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, _DWORD))(*(_QWORD *)qword_18003AC90
                                                                                         + 64LL);
      v9 = xmmword_18002C040;
      v6(qword_18003AC90, 2LL, 2LL, &v9, a1, 0);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return v5;
}

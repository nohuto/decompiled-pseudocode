/*
 * XREFs of sub_18001B640 @ 0x18001B640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001B640(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  void (__fastcall *v4)(__int64, __int64, __int64, __int128 *, volatile signed __int32 *, int); // rbx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  signed __int32 v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 10);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( !v7 )
  {
    v3 = _InterlockedCompareExchange(a1 + 10, 2, 0);
    if ( v3 == v7 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 152LL))(a1);
      if ( qword_18003AC90 )
      {
        v4 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, volatile signed __int32 *, int))(*(_QWORD *)qword_18003AC90 + 64LL);
        v6 = xmmword_18002C040;
        v4(qword_18003AC90, 1LL, 2LL, &v6, a1, 3);
      }
    }
  }
  return 0LL;
}

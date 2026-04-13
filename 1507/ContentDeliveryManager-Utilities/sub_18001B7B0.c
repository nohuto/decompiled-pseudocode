/*
 * XREFs of sub_18001B7B0 @ 0x18001B7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001B7B0(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64, __int64, __int128 *, __int64, _DWORD); // rbx
  signed __int32 v9; // ecx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  signed __int32 v13; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v2, -2);
  if ( v13 == 4 )
  {
    v5 = -2147483634;
    v6 = 2147483662LL;
LABEL_16:
    RoOriginateError(v6, 0LL);
    return v5;
  }
  v5 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) != 1 )
  {
    v6 = 2147483672LL;
    v5 = -2147483624;
    goto LABEL_16;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  if ( *(_QWORD *)(a1 + 16) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  _InterlockedOr(v11, 0);
  if ( qword_18003AC90 )
  {
    v8 = *(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int64, _DWORD))(*(_QWORD *)qword_18003AC90
                                                                                       + 64LL);
    v12 = xmmword_18002C040;
    v8(qword_18003AC90, 2LL, 2LL, &v12, a1, 0);
  }
  v9 = *(_DWORD *)(a1 + 40);
  v14 = -2;
  _InterlockedCompareExchange(&v14, v9, -2);
  if ( (unsigned int)(v14 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v5;
}

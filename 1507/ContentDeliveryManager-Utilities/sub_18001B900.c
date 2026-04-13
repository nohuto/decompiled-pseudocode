/*
 * XREFs of sub_18001B900 @ 0x18001B900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001B900(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  signed __int32 v5; // r8d
  __int64 v6; // r14
  signed __int32 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v5 = *(_DWORD *)(a1 + 40);
  v8 = -2;
  _InterlockedCompareExchange(&v8, v5, -2);
  if ( v8 == 4 )
  {
    v2 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(a1 + 16));
    *a2 = *(_QWORD *)(a1 + 16);
  }
  return v2;
}

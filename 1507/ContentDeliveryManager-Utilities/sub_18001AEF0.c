/*
 * XREFs of sub_18001AEF0 @ 0x18001AEF0
 * Callers:
 *     sub_18001A540 @ 0x18001A540 (sub_18001A540.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001E5B8 @ 0x18001E5B8 (sub_18001E5B8.c)
 */

__int64 __fastcall sub_18001AEF0(__int64 a1, _QWORD *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // r14
  __int64 v8; // rsi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 40);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 104);
    v5 = 0;
    if ( (int)v6 > 0 )
    {
      do
      {
        if ( (_DWORD)v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 104), v6 + 1, v6) )
          break;
        v6 = *(unsigned int *)(a1 + 104);
      }
      while ( (int)v6 > 0 );
      if ( (int)v6 > 0 )
      {
        v7 = (__int64 *)(a1 + 88);
        v5 = sub_18001E5B8(a1 + 88, v6, a2);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 104), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v10, 0);
          v8 = *v7;
          if ( *v7 )
          {
            *v7 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
      }
    }
  }
  return v5;
}

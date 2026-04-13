/*
 * XREFs of sub_18001D5FC @ 0x18001D5FC
 * Callers:
 *     sub_18001A670 @ 0x18001A670 (sub_18001A670.c)
 *     sub_18001D700 @ 0x18001D700 (sub_18001D700.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001AD40 @ 0x18001AD40 (sub_18001AD40.c)
 *     sub_18001DB28 @ 0x18001DB28 (sub_18001DB28.c)
 */

char __fastcall sub_18001D5FC(__int64 a1, __int64 a2)
{
  bool v3; // bl
  signed __int32 v4; // ecx
  char result; // al
  signed __int32 v6; // eax
  void (__fastcall ***v7)(_QWORD, __int64); // rsi
  signed __int32 v8; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 220), 0xFFFFFFFF) == 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 212)) == 1 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 220), 0xFFFFFFFF) == 1;
  v4 = *(_DWORD *)(a1 + 48);
  if ( (int)a2 >= 0 )
  {
    v9 = -2;
    _InterlockedCompareExchange(&v9, v4, -2);
    if ( v9 || (v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0), (result = v6 == v9) == 0) )
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 2);
  }
  else
  {
    v8 = -2;
    result = _InterlockedCompareExchange(&v8, v4, -2);
    if ( v8 != 2 )
      result = sub_18001DB28(a1 + 8, a2);
  }
  if ( v3 )
  {
    v7 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 224);
    if ( v7 )
      (**v7)(*(_QWORD *)(a1 + 224), 1LL);
    *(_QWORD *)(a1 + 224) = 0LL;
    if ( GetCurrentThreadId() != *(_DWORD *)(a1 + 280) )
      dword_18003AC28 = GetCurrentThreadId();
    _InterlockedAdd((volatile signed __int32 *)(a1 + 232), 1u);
    return sub_18001AD40(a1 + 8);
  }
  return result;
}

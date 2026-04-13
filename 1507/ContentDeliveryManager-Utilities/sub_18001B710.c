/*
 * XREFs of sub_18001B710 @ 0x18001B710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001B710(volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  unsigned int v2; // edi
  signed __int32 v4; // ecx
  signed __int32 v5; // ecx
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 10);
  v2 = 0;
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  v4 = v7;
  if ( (unsigned int)(v7 - 1) <= 3 && v4 == _InterlockedCompareExchange(a1 + 10, 4, v7) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 144LL))(a1, 4LL);
  }
  else
  {
    v5 = *((_DWORD *)a1 + 10);
    v8 = -2;
    _InterlockedCompareExchange(&v8, v5, -2);
    if ( v8 != 4 )
    {
      v2 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v2;
}

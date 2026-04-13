/*
 * XREFs of sub_180011DA0 @ 0x180011DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

__int64 __fastcall sub_180011DA0(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  void *v7; // r9
  int v8; // ecx
  __int64 v9; // rbx

  v3 = 0LL;
  v4 = a3;
  while ( v4 > 0 )
  {
    v7 = **(void ***)(a1 + 64);
    if ( v7 )
      v8 = **(_DWORD **)(a1 + 88);
    else
      v8 = 0;
    v9 = v8;
    if ( v8 <= 0 )
    {
      if ( (*(unsigned __int16 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *a2) == 0xFFFF )
        return v3;
      ++a2;
      ++v3;
      --v4;
    }
    else
    {
      if ( v4 < v8 )
        v9 = v4;
      if ( v9 )
        memcpy(v7, a2, 2 * v9);
      a2 += v9;
      v3 += v9;
      v4 -= v9;
      **(_DWORD **)(a1 + 88) -= v9;
      **(_QWORD **)(a1 + 64) += 2LL * (int)v9;
    }
  }
  return v3;
}

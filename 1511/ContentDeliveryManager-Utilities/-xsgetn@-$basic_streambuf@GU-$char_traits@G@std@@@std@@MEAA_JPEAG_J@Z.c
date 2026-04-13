/*
 * XREFs of ?xsgetn@?$basic_streambuf@GU?$char_traits@G@std@@@std@@MEAA_JPEAG_J@Z @ 0x1800122C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

__int64 __fastcall std::basic_streambuf<unsigned short>::xsgetn(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  const void *v7; // rdx
  int v8; // ecx
  __int64 v9; // rbx
  __int16 v10; // ax

  v3 = 0LL;
  v4 = a3;
  while ( v4 > 0 )
  {
    v7 = **(const void ***)(a1 + 56);
    if ( v7 )
      v8 = **(_DWORD **)(a1 + 80);
    else
      v8 = 0;
    v9 = v8;
    if ( v8 <= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
      if ( v10 == -1 )
        return v3;
      *a2 = v10;
      ++v3;
      ++a2;
      --v4;
    }
    else
    {
      if ( v4 < v8 )
        v9 = v4;
      if ( v9 )
        memcpy_0(a2, v7, 2 * v9);
      a2 += v9;
      v3 += v9;
      v4 -= v9;
      **(_DWORD **)(a1 + 80) -= v9;
      **(_QWORD **)(a1 + 56) += 2LL * (int)v9;
    }
  }
  return v3;
}

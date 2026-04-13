/*
 * XREFs of ?xsputn@?$basic_streambuf@GU?$char_traits@G@std@@@std@@MEAA_JPEBG_J@Z @ 0x180025A50
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180058E98 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_streambuf<unsigned short>::xsputn(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
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
        memcpy_0(v7, a2, 2 * v9);
      a2 += v9;
      v3 += v9;
      v4 -= v9;
      **(_DWORD **)(a1 + 88) -= v9;
      **(_QWORD **)(a1 + 64) += 2LL * (int)v9;
    }
  }
  return v3;
}

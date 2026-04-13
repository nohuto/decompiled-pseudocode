/*
 * XREFs of ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x18002FEB8
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18002C594 (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18006A6D0 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

_DWORD *__fastcall std::basic_stringbuf<unsigned short>::_Init(__int64 a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *result; // rax
  signed __int64 v6; // rsi
  void *v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx

  result = (_DWORD *)(*(_DWORD *)(a1 + 112) & 6);
  if ( (*(_BYTE *)(a1 + 112) & 6) != 6 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL || (v6 = 2 * a3, v7 = operator new(2 * a3), (v8 = (__int64)v7) == 0) )
      std::_Xbad_alloc();
    result = memcpy_0(v7, a2, v6);
    v9 = (*(_BYTE *)(a1 + 112) & 4) == 0;
    *(_QWORD *)(a1 + 104) = v6 + v8;
    if ( v9 )
    {
      **(_QWORD **)(a1 + 24) = v8;
      **(_QWORD **)(a1 + 56) = v8;
      result = *(_DWORD **)(a1 + 80);
      *result = v6 >> 1;
    }
    if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    {
      v10 = v8;
      if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
        v10 = v6 + v8;
      **(_QWORD **)(a1 + 32) = v8;
      **(_QWORD **)(a1 + 64) = v10;
      **(_DWORD **)(a1 + 88) = (v8 + v6 - v10) >> 1;
      result = *(_DWORD **)(a1 + 56);
      if ( !*(_QWORD *)result )
      {
        **(_QWORD **)(a1 + 24) = v8;
        **(_QWORD **)(a1 + 56) = 0LL;
        result = *(_DWORD **)(a1 + 80);
        *result = v8 >> 1;
      }
    }
    *(_DWORD *)(a1 + 112) |= 1u;
  }
  return result;
}

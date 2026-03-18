/*
 * XREFs of vGetVerticalGSet @ 0x1C0159978
 * Callers:
 *     bReloadGlyphSet @ 0x1C00AC128 (bReloadGlyphSet.c)
 *     bLoadTTF @ 0x1C01425E4 (bLoadTTF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall vGetVerticalGSet(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rbx
  unsigned __int64 v6; // rsi
  _DWORD *v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rdi

  result = *(_QWORD *)(a2 + 96);
  v5 = (unsigned __int16 *)(result + 16);
  v6 = result + 16 + 16LL * *(unsigned int *)(result + 12);
  while ( (unsigned __int64)v5 < v6 )
  {
    v9 = *v5;
    result = v5[1];
    v10 = *((_QWORD *)v5 + 1);
    if ( v10 )
    {
      v7 = (_DWORD *)(*(_QWORD *)(a2 + 96) + v10 - a1);
      *((_QWORD *)v5 + 1) = v7;
      if ( v9 <= (unsigned int)result + v9 - 1 )
      {
        v8 = (unsigned int)result;
        do
        {
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 8))(a2, (unsigned int)*v7);
          *v7++ = result;
          --v8;
        }
        while ( v8 );
      }
    }
    v5 += 8;
  }
  return result;
}

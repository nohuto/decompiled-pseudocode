/*
 * XREFs of $$f4 @ 0x140253298
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall __f4(__int64 a1, ULONG_PTR a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned int *v10; // r9

  result = *(unsigned int *)(a4 + 8);
  if ( (result & 1) != 0 || (*(_BYTE *)(result + a2) & 0x20) != 0 )
  {
    v7 = a3[2];
    v8 = a3[3];
    if ( a3[4] > v7 )
      v7 = a3[4];
    v9 = v7 + v8;
    v10 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(a1 + 1008))(a4);
    if ( *v10 < v8 || v10[1] >= v9 )
    {
      if ( (*(_DWORD *)(a1 + 1752) & 0x200000) == 0 )
        KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, a2, (unsigned int)((_DWORD)v10 - a2) | 0x80000000LL, 0LL);
      if ( !*(_DWORD *)(a1 + 1616) )
      {
        *(_QWORD *)(a1 + 1640) = 271LL;
        *(_QWORD *)(a1 + 1632) = 0LL;
        *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1648) = a2;
        *(_DWORD *)(a1 + 1616) = 1;
      }
    }
    result = (*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(a1 + 1016))(v10, a2, a2 + *v10);
    if ( *(_DWORD *)result < v8 || *(_DWORD *)(result + 4) >= v9 )
    {
      if ( (*(_DWORD *)(a1 + 1752) & 0x200000) == 0 )
        KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, a2, (unsigned int)(result - a2) | 0x80000000LL, 0LL);
      if ( !*(_DWORD *)(a1 + 1616) )
      {
        *(_QWORD *)(a1 + 1640) = 271LL;
        result = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1648) = a2;
        *(_QWORD *)(a1 + 1632) = 0LL;
        *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
        *(_DWORD *)(a1 + 1616) = 1;
      }
    }
  }
  return result;
}

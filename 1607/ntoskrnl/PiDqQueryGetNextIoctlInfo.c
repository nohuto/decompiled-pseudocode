/*
 * XREFs of PiDqQueryGetNextIoctlInfo @ 0x14048CFA8
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14048ADF8 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14048B94C (PiDqIrpQueryCreate.c)
 *     PiDqQueryCompletePendedIrp @ 0x1404D0BAC (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqQueryGetNextIoctlInfo(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v5; // eax

  if ( !*(_QWORD *)(a1 + 184) && *(_QWORD *)(a1 + 192) == a1 + 192 && (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( (*(_DWORD *)(result + 40) & 1) != 0 )
    {
      *a4 = 4653064;
      a4[1] = 16;
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
    }
  }
  else
  {
    *a4 = 4653063;
    if ( (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 208);
      if ( *(_QWORD *)(a1 + 184) )
        ++v5;
    }
    else
    {
      v5 = 4;
    }
    if ( a3 )
      result = a3 * v5 + 16;
    else
      result = (unsigned int)(v5 << 10);
    a4[1] = result;
    if ( (unsigned int)result > 0x10000 )
      result = 0x10000LL;
    if ( (unsigned int)result < a3 )
      result = a3;
    if ( (unsigned int)result < a2 )
      result = a2;
    a4[1] = result;
  }
  return result;
}

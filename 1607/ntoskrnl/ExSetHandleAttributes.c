/*
 * XREFs of ExSetHandleAttributes @ 0x140074F64
 * Callers:
 *     ObSetHandleAttributes @ 0x14045D5B8 (ObSetHandleAttributes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExSetHandleAttributes(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 result; // rax

  if ( (a3 & 7) != 0 )
  {
    result = *(_QWORD *)a1 & ~((unsigned __int64)(a3 & 7) << 17) | ((unsigned __int64)(a3 & 7) << 17) & ((unsigned __int64)a2 << 17);
    *(_QWORD *)a1 = result;
  }
  if ( (a3 & 8) != 0 )
  {
    if ( (a2 & 8) != 0 )
      *(_DWORD *)(a1 + 8) |= 0x2000000u;
    else
      *(_DWORD *)(a1 + 8) &= ~0x2000000u;
  }
  return result;
}

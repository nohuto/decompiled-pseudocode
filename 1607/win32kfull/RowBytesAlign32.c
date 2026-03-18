/*
 * XREFs of RowBytesAlign32 @ 0x1C001D418
 * Callers:
 *     sbit_GetMetrics @ 0x1C001D128 (sbit_GetMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RowBytesAlign32(unsigned __int16 a1, unsigned __int16 a2, _WORD *a3)
{
  unsigned int v3; // r9d

  v3 = a2 * a1;
  if ( v3 > 0xFFFF || (*a3 = v3, (unsigned __int16)(v3 + 31) < (unsigned __int16)v3) )
  {
    *a3 = -1;
    return 6149LL;
  }
  else
  {
    *a3 = ((unsigned __int16)(v3 + 31) >> 3) & 0x1FFC;
    return 0LL;
  }
}

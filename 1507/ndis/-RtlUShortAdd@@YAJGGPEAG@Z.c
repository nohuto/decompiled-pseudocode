/*
 * XREFs of ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C004AB68
 * Callers:
 *     NdisOpenFile @ 0x1C00CE860 (NdisOpenFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 a1, __int16 a2, unsigned __int16 *a3)
{
  if ( (unsigned __int16)(a2 + a1) < a1 )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = a2 + a1;
    return 0LL;
  }
}

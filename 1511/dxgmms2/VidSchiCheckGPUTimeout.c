/*
 * XREFs of VidSchiCheckGPUTimeout @ 0x1C008A43C
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiCheckNodeTimeout @ 0x1C003A870 (VidSchiCheckNodeTimeout.c)
 */

__int64 __fastcall VidSchiCheckGPUTimeout(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  *a3 = 0LL;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 56) )
    return 0LL;
  while ( !(unsigned int)VidSchiCheckNodeTimeout(*(_QWORD *)(a1 + 8 * v3 + 376), a2) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 56) )
      return 0LL;
  }
  result = 1LL;
  *a3 = *(_QWORD *)(a1 + 8 * v3 + 376);
  return result;
}

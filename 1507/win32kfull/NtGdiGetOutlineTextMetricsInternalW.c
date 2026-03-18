/*
 * XREFs of NtGdiGetOutlineTextMetricsInternalW @ 0x1C0038710
 * Callers:
 *     <none>
 * Callees:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0038848 (GreGetOutlineTextMetricsInternalW.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, unsigned __int64 a4)
{
  size_t v6; // rsi
  void *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int OutlineTextMetricsInternalW; // r15d
  char *v13; // rax

  v6 = (unsigned int)Size;
  v8 = 0LL;
  if ( (_DWORD)Size && a3 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v8 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v8 )
      return 0LL;
    memset(v8, 0, v6);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  OutlineTextMetricsInternalW = GreGetOutlineTextMetricsInternalW(a1, (unsigned int)v6, v8);
  if ( OutlineTextMetricsInternalW == -1 )
    OutlineTextMetricsInternalW = 0;
  if ( OutlineTextMetricsInternalW )
  {
    v9 = W32UserProbeAddress;
    if ( a4 + 8 > W32UserProbeAddress || a4 + 8 <= a4 || (a4 & 3) != 0 )
      *W32UserProbeAddress = 0;
    *(_QWORD *)a4 = 0LL;
    if ( (_DWORD)v6 )
    {
      v13 = &a3[(unsigned int)v6];
      if ( (unsigned __int64)v13 > W32UserProbeAddress || v13 <= a3 || ((unsigned __int8)a3 & 3) != 0 )
        *W32UserProbeAddress = 0;
      memmove(a3, v8, (unsigned int)v6);
    }
  }
  if ( v8 )
    FreeTmpBuffer(v8, v9, v10, v11);
  return OutlineTextMetricsInternalW;
}

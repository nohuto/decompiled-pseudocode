/*
 * XREFs of pppUserModeCallback @ 0x1C011C9F0
 * Callers:
 *     ClientPrinterThunk @ 0x1C011C95C (ClientPrinterThunk.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall pppUserModeCallback(int a1, __int64 a2, __int64 a3, void *a4, int a5)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  void *v9; // rdx
  void *Src; // [rsp+30h] [rbp-18h] BYREF
  size_t Size; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(Size) = a1;
  result = KeUserModeCallback(102LL, a2, a3, &Src, &Size);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = Size;
    if ( (_DWORD)Size != a5 )
      return 3221225473LL;
    if ( !a5 )
      return v7;
    if ( (_DWORD)Size )
    {
      v9 = Src;
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + (unsigned int)Size <= W32UserProbeAddress && (char *)Src + (unsigned int)Size >= Src )
        goto LABEL_13;
      *W32UserProbeAddress = 0;
    }
    else
    {
      *W32UserProbeAddress = 0;
    }
    v9 = Src;
    v8 = Size;
LABEL_13:
    memmove(a4, v9, v8);
    return v7;
  }
  return result;
}

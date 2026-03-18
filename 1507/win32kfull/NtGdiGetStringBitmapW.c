/*
 * XREFs of NtGdiGetStringBitmapW @ 0x1C028BEE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD0C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 */

__int64 __fastcall NtGdiGetStringBitmapW(HDC a1, unsigned __int16 *a2, __int64 a3, __int64 a4, volatile void *Address)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // r15
  struct STRINGBITMAP *v8; // rsi
  unsigned int v9; // edi
  unsigned int StringBitmapW; // eax
  unsigned __int16 v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h]

  v13 = a4;
  v5 = a4;
  v6 = a2;
  v8 = 0LL;
  v9 = 1;
  if ( (_DWORD)a3 != 1 )
    return 0LL;
  if ( (_DWORD)a4 )
  {
    if ( (unsigned int)a4 > 0x2710000 || (v8 = (struct STRINGBITMAP *)AllocFreeTmpBuffer((unsigned int)a4)) == 0LL )
      v9 = 0;
  }
  if ( !v9 )
    goto LABEL_15;
  if ( (unsigned __int64)v6 >= W32UserProbeAddress )
    v6 = (unsigned __int16 *)W32UserProbeAddress;
  v12 = *v6;
  StringBitmapW = GreGetStringBitmapW(a1, &v12, a3, v8, v5);
  v9 = StringBitmapW;
  if ( !StringBitmapW || StringBitmapW > v5 )
    goto LABEL_15;
  if ( v8 )
  {
    ProbeForWrite(Address, StringBitmapW, 1u);
    memmove((void *)Address, v8, v9);
LABEL_15:
    if ( v8 )
      FreeTmpBuffer(v8, a2, a3, a4);
  }
  return v9;
}

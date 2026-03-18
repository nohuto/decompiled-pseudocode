/*
 * XREFs of sfac_CopyFontAndPrePrograms @ 0x1C001D5D0
 * Callers:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall sfac_CopyFontAndPrePrograms(unsigned int *a1, void *a2, void *a3)
{
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  void *Src; // [rsp+58h] [rbp+20h] BYREF

  result = sfac_GetDataPtr((_DWORD)a1, 0, -1, 9, 0, (__int64)&Src);
  if ( !(_DWORD)result )
  {
    v7 = a1[25];
    if ( v7 )
    {
      if ( !Src )
        return 5120LL;
      memmove(a2, Src, v7);
      InvokeReleaseSfntFrag(a1[3]);
    }
    result = sfac_GetDataPtr((_DWORD)a1, 0, -1, 5, 0, (__int64)&Src);
    if ( (_DWORD)result )
      return result;
    v8 = a1[17];
    if ( !v8 )
      return 0LL;
    if ( Src )
    {
      memmove(a3, Src, v8);
      InvokeReleaseSfntFrag(a1[3]);
      return 0LL;
    }
    return 5120LL;
  }
  return result;
}

/*
 * XREFs of MiGetImageBitMapInfo @ 0x14007CAFC
 * Callers:
 *     MiReturnImageBase @ 0x14042DC84 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  int v4; // ecx
  int v5; // ecx
  unsigned __int64 result; // rax

  a2[1] = 0LL;
  v4 = a1 - 1;
  if ( !v4 )
  {
LABEL_15:
    result = (unsigned __int64)&dword_140326770;
    *a2 = &dword_140326770;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (unsigned int)dword_140326768;
      goto LABEL_7;
    }
    return result;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    result = (unsigned __int64)&dword_140326780;
    *a2 = &dword_140326780;
    if ( a3 )
    {
      result = 0x7FFFFFFE0000LL;
      *a3 = 0x7FFFFFFE0000LL;
    }
    if ( a4 )
    {
      result = (unsigned int)dword_14032676C;
LABEL_7:
      *a4 = result;
      return result;
    }
    return result;
  }
  result = (unsigned __int64)&dword_140326758;
  if ( v5 == 1 )
  {
    a2[1] = &dword_140326758;
    goto LABEL_15;
  }
  *a2 = &dword_140326758;
  if ( a3 )
    *a3 = 2013265920LL;
  if ( a4 )
  {
    result = (unsigned int)dword_140326748;
    goto LABEL_7;
  }
  return result;
}

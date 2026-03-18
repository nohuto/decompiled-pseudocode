/*
 * XREFs of sub_1401DC3D0 @ 0x1401DC3D0
 * Callers:
 *     RtlStringCbPrintfExA @ 0x1401DC21C (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall sub_1401DC3D0(_BYTE *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  _BYTE *v9; // rax

  if ( a2 && (a6 & 0x1000) != 0 )
  {
    *a4 = &a1[a3];
    *a5 = a2 - a3;
    a1[a3] = 0;
  }
  if ( (a6 & 0x400) != 0 )
  {
    memset(a1, (unsigned __int8)a6, a2);
    if ( (_BYTE)a6 )
    {
      if ( !a2 )
        return 0LL;
      *a5 = 1LL;
      v9 = &a1[a2 - 1];
      *a4 = v9;
      *v9 = 0;
    }
    else
    {
      *a4 = a1;
      *a5 = a2;
    }
  }
  if ( a2 && (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = a2;
    *a1 = 0;
  }
  return 0LL;
}

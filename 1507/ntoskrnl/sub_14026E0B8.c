/*
 * XREFs of sub_14026E0B8 @ 0x14026E0B8
 * Callers:
 *     RtlStringCchCopyNExW @ 0x1400198F4 (RtlStringCchCopyNExW.c)
 *     RtlStringCbPrintfExW @ 0x14001AFBC (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400CF88C (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x14026DEF8 (StringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall sub_14026E0B8(_WORD *a1, size_t a2, __int64 a3, _QWORD *a4, size_t *a5, __int16 a6)
{
  size_t v7; // rdi
  _WORD *v9; // rax

  v7 = a2 >> 1;
  if ( a2 >> 1 && (a6 & 0x1000) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  if ( (a6 & 0x400) != 0 )
  {
    memset(a1, (unsigned __int8)a6, a2);
    if ( (_BYTE)a6 )
    {
      if ( !v7 )
        return 0LL;
      *a5 = 1LL;
      v9 = &a1[v7 - 1];
      *a4 = v9;
      *v9 = 0;
    }
    else
    {
      *a4 = a1;
      *a5 = v7;
    }
  }
  if ( v7 && (a6 & 0x800) != 0 )
  {
    *a4 = a1;
    *a5 = v7;
    *a1 = 0;
  }
  return 0LL;
}

/*
 * XREFs of sub_140004C0C @ 0x140004C0C
 * Callers:
 *     sub_140001FB0 @ 0x140001FB0 (sub_140001FB0.c)
 *     sub_140004B10 @ 0x140004B10 (sub_140004B10.c)
 *     sub_140004DD8 @ 0x140004DD8 (sub_140004DD8.c)
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 *     sub_140007910 @ 0x140007910 (sub_140007910.c)
 *     sub_140007D9C @ 0x140007D9C (sub_140007D9C.c)
 *     sub_140009540 @ 0x140009540 (sub_140009540.c)
 *     sub_1400099C4 @ 0x1400099C4 (sub_1400099C4.c)
 *     sub_14001059C @ 0x14001059C (sub_14001059C.c)
 *     sub_140010720 @ 0x140010720 (sub_140010720.c)
 *     sub_1400117BC @ 0x1400117BC (sub_1400117BC.c)
 * Callees:
 *     <none>
 */

__int64 sub_140004C0C(wchar_t *DstBuf, unsigned __int64 a2, const wchar_t *a3, ...)
{
  size_t v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *DstBuf = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf_s(DstBuf, v3, v3 - 1, a3, va);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      DstBuf[v6] = 0;
      return (unsigned int)v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      DstBuf[v6] = 0;
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v5;
}

/*
 * XREFs of sub_140257090 @ 0x140257090
 * Callers:
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140256FEC (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140257090(unsigned __int16 *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int16 v3; // r10
  unsigned int v4; // r9d
  unsigned __int16 v5; // ax
  __int64 v6; // rcx

  v3 = *a1;
  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( (v3 & 1) != 0 )
    return (unsigned int)-1073741811;
  v5 = a1[1];
  if ( (v5 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( v3 > v5 )
    return (unsigned int)-1073741811;
  if ( v5 == 0xFFFF )
    return (unsigned int)-1073741811;
  v6 = *((_QWORD *)a1 + 1);
  if ( !v6 && (v3 || v5) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a3 = (unsigned __int64)v3 >> 1;
    *a2 = v6;
  }
  return v4;
}

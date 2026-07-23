/*
 * XREFs of RtlpLocateActivationContextSection @ 0x180016240
 * Callers:
 *     RtlpFindNextActivationContextSection @ 0x1800160B4 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007A298 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D330 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18007EF34 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     bsearch @ 0x180098050 (bsearch.c)
 *     ARRAY_FITS @ 0x1800D2940 (ARRAY_FITS.c)
 */

__int64 __fastcall RtlpLocateActivationContextSection(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // r9d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r9d
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  char *v18; // r8
  int v19; // r11d
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r11d
  unsigned int *v23; // rax
  __int64 v24; // rax
  size_t v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int *v29; // r10
  unsigned int v30; // esi
  __int64 v31; // rcx
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  _DWORD *i; // rcx
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // edx
  _DWORD Key[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a1[3];
  if ( v6 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v6,
      a1[1]);
    return (unsigned int)-1072365565;
  }
  v10 = 0;
  if ( a2 )
  {
    v11 = (unsigned int)a1[5];
    if ( !(_DWORD)v11 )
      return (unsigned int)-1072365567;
    if ( !(unsigned __int8)ARRAY_FITS(v11, 1LL, 16LL) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
        v12,
        v13);
      return (unsigned int)-1072365565;
    }
    if ( !(unsigned __int8)ARRAY_FITS(
                             *(unsigned int *)((char *)a1 + v12 + 8),
                             *(unsigned int *)((char *)a1 + v12 + 4),
                             24LL) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of ac"
        "tivation context data (%lu bytes)\n",
        v15,
        v14,
        v16,
        v17);
      return (unsigned int)-1072365565;
    }
    v18 = (char *)a1 + v15;
    v19 = 0;
    if ( !v14 )
      return (unsigned int)-1072365567;
    while ( *a2 != *(_QWORD *)&v18[24 * v19] || a2[1] != *(_QWORD *)&v18[24 * v19 + 8] )
    {
      if ( ++v19 >= v14 )
        return (unsigned int)-1072365567;
    }
    if ( !(unsigned __int8)ARRAY_FITS(*(unsigned int *)&v18[24 * v19 + 16], 1LL, 16LL) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v22,
        v20,
        v21,
        v6);
      return (unsigned int)-1072365565;
    }
    v23 = (_DWORD *)((char *)a1 + v20);
  }
  else
  {
    v24 = (unsigned int)a1[4];
    if ( !(_DWORD)v24 )
      return (unsigned int)-1072365567;
    v23 = (_DWORD *)((char *)a1 + v24);
  }
  if ( !v23 )
    return (unsigned int)-1072365567;
  v25 = v23[1];
  if ( !(_DWORD)v25 )
    return (unsigned int)-1072365567;
  v26 = v23[2];
  v27 = 16LL * (unsigned int)v25;
  if ( v27 > 0xFFFFFFFF
    || (int)v27 + (int)v26 < (unsigned int)v27
    || (unsigned int)v26 >= v6
    || (int)v27 + (int)v26 > v6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
      v26,
      v25,
      16,
      v6);
    return (unsigned int)-1072365565;
  }
  v28 = v23[3];
  v29 = (_DWORD *)((char *)a1 + v26);
  if ( (v28 & 2) == 0 )
  {
    v33 = 0;
    for ( i = (_DWORD *)((char *)a1 + v26); *i != a3; i += 4 )
    {
      if ( ++v33 >= (unsigned int)v25 )
        return (unsigned int)-1072365567;
    }
    v31 = v33;
    goto LABEL_37;
  }
  if ( a3 < *v29 )
    return (unsigned int)-1072365567;
  if ( (v28 & 1) != 0 )
  {
    v30 = a3 - *v29;
    if ( v30 < (unsigned int)v25 )
    {
      v31 = v30;
LABEL_37:
      v32 = &v29[4 * v31];
      goto LABEL_38;
    }
    return (unsigned int)-1072365567;
  }
  Key[0] = a3;
  v32 = (unsigned int *)bsearch(Key, v29, v25, 0x10uLL, RtlpCompareActivationContextDataTOCEntryById);
LABEL_38:
  if ( !v32 )
    return (unsigned int)-1072365567;
  v35 = v32[1];
  if ( !(_DWORD)v35 )
    return (unsigned int)-1072365567;
  v36 = v32[2];
  v37 = a1[3];
  if ( v36 + (unsigned int)v35 < v36 || (unsigned int)v35 >= v37 || v36 + (unsigned int)v35 > v37 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
      v35,
      v36,
      v37);
    return (unsigned int)-1072365565;
  }
  *a4 = (char *)a1 + v35;
  *a5 = v32[2];
  return v10;
}

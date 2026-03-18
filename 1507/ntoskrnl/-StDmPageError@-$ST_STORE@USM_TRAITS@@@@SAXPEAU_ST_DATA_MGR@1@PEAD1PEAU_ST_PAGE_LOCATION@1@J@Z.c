/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x140254F3C
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14014118C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     SmEtwLogStoreCorruption @ 0x140257364 (SmEtwLogStoreCorruption.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmPageError(_DWORD *a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int *a4, int a5)
{
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF

  v9 = (unsigned __int8)a1[32];
  if ( v9 )
  {
    if ( (dword_140353094 & 0x10) == 0 )
      goto LABEL_12;
  }
  else if ( (dword_140353094 & 0x40) == 0 )
  {
    goto LABEL_12;
  }
  v11 = 0LL;
  if ( v9 == 1 )
  {
    v10 = *a4;
    LOBYTE(v11) = 1;
    if ( v10 >> a1[41] == a1[162] )
      HIDWORD(v11) |= 1u;
  }
  if ( a5 == -1073741116 )
    BYTE1(v11) = 2;
  else
    BYTE1(v11) = a5 == -1073741761;
  ((void (__fastcall *)(ULONGLONG *, ULONG_PTR, _DWORD *, ULONG_PTR, _WORD, __int64 *))SmEtwLogStoreCorruption)(
    &qword_140353088,
    a2,
    a1,
    a2,
    *((_WORD *)a4 + 2),
    &v11);
LABEL_12:
  if ( ((a1[46] >> 5) & 3u) >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( ((a1[46] >> 5) & 3) == 3 )
    KeBugCheckEx(0x12Bu, a5, *((unsigned __int16 *)a4 + 2), a2, a3);
  ST_STORE<SM_TRAITS>::StDmDeviceError((__int64)a1, 0, a5);
}

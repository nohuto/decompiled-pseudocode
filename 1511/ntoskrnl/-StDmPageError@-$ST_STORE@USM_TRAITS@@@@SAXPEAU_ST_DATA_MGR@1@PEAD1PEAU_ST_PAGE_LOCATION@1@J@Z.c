/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@J@Z @ 0x140205CAC
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F414 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     SmEtwLogStoreCorruption @ 0x1402080D0 (SmEtwLogStoreCorruption.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmPageError(_DWORD *a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, int a5)
{
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r9
  ULONGLONG *v12; // r10
  int v13; // r11d
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)a1[32] )
    v9 = 0;
  else
    v9 = (unsigned __int8)a1[32] + 2;
  v12 = SmEtwEnabled(v9);
  if ( v12 )
  {
    v15 = 0LL;
    if ( v13 == 1 )
    {
      v14 = *(_DWORD *)v11 >> a1[41];
      LOBYTE(v15) = 1;
      if ( v14 == a1[162] )
        HIDWORD(v15) |= 1u;
    }
    if ( a5 == -1073741116 )
      BYTE1(v15) = 2;
    else
      BYTE1(v15) = a5 == -1073741761;
    SmEtwLogStoreCorruption(v12, v10, a1, v10, *(_WORD *)(v11 + 4), &v15);
  }
  if ( ((a1[46] >> 5) & 3u) >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( ((a1[46] >> 5) & 3) == 3 )
    KeBugCheckEx(0x12Bu, a5, *(unsigned __int16 *)(a4 + 4), a2, a3);
  ST_STORE<SM_TRAITS>::StDmDeviceError((__int64)a1, 0, a5);
}

/*
 * XREFs of DrvDbGetRegValueMappedPropertyKeys @ 0x1406E2028
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1406E12D8 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1406E15CC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1406E1670 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedPropertyKeys(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 result; // rax
  __int64 v8; // rbp
  unsigned int v9; // esi
  _DWORD *v13; // rbx
  __int64 v14; // r14
  const WCHAR *v15; // r8
  _OWORD *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  result = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( a4 )
  {
    v13 = a7;
    v14 = a5;
    do
    {
      v15 = *(const WCHAR **)(a3 + 16);
      v18 = 0;
      result = PnpCtxRegQueryValue(a1, a2, v15, 0LL, 0LL, &v18);
      if ( (_DWORD)result != -1073741772 )
      {
        if ( (_DWORD)result && (_DWORD)result != -1073741789 )
          return result;
        if ( v14 )
        {
          if ( (unsigned int)v8 < a6 )
          {
            v16 = *(_OWORD **)a3;
            v17 = 5 * v8;
            v8 = (unsigned int)(v8 + 1);
            *(_OWORD *)(v14 + 4 * v17) = *(_OWORD *)*(_QWORD *)a3;
            *(_DWORD *)(v14 + 4 * v17 + 16) = *((_DWORD *)v16 + 4);
          }
        }
        a1 = (unsigned int)(*v13 + 1);
        if ( (unsigned int)a1 < *v13 )
        {
          *v13 = -1;
          result = 3221225621LL;
          *v13 = 0;
          return result;
        }
        *v13 = a1;
      }
      result = 0LL;
      ++v9;
      a3 += 40LL;
    }
    while ( v9 < a4 );
  }
  return result;
}

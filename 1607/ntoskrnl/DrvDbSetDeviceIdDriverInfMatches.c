/*
 * XREFs of DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x1406E243C (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404B910C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406E3484 (DrvDbSplitDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall DrvDbSetDeviceIdDriverInfMatches(__int64 a1, void *a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t *v4; // rsi
  void *v5; // r13
  int InfoKey; // ebx
  unsigned int v7; // r15d
  const wchar_t *v8; // rdi
  wchar_t *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  PVOID PoolWithTag; // rdi
  ULONG v15; // r12d
  int v16; // eax
  const wchar_t *v17; // r14
  size_t v18; // r13
  int v19; // eax
  wchar_t v20; // ax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  ULONG v26; // r14d
  __int64 v27; // rcx
  ULONG v28; // esi
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v33; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v34[4]; // [rsp+44h] [rbp-Ch] BYREF
  const wchar_t *v35; // [rsp+48h] [rbp-8h]
  unsigned int MaxCount; // [rsp+90h] [rbp+40h] BYREF
  int MaxCount_4; // [rsp+94h] [rbp+44h]
  void *v38; // [rsp+98h] [rbp+48h]
  ULONG v39; // [rsp+A8h] [rbp+58h] BYREF

  v38 = a2;
  MaxCount_4 = HIDWORD(a1);
  v35 = a3;
  v39 = 0;
  v4 = a3;
  MaxCount = 0;
  v5 = a2;
  v33 = 0;
  InfoKey = PnpCtxRegQueryInfoKey(a1, (int)a2, 0, a4, (__int64)&v39, (__int64)&MaxCount);
  if ( InfoKey >= 0 )
  {
    v7 = MaxCount + 1;
    if ( v4 )
    {
      v8 = v4;
      if ( *v4 )
      {
        do
        {
          v9 = wcschr(v8, 0x5Cu);
          if ( v9 )
          {
            v10 = v9 - v8;
          }
          else
          {
            v10 = -1LL;
            do
              ++v10;
            while ( v8[v10] );
          }
          v11 = v10 + 1;
          if ( v11 > v7 )
            v7 = v11;
          v12 = -1LL;
          do
            ++v12;
          while ( v8[v12] );
          v8 += v12 + 1;
        }
        while ( *v8 );
        v5 = v38;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v7, 0x42444450u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v15 = 0;
      if ( v39 )
      {
        while ( 1 )
        {
          MaxCount = v7;
          v16 = PnpCtxRegEnumValue(v13, v5, v15, PoolWithTag, (__int64)&MaxCount, (__int64)&v33, 0LL, 0);
          InfoKey = v16;
          if ( v16 < 0 )
            break;
          if ( v33 == 3 || !v33 )
          {
            v13 = 0LL;
            v17 = v4;
            if ( *v4 )
            {
              v18 = MaxCount;
              do
              {
                v19 = wcsncmp(v17, (const wchar_t *)PoolWithTag, v18);
                v13 = 0LL;
                if ( !v19 )
                {
                  v20 = v17[v18];
                  if ( v20 == 92 || !v20 )
                    break;
                }
                v21 = -1LL;
                do
                  ++v21;
                while ( v17[v21] );
                v17 += v21 + 1;
              }
              while ( *v17 );
              v4 = v35;
              v5 = v38;
            }
            if ( !*v17 )
            {
              v22 = PnpCtxRegDeleteValue(0LL, v5, (const WCHAR *)PoolWithTag);
              InfoKey = v22;
              if ( v22 == -1073741772 )
              {
                InfoKey = 0;
              }
              else if ( v22 < 0 )
              {
                goto LABEL_61;
              }
            }
          }
          if ( ++v15 >= v39 )
            goto LABEL_37;
        }
        if ( v16 == -2147483622 )
          InfoKey = 0;
      }
LABEL_37:
      if ( InfoKey >= 0 )
      {
        while ( *v4 )
        {
          InfoKey = DrvDbSplitDeviceIdDriverInfMatch(v4, (NTSTRSAFE_PWSTR)PoolWithTag, v7);
          if ( InfoKey < 0 )
            break;
          v24 = v34[0]
              ? PnpCtxRegSetValue(v23, v5, (const WCHAR *)PoolWithTag, 3u, v34, 4u)
              : PnpCtxRegSetValue(v23, v5, (const WCHAR *)PoolWithTag, 0, 0LL, 0);
          InfoKey = v24;
          if ( v24 < 0 )
            break;
          v25 = -1LL;
          do
            ++v25;
          while ( v4[v25] );
          v4 += v25 + 1;
        }
      }
    }
    else
    {
      v26 = v39;
      if ( !v39 )
        return 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v7, 0x42444450u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v28 = 0;
      if ( v26 )
      {
        while ( 1 )
        {
          MaxCount = v7;
          v29 = PnpCtxRegEnumValue(v27, v5, v28, PoolWithTag, (__int64)&MaxCount, 0LL, 0LL, 0);
          InfoKey = v29;
          if ( v29 < 0 )
            break;
          v31 = PnpCtxRegDeleteValue(v30, v5, (const WCHAR *)PoolWithTag);
          InfoKey = v31;
          if ( v31 == -1073741772 )
          {
            InfoKey = 0;
          }
          else if ( v31 < 0 )
          {
            goto LABEL_61;
          }
          if ( ++v28 >= v26 )
            goto LABEL_61;
        }
        if ( v29 == -2147483622 )
          InfoKey = 0;
      }
    }
LABEL_61:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)InfoKey;
}

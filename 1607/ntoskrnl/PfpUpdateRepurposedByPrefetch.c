/*
 * XREFs of PfpUpdateRepurposedByPrefetch @ 0x14042A9D8
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1403EE924 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1403EECA0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x14042A684 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x14053392C (PfpPrefetchPrivatePages.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PfpGetPageListCount @ 0x14042AAD8 (PfpGetPageListCount.c)
 */

_OWORD *__fastcall PfpUpdateRepurposedByPrefetch(_OWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 PageListCount; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  _OWORD *result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD *v17; // rdi
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _DWORD v20[4]; // [rsp+20h] [rbp-D8h] BYREF
  _OWORD v21[6]; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD v22[5]; // [rsp+90h] [rbp-68h] BYREF

  MmQueryMemoryListInformation(v21, 0xB0u, a3, v20);
  PfpGetPageListCount((char *)a1 + 104, 0LL, 7LL);
  PageListCount = PfpGetPageListCount((char *)v22 + 8, 0LL, v5);
  v8 = PageListCount - v7;
  if ( v8 > a2 )
    v8 = a2;
  if ( v8 )
    _InterlockedExchangeAdd64(&qword_1403286F0, v8);
  result = v21;
  v10 = v21[1];
  *a1 = v21[0];
  v11 = v21[2];
  a1[1] = v10;
  v12 = v21[3];
  a1[2] = v11;
  v13 = v21[4];
  a1[3] = v12;
  v14 = v21[5];
  a1[4] = v13;
  v15 = v22[0];
  a1[5] = v14;
  v16 = v22[2];
  a1[6] = v15;
  v17 = a1 + 8;
  *(v17 - 1) = v22[1];
  v18 = v22[3];
  *v17 = v16;
  v19 = v22[4];
  v17[1] = v18;
  v17[2] = v19;
  return result;
}

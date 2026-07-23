/*
 * XREFs of EtwpFindDebugId @ 0x1404B4B2C
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpFindDebugId(char *a1, SIZE_T a2, void **a3, _DWORD *a4)
{
  char *v7; // rcx
  ULONG i; // edx
  char *v9; // r9
  SIZE_T v10; // rcx
  size_t v11; // rbx
  char *v12; // r12
  PVOID PoolWithTag; // rax
  void **v15; // rcx
  ULONG v16[2]; // [rsp+20h] [rbp-58h] BYREF
  char *v17; // [rsp+28h] [rbp-50h]
  __int128 v18; // [rsp+30h] [rbp-48h]
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+48h] [rbp-30h]

  v16[0] = 0;
  v7 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 6u, v16);
  v17 = v7;
  if ( !v7 || v16[0] < 0x1C )
    return 3221225485LL;
  for ( i = 0; ; ++i )
  {
    v16[1] = i;
    if ( i >= v16[0] / 0x1C )
      return 3221226021LL;
    if ( v7 < a1 )
      return 3221225485LL;
    v9 = v7 + 28;
    if ( v7 + 28 > &a1[a2] )
      return 3221225485LL;
    v18 = *(_OWORD *)v7;
    NumberOfBytes = *((_QWORD *)v7 + 2);
    v20 = *((_DWORD *)v7 + 6);
    v10 = HIDWORD(NumberOfBytes);
    if ( HIDWORD(NumberOfBytes) > a2 )
      return 3221225485LL;
    v11 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > a2 || v10 > a2 - (unsigned int)NumberOfBytes )
      return 3221225485LL;
    if ( HIDWORD(v18) == 2 )
    {
      v12 = &a1[v10];
      if ( *(_DWORD *)&a1[v10] == 1396986706 )
        break;
    }
    v7 = v9;
    v17 = v9;
  }
  if ( (unsigned int)NumberOfBytes < 0x1C )
    return 3221225595LL;
  if ( *a4 >= (unsigned int)NumberOfBytes )
  {
    v15 = a3;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62777445u);
    v15 = a3;
    *a3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
  }
  *a4 = v11;
  memmove(*v15, v12, v11);
  return 0LL;
}

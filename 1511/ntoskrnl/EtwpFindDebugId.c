/*
 * XREFs of EtwpFindDebugId @ 0x1404CF2A8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpFindDebugId(char *a1, size_t a2, void **a3, _DWORD *a4)
{
  char *v7; // rcx
  ULONG i; // edx
  char *v9; // r10
  size_t v10; // r9
  int v11; // edi
  size_t v12; // rbx
  char *v13; // r12
  void **v14; // rcx
  PVOID PoolWithTag; // rax
  ULONG v17[2]; // [rsp+20h] [rbp-58h] BYREF
  char *v18; // [rsp+28h] [rbp-50h]
  __int128 v19; // [rsp+30h] [rbp-48h]
  size_t Size; // [rsp+40h] [rbp-38h]
  int v21; // [rsp+48h] [rbp-30h]

  v17[0] = 0;
  v7 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 6u, v17);
  v18 = v7;
  if ( !v7 || v17[0] < 0x1C )
    return 3221225485LL;
  for ( i = 0; ; ++i )
  {
    v17[1] = i;
    if ( i >= v17[0] / 0x1C )
      break;
    if ( v7 < a1 )
      return 3221225485LL;
    v9 = v7 + 28;
    if ( v7 + 28 > &a1[a2] )
      return 3221225485LL;
    v19 = *(_OWORD *)v7;
    Size = *((_QWORD *)v7 + 2);
    v21 = *((_DWORD *)v7 + 6);
    v10 = HIDWORD(Size);
    if ( HIDWORD(Size) > a2 )
      return 3221225485LL;
    v11 = Size;
    v12 = (unsigned int)Size;
    if ( (unsigned int)Size > a2 || v10 > a2 - (unsigned int)Size )
      return 3221225485LL;
    if ( HIDWORD(v19) == 2 )
    {
      v13 = &a1[v10];
      if ( *(_DWORD *)&a1[v10] == 1396986706 )
      {
        if ( *a4 < (unsigned int)Size )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x62777445u);
          v14 = a3;
          *a3 = PoolWithTag;
          if ( !PoolWithTag )
            return 3221225495LL;
        }
        else
        {
          v14 = a3;
        }
        *a4 = v11;
        memmove(*v14, v13, v12);
        return 0LL;
      }
    }
    v7 += 28;
    v18 = v9;
  }
  return 3221226021LL;
}

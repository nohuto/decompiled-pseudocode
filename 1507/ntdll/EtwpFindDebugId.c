/*
 * XREFs of EtwpFindDebugId @ 0x1800F4F84
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1800027E4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall EtwpFindDebugId(char *a1, __int64 a2, char **a3, unsigned int *a4)
{
  int v4; // ebx
  _DWORD *v8; // r10
  ULONG v9; // r8d
  char *v10; // rcx
  unsigned int v12; // eax
  ULONG v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v14 = HIDWORD(a2);
  v4 = 0;
  v13 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1u, 6u, &v13);
  if ( !v8 || v13 < 0x1C )
    return 87LL;
  v9 = v13 / 0x1C;
  if ( !(v13 / 0x1C) )
    return 232LL;
  while ( 1 )
  {
    if ( v8[3] == 2 )
    {
      v10 = &a1[v8[5]];
      *a3 = v10;
      if ( *(_DWORD *)v10 == 1396986706 )
        break;
    }
    v8 += 7;
    if ( ++v4 >= v9 )
      return 232LL;
  }
  v12 = v8[4];
  if ( v12 < 0x1C )
    return 87LL;
  *a4 = v12;
  return 0LL;
}

/*
 * XREFs of EtwpFindDebugId @ 0x1800F4984
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1800034E4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall EtwpFindDebugId(char *a1, __int64 a2, char **a3, _DWORD *a4)
{
  int v4; // ebx
  _DWORD *v8; // r10
  ULONG v9; // r8d
  char *v10; // rcx
  ULONG v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v13 = HIDWORD(a2);
  v4 = 0;
  v12 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1u, 6u, &v12);
  if ( !v8 || v12 < 0x1C )
    return 87LL;
  v9 = v12 / 0x1C;
  if ( !(v12 / 0x1C) )
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
  *a4 = v8[4];
  return 0LL;
}

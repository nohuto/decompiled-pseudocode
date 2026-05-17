/*
 * XREFs of EtwpFindDebugId @ 0x180002004
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180079858 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall EtwpFindDebugId(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  int v4; // ebx
  _DWORD *v8; // r10
  unsigned int v9; // r8d
  _DWORD *v10; // rcx
  unsigned int v12; // eax
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v14 = HIDWORD(a2);
  v4 = 0;
  v13 = 0;
  LOBYTE(a2) = 1;
  v8 = (_DWORD *)RtlImageDirectoryEntryToData(a1, a2, 6LL, &v13);
  if ( !v8 || v13 < 0x1C )
    return 87LL;
  v9 = v13 / 0x1C;
  if ( !(v13 / 0x1C) )
    return 232LL;
  while ( 1 )
  {
    if ( v8[3] == 2 )
    {
      v10 = (_DWORD *)(a1 + (unsigned int)v8[5]);
      *a3 = v10;
      if ( *v10 == 1396986706 )
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

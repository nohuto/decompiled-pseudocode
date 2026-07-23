/*
 * XREFs of ViThunkSnapSharedExportByName @ 0x1406FE014
 * Callers:
 *     ViThunkSnapSharedExports @ 0x1406FDF64 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     _stricmp @ 0x14014D904 (_stricmp.c)
 */

__int64 __fastcall ViThunkSnapSharedExportByName(char *a1, __int64 a2, char **a3)
{
  unsigned int v3; // ebx
  unsigned int *v7; // rax
  unsigned int *v8; // rdi
  const char *v9; // rsi
  __int64 *v11; // rsi
  char *i; // rbp
  __int64 v13; // rax
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  a3[1] = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 1u, &Size);
  v8 = v7;
  if ( v7 && v7[3] )
  {
    do
    {
      if ( !*v8 )
        break;
      v9 = &a1[v8[3]];
      if ( !stricmp(v9, "ntoskrnl.exe") || !stricmp(v9, "hal.dll") )
      {
        v11 = (__int64 *)&a1[*v8];
        for ( i = &a1[v8[4]]; ; i += 8 )
        {
          v13 = *v11;
          if ( !*v11 )
            break;
          if ( v13 >= 0 && !stricmp(&a1[v13 + 2], *(const char **)a2) )
          {
            *a3 = i;
            v3 = 1;
            a3[1] = *(char **)(a2 + 8);
            return v3;
          }
          ++v11;
        }
      }
      v8 += 5;
    }
    while ( v8[3] );
  }
  return v3;
}

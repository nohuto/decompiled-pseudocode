/*
 * XREFs of RtlFindExportedRoutineByName @ 0x140541BB0
 * Callers:
 *     MiUnloadApproved @ 0x140453114 (MiUnloadApproved.c)
 *     MmGetSystemRoutineAddress @ 0x140541B4C (MmGetSystemRoutineAddress.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     KsepResolveShimHooks @ 0x14069C90C (KsepResolveShimHooks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  char *v4; // rax
  char *v5; // r9
  int v6; // r8d
  char *v7; // rsi
  char *v8; // rdi
  int v9; // ecx
  int v10; // edx
  PCSTR v11; // rax
  signed __int64 v12; // r11
  CHAR v13; // r10
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // r8
  ULONG v20; // [rsp+40h] [rbp+18h] BYREF

  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &v20);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = (char *)BaseOfImage + *((unsigned int *)v4 + 8);
  v8 = (char *)BaseOfImage + *((unsigned int *)v4 + 9);
  v9 = *((_DWORD *)v4 + 6) - 1;
  if ( v9 < 0 )
    return 0LL;
  do
  {
    v10 = (v9 + v6) >> 1;
    v11 = RoutineName;
    v12 = (_BYTE *)BaseOfImage + *(unsigned int *)&v7[4 * v10] - RoutineName;
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 != v11[v12] )
        break;
      ++v11;
      if ( !v13 )
      {
        v14 = 0;
        goto LABEL_7;
      }
    }
    v14 = *v11 < (unsigned int)v11[v12] ? -1 : 1;
LABEL_7:
    if ( v14 < 0 )
    {
      if ( !v10 )
        return 0LL;
      v9 = v10 - 1;
      continue;
    }
    if ( v14 <= 0 )
      break;
    v6 = v10 + 1;
  }
  while ( v9 >= v6 );
  if ( v9 < v6 )
    return 0LL;
  v15 = *(unsigned __int16 *)&v8[2 * v10];
  if ( v15 >= *((_DWORD *)v5 + 5) )
    return 0LL;
  v16 = (unsigned __int16)v15;
  v17 = (char *)BaseOfImage + *((unsigned int *)v5 + 7);
  v18 = (char *)BaseOfImage + *(unsigned int *)&v17[4 * v16];
  if ( v18 > v5 && v18 < &v5[v20] )
    return 0LL;
  return (char *)BaseOfImage + *(unsigned int *)&v17[4 * v16];
}

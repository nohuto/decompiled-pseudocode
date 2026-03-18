/*
 * XREFs of RtlFindExportedRoutineByName @ 0x1403F5F04
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1403F5EA0 (MmGetSystemRoutineAddress.c)
 *     MiCompactServiceTable @ 0x14053A248 (MiCompactServiceTable.c)
 *     MmCallDllInitialize @ 0x1405442A0 (MmCallDllInitialize.c)
 *     MiUnloadApproved @ 0x14054453C (MiUnloadApproved.c)
 *     KsepResolveShimHooks @ 0x140652F74 (KsepResolveShimHooks.c)
 *     PspInitializeSystemDlls @ 0x1407B6180 (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BAEC (RtlImageDirectoryEntryToData.c)
 */

char *__fastcall RtlFindExportedRoutineByName(char *a1, char *a2)
{
  char *v4; // rax
  char *v5; // r9
  int v6; // r8d
  char *v7; // rsi
  char *v8; // rdi
  int v9; // ecx
  int v10; // edx
  char *v11; // rax
  char *v12; // r11
  char v13; // r10
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // r8
  ULONG v20; // [rsp+40h] [rbp+18h] BYREF

  v4 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, &v20);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = &a1[*((unsigned int *)v4 + 8)];
  v8 = &a1[*((unsigned int *)v4 + 9)];
  v9 = *((_DWORD *)v4 + 6) - 1;
  if ( v9 < 0 )
    return 0LL;
  do
  {
    v10 = (v9 + v6) >> 1;
    v11 = a2;
    v12 = (char *)(&a1[*(unsigned int *)&v7[4 * v10]] - a2);
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 != v12[(_QWORD)v11] )
        break;
      ++v11;
      if ( !v13 )
      {
        v14 = 0;
        goto LABEL_7;
      }
    }
    v14 = (unsigned __int8)*v11 < (unsigned int)v12[(_QWORD)v11] ? -1 : 1;
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
  v17 = &a1[*((unsigned int *)v5 + 7)];
  v18 = &a1[*(unsigned int *)&v17[4 * v16]];
  if ( v18 > v5 && v18 < &v5[v20] )
    return 0LL;
  return &a1[*(unsigned int *)&v17[4 * v16]];
}

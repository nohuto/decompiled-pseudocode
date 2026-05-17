/*
 * XREFs of RtlFindExportedRoutineByName @ 0x18007A290
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(unsigned __int64 a1, char *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r9
  int v6; // r8d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // ecx
  int v10; // edx
  char *v11; // rax
  unsigned __int64 v12; // r11
  char v13; // r10
  int v14; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned int v20; // [rsp+40h] [rbp+18h] BYREF

  v4 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 0, &v20);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = 0;
  v7 = a1 + (unsigned int)v4[8];
  v8 = a1 + (unsigned int)v4[9];
  v9 = v4[6] - 1;
  if ( v9 < 0 )
    return 0LL;
  do
  {
    v10 = (v9 + v6) >> 1;
    v11 = a2;
    v12 = a1 + *(unsigned int *)(v7 + 4LL * v10) - (_QWORD)a2;
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
    v14 = (unsigned __int8)*v11 < (unsigned __int8)v11[v12] ? -1 : 1;
LABEL_7:
    if ( v14 < 0 )
    {
      if ( !v10 )
        return 0LL;
      v9 = v10 - 1;
    }
    else
    {
      if ( v14 <= 0 )
        break;
      v6 = v10 + 1;
    }
  }
  while ( v9 >= v6 );
  if ( v9 >= v6
    && (v16 = *(unsigned __int16 *)(v8 + 2LL * v10), v16 < v5[5])
    && ((v17 = (unsigned __int16)v16,
         v18 = a1 + (unsigned int)v5[7],
         v19 = a1 + *(unsigned int *)(v18 + 4 * v17),
         v19 <= (unsigned __int64)v5)
     || v19 >= (unsigned __int64)v5 + v20) )
  {
    return a1 + *(unsigned int *)(v18 + 4 * v17);
  }
  else
  {
    return 0LL;
  }
}

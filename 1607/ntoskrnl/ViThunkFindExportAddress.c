/*
 * XREFs of ViThunkFindExportAddress @ 0x1407A5538
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x1407A54A4 (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     ViThunkIsExportAddressShared @ 0x1407A5650 (ViThunkIsExportAddressShared.c)
 */

char *__fastcall ViThunkFindExportAddress(__int64 a1, char *a2, _DWORD *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  int v5; // ebp
  char *v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  int v11; // r8d
  char *v12; // r15
  char *v13; // r11
  int v14; // ecx
  char *v15; // rax
  __int64 v16; // rdx
  char *v17; // r10
  char v18; // r9
  int v19; // eax
  int IsExportAddressShared; // eax
  char *v21; // rcx
  unsigned __int16 v22; // r8
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  v5 = 0;
LABEL_2:
  if ( v4 != v3 )
  {
    v8 = (char *)v4[6];
    v9 = RtlImageDirectoryEntryToData(v8, 1u, 0, &Size);
    v10 = v9;
    if ( !v9 )
      goto LABEL_19;
    v11 = 0;
    v12 = &v8[v9[8]];
    v13 = &v8[v9[9]];
    v14 = v9[6] - 1;
    while ( 1 )
    {
      v15 = a2;
      v16 = (unsigned int)(v14 + v11) >> 1;
      v17 = (char *)(&v8[*(unsigned int *)&v12[4 * v16]] - a2);
      while ( 1 )
      {
        v18 = *v15;
        if ( *v15 != v17[(_QWORD)v15] )
          break;
        ++v15;
        if ( !v18 )
        {
          v19 = 0;
          goto LABEL_9;
        }
      }
      v19 = (unsigned __int8)*v15 < (unsigned int)v17[(_QWORD)v15] ? -1 : 1;
LABEL_9:
      if ( v19 < 0 )
      {
        if ( !(_DWORD)v16 )
        {
          v14 = 0;
          v11 = 1;
LABEL_13:
          if ( v14 >= v11 && (unsigned int)*(unsigned __int16 *)&v13[2 * v16] < v10[5] )
          {
            IsExportAddressShared = ViThunkIsExportAddressShared(v8, v10);
            v21 = &v8[v10[7]];
            *a3 = IsExportAddressShared;
            return &v8[*(unsigned int *)&v21[4 * v22]];
          }
LABEL_19:
          if ( ++v5 != 2 )
          {
            v4 = (_QWORD *)*v4;
            goto LABEL_2;
          }
          return 0LL;
        }
        v14 = v16 - 1;
      }
      else
      {
        if ( v19 <= 0 )
          goto LABEL_13;
        v11 = v16 + 1;
      }
      if ( v14 < (unsigned int)v11 )
        goto LABEL_13;
    }
  }
  return 0LL;
}

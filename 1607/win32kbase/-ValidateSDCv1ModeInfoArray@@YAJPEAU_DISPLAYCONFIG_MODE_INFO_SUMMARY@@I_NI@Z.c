/*
 * XREFs of ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_NI@Z @ 0x1C00C7FA8
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C008A260 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateSDCv1ModeInfoArray(
        struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *a1,
        unsigned int a2,
        char a3,
        char a4)
{
  unsigned int v7; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  int v14; // ecx
  unsigned int v16; // r10d
  unsigned int *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx

  v7 = 0;
  qsort(a1, a2, 0x10uLL, (int (__cdecl *)(const void *, const void *))DisplayConfigModeSortSdcv1);
  v11 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    v7 = 1;
    v12 = 1LL;
  }
  else
  {
    v12 = (v11 & 0x20000) != 0;
  }
  if ( (v11 & 0x40000) != 0 && (unsigned __int16)v11 > 1u )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v12, v9, v10);
    v13[3] = *((unsigned int *)a1 + 1);
    v14 = *(_DWORD *)a1;
LABEL_7:
    v13[4] = (unsigned __int16)v14;
    v13[5] = -1073741583LL;
    goto LABEL_8;
  }
  if ( a2 != 1 )
  {
    v16 = a2 - 1;
    v17 = (unsigned int *)((char *)a1 + 16 * a2 - 16);
    if ( v16 )
    {
      while ( 1 )
      {
        v9 = *v17;
        if ( (v9 & 0x10000) != 0 )
        {
          ++v7;
          v12 = (unsigned int)(v12 + 1);
        }
        if ( (v9 & 0x20000) != 0 )
          v12 = (unsigned int)(v12 + 1);
        v10 = ((unsigned int)v9 >> 18) & 1;
        if ( (((unsigned int)v9 >> 18) & 1) != 0 && (unsigned __int16)v9 > 1u )
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v12, v9, v10);
          v13[3] = v17[1];
          v14 = *v17;
          goto LABEL_7;
        }
        if ( (_WORD)v9 )
        {
          v9 = *(v17 - 4);
          if ( (_WORD)v9 )
          {
            if ( v17[2] == *(v17 - 2) && v17[3] == *(v17 - 1) && v17[1] == *(v17 - 3) )
            {
              v9 = ((unsigned int)v9 >> 18) & 1;
              if ( (_DWORD)v10 == (_DWORD)v9 )
                break;
            }
          }
        }
        v17 -= 4;
        if ( !--v16 )
          goto LABEL_24;
      }
      v13 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v12, v9, v10);
      v19 = v17[1];
      goto LABEL_34;
    }
  }
LABEL_24:
  if ( (_DWORD)v12 && v7 != 1 )
  {
    if ( (!a3 || v7 > 1) && ((a4 & 8) == 0 || v7 > 1) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v12, v9, v10);
      v19 = v7;
LABEL_34:
      v13[3] = v19;
      v13[4] = -1073741583LL;
LABEL_8:
      WdLogEvent5_WdError(v13);
      return 3221225713LL;
    }
    v18 = WdLogNewEntry5_WdEvent(1LL, v12);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdEvent(v18);
  }
  return 0LL;
}

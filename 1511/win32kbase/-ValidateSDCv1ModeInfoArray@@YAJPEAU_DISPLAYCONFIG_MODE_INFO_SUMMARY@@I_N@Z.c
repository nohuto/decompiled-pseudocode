/*
 * XREFs of ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_N@Z @ 0x1C00BC294
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00892C0 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateSDCv1ModeInfoArray(struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *a1, unsigned int a2, char a3)
{
  unsigned int v5; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rax
  int v11; // ecx
  unsigned int v13; // r10d
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx

  v5 = 0;
  qsort(a1, a2, 0x10uLL, (int (__cdecl *)(const void *, const void *))DisplayConfigModeSortSdcv1);
  v8 = *(unsigned int *)a1;
  if ( (v8 & 0x10000) != 0 )
  {
    v5 = 1;
    v9 = 1LL;
  }
  else
  {
    v9 = (v8 & 0x20000) != 0;
  }
  if ( (v8 & 0x40000) != 0 && (unsigned __int16)v8 > 1u )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v9, v7, v8);
    v10[3] = *((unsigned int *)a1 + 1);
    v11 = *(_DWORD *)a1;
LABEL_7:
    v10[4] = (unsigned __int16)v11;
    v10[5] = -1073741583LL;
    goto LABEL_8;
  }
  if ( a2 != 1 )
  {
    v13 = a2 - 1;
    v14 = (unsigned int *)((char *)a1 + 16 * a2 - 16);
    if ( v13 )
    {
      while ( 1 )
      {
        v7 = *v14;
        if ( (v7 & 0x10000) != 0 )
        {
          ++v5;
          v9 = (unsigned int)(v9 + 1);
        }
        if ( (v7 & 0x20000) != 0 )
          v9 = (unsigned int)(v9 + 1);
        v8 = ((unsigned int)v7 >> 18) & 1;
        if ( (((unsigned int)v7 >> 18) & 1) != 0 && (unsigned __int16)v7 > 1u )
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v9, v7, v8);
          v10[3] = v14[1];
          v11 = *v14;
          goto LABEL_7;
        }
        if ( (_WORD)v7 )
        {
          v7 = *(v14 - 4);
          if ( (_WORD)v7 )
          {
            if ( v14[2] == *(v14 - 2) && v14[3] == *(v14 - 1) && v14[1] == *(v14 - 3) )
            {
              v7 = ((unsigned int)v7 >> 18) & 1;
              if ( (_DWORD)v8 == (_DWORD)v7 )
                break;
            }
          }
        }
        v14 -= 4;
        if ( !--v13 )
          goto LABEL_24;
      }
      v10 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v9, v7, v8);
      v16 = v14[1];
      goto LABEL_32;
    }
  }
LABEL_24:
  if ( (_DWORD)v9 && v5 != 1 )
  {
    if ( !a3 || v5 > 1 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(1LL, v9, v7, v8);
      v16 = v5;
LABEL_32:
      v10[3] = v16;
      v10[4] = -1073741583LL;
LABEL_8:
      WdLogEvent5_WdError(v10);
      return 3221225713LL;
    }
    v15 = WdLogNewEntry5_WdEvent(1LL, v9);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdEvent(v15);
  }
  return 0LL;
}

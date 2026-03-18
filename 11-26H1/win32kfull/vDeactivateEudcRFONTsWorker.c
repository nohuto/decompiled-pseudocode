/*
 * XREFs of vDeactivateEudcRFONTsWorker @ 0x140324C34
 * Callers:
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x140175778 (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEBAIXZ @ 0x1401AB924 (-cInactive@PDEVOBJ@@QEBAIXZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x1401C4AE0 (-cInactive@PDEVOBJ@@QEAAII@Z.c)
 */

__int64 __fastcall vDeactivateEudcRFONTsWorker(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int *i; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 **v11; // rax
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // r9
  struct _LIST_ENTRY *Blink; // rcx
  int v15; // eax
  _QWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = a1;
  result = *(unsigned int *)(*(_QWORD *)a3 + 52LL);
  if ( (result & 8) != 0 )
  {
    for ( i = *(int **)(*(_QWORD *)a3 + 72LL); ; i = *(int **)i )
    {
      result = *(_QWORD *)a3 + 72LL;
      if ( i == (int *)result )
        break;
      v9 = *((_QWORD *)i - 46);
      if ( v9 == *a2 || v9 == a2[1] )
      {
        v10 = *((_QWORD *)i + 23);
        v18 = *((_QWORD *)i - 48);
        if ( *(int **)(v10 + 8) != i + 46 || (v11 = (__int64 **)*((_QWORD *)i + 24), *v11 != (__int64 *)(i + 46)) )
LABEL_15:
          __fastfail(3u);
        *v11 = (__int64 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        if ( i[45] <= 0 )
        {
          v15 = PDEVOBJ::cInactive((PDEVOBJ *)&v18);
          PDEVOBJ::cInactive((PDEVOBJ *)&v18, v15 - 1);
          v17 = *a4;
          if ( *(__int64 **)(*a4 + 8) != a4 )
            goto LABEL_15;
          *v16 = v17;
          v16[1] = a4;
          *(_QWORD *)(v17 + 8) = v16;
          *a4 = (__int64)v16;
        }
        else
        {
          v12 = PDEVOBJ::prfntActive((PDEVOBJ *)&v18);
          Blink = v12->Blink;
          if ( Blink->Flink != v12 )
            goto LABEL_15;
          v13->Flink = v12;
          v13->Blink = Blink;
          Blink->Flink = v13;
          v12->Blink = v13;
        }
        v18 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
      }
    }
  }
  return result;
}

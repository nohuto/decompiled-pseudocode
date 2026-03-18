/*
 * XREFs of ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C007EEF8
 * Callers:
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C007EEE0 (--$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBitmapInitialize(struct _CIT_BITMAP *a1, struct _CIT_BITMAP *a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rax

  v3 = a3;
  v4 = *((_QWORD *)a2 + 1);
  if ( v4 < v3 )
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a2;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a2 + 1) = v4 - v3;
    *(_QWORD *)a2 = v3 + v5;
  }
}

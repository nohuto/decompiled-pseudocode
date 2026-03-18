/*
 * XREFs of ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0066688
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00664A8 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E59E4 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 *     ?CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00E5DC0 (-CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBytesToString(unsigned __int8 *a1, unsigned int a2, unsigned __int16 *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // al
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int8 v10; // al
  unsigned __int16 v11; // cx

  v4 = 0;
  if ( a2 )
  {
    v5 = a2;
    do
    {
      v6 = *a1 & 0xF;
      if ( v6 >= 0xAu )
        v7 = v6 + 55;
      else
        v7 = v6 + 48;
      v8 = v4;
      v9 = v4 + 1;
      a3[v8] = v7;
      v10 = *a1 >> 4;
      if ( v10 >= 0xAu )
        v11 = v10 + 55;
      else
        v11 = v10 + 48;
      ++a1;
      a3[v9] = v11;
      v4 = v9 + 1;
      --v5;
    }
    while ( v5 );
  }
  a3[v4] = 0;
}

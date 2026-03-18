/*
 * XREFs of EditionHandleRawInput @ 0x140172120
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1401721D0 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 */

__int64 __fastcall EditionHandleRawInput(
        int a1,
        int a2,
        unsigned __int8 a3,
        char a4,
        int a5,
        __int64 *a6,
        __int16 a7,
        __int16 a8,
        int a9,
        __int64 a10)
{
  __int64 *v10; // r10
  unsigned int v11; // ebx
  __int16 v13; // cx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+28h] [rbp-28h]
  _DWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v17; // [rsp+38h] [rbp-18h]
  __int16 v18; // [rsp+3Ah] [rbp-16h]
  int v19; // [rsp+3Ch] [rbp-14h]
  BOOL v20; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+44h] [rbp-Ch]

  v10 = a6;
  v11 = 0;
  v18 = 0;
  v16[0] = a1;
  v19 = a2;
  v20 = a4 == 0;
  v16[1] = a5;
  v17 = a3;
  v14 = 0LL;
  v15 = 0;
  if ( a6 )
  {
    v21 = 0;
  }
  else
  {
    WORD1(v14) = a7;
    v21 = 1;
    if ( (a8 & 0x100) != 0 )
      v13 = 2;
    else
      v13 = 0;
    v10 = &v14;
    WORD2(v14) = (a9 != 0) | v13;
  }
  LOBYTE(v11) = (unsigned int)HandleRawInput(a10, v10, v16) == 1;
  return v11;
}

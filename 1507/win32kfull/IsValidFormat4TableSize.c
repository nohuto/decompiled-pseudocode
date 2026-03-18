/*
 * XREFs of IsValidFormat4TableSize @ 0x1C01596E0
 * Callers:
 *     bVerifyMsftTable @ 0x1C0159510 (bVerifyMsftTable.c)
 *     bVerifyMsftTableGeneral @ 0x1C0245570 (bVerifyMsftTableGeneral.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFormat4TableSize(_WORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r10
  unsigned int v7; // ebx
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r8
  int v10; // edx
  int v11; // r15d
  _WORD *v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int16 v15; // r10
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned int v18; // r11d
  unsigned __int16 v19; // cx

  v5 = a3;
  v7 = 0;
  if ( __ROR2__(*a1, 8) == 4 && a4 - a3 >= 8 )
  {
    v8 = __ROR2__(a1[3], 8);
    if ( v8 )
    {
      if ( (v8 & 1) == 0 )
      {
        v9 = v8 >> 1;
        if ( (unsigned int)v5 <= -17 - 8 * (unsigned int)v9 )
        {
          v10 = 2 * v9;
          v11 = 6 * v9 + v5 + 16;
          if ( v10 + v11 <= a4 )
          {
            v12 = (_WORD *)(v5 + v10 + a2 + 16);
            v13 = v5 + a2 + 14;
            v14 = v5 + 6 * v9 + a2 + 16;
            if ( v12[v9 - 1] == 0xFFFF && v9 > 1u )
              --v9;
            v15 = 0;
            if ( !v9 )
              return 1LL;
            v16 = v14 - (_QWORD)v12;
            v17 = v13 - (_QWORD)v12;
            while ( 1 )
            {
              v18 = (unsigned __int16)__ROR2__(*v12, 8);
              v19 = __ROR2__(*(_WORD *)((char *)v12 + v16), 8);
              if ( v18 < v7 )
                v18 = v7 + 1;
              v7 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v12 + v17), 8);
              if ( v19 )
              {
                if ( v11 + v19 + 2 + 2 * (v7 + v15 - v18) > a4 )
                  break;
              }
              ++v15;
              ++v12;
              if ( v15 >= v9 )
                return 1LL;
            }
          }
        }
      }
    }
  }
  return 0LL;
}

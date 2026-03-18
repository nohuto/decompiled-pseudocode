/*
 * XREFs of IsValidFormat4TableSize @ 0x1C01570C8
 * Callers:
 *     bVerifyMsftTable @ 0x1C0156EF4 (bVerifyMsftTable.c)
 *     bVerifyMsftTableGeneral @ 0x1C0241688 (bVerifyMsftTableGeneral.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFormat4TableSize(_WORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r10
  unsigned int v6; // ebx
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // r8
  int v9; // r15d
  _WORD *v10; // r9
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int16 v13; // r10
  __int64 v14; // r14
  __int64 v15; // rsi
  unsigned int v16; // r11d
  unsigned __int16 v17; // cx

  v5 = a3;
  v6 = 0;
  if ( __ROR2__(*a1, 8) == 4 && a4 - a3 >= 8 )
  {
    v7 = __ROR2__(a1[3], 8);
    if ( v7 )
    {
      if ( (v7 & 1) == 0 )
      {
        v8 = v7 >> 1;
        if ( (unsigned int)v5 <= -17 - 8 * (unsigned int)v8 )
        {
          v9 = 6 * v8 + v5 + 16;
          if ( 2 * (unsigned int)v8 + v9 <= a4 )
          {
            v10 = (_WORD *)(v5 + 2 * v8 + a2 + 16);
            v11 = v5 + a2 + 14;
            v12 = v5 + 6 * v8 + a2 + 16;
            if ( v10[v8 - 1] == 0xFFFF && v8 > 1u )
              --v8;
            v13 = 0;
            if ( !v8 )
              return 1LL;
            v14 = v12 - (_QWORD)v10;
            v15 = v11 - (_QWORD)v10;
            while ( 1 )
            {
              v16 = (unsigned __int16)__ROR2__(*v10, 8);
              v17 = __ROR2__(*(_WORD *)((char *)v10 + v14), 8);
              if ( v16 < v6 )
                v16 = v6 + 1;
              v6 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v10 + v15), 8);
              if ( v17 )
              {
                if ( v9 + v17 + 2 + 2 * (v6 + v13 - v16) > a4 )
                  break;
              }
              ++v13;
              ++v10;
              if ( v13 >= v8 )
                return 1LL;
            }
          }
        }
      }
    }
  }
  return 0LL;
}

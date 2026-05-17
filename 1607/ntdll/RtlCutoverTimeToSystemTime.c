/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x180062030
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1800621D0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1800623E0 (RtlTimeToTimeFields.c)
 */

bool __fastcall RtlCutoverTimeToSystemTime(_WORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  _WORD *v5; // r14
  __int16 v8; // r13
  __int16 v9; // r15
  bool v10; // r12
  __int16 v11; // ax
  __int16 v12; // si
  __int16 v13; // di
  __int16 v14; // r15
  __int16 i; // r14
  __int16 v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  _WORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch]
  __int16 v21; // [rsp+36h] [rbp-2Ah]
  __int16 v22; // [rsp+38h] [rbp-28h]
  __int16 v23; // [rsp+3Ah] [rbp-26h]
  __int16 v24; // [rsp+3Ch] [rbp-24h]
  __int16 v25; // [rsp+3Eh] [rbp-22h]
  __int16 v26; // [rsp+40h] [rbp-20h] BYREF
  __int16 v27; // [rsp+42h] [rbp-1Eh]
  __int16 v28; // [rsp+44h] [rbp-1Ch]
  _BYTE v29[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v30; // [rsp+54h] [rbp-Ch]
  __int16 v31; // [rsp+5Eh] [rbp-2h]

  v5 = a1;
  RtlTimeToTimeFields(a3, &v26);
  if ( !*v5 )
  {
    v8 = v5[2];
    if ( v8 <= 5 && v8 )
    {
      v9 = v5[7];
      v10 = 0;
      v11 = v5[1];
      v12 = v26;
      v17 = v9;
      if ( !a4 )
      {
        if ( v11 >= v27 )
          v10 = v11 <= v27;
        else
          v12 = v26 + 1;
      }
      v19[1] = v5[1];
      v25 = 0;
      while ( 1 )
      {
        v21 = v5[3];
        v13 = 1;
        v22 = v5[4];
        v23 = v5[5];
        v24 = v5[6];
        v19[0] = v12;
        v20 = 1;
        if ( !(unsigned __int8)RtlTimeFieldsToTime(v19, &v18) )
          break;
        RtlTimeToTimeFields(&v18, v29);
        if ( v31 <= v9 )
        {
          if ( v31 < v9 )
            v13 = v9 - v31 + 1;
        }
        else
        {
          v13 = v9 - v31 + 8;
        }
        v14 = v13;
        if ( v8 > 1 )
        {
          for ( i = 1; i < v8; ++i )
          {
            v13 += 7;
            v20 = v13;
            if ( !(unsigned __int8)RtlTimeFieldsToTime(v19, &v18) )
              break;
            RtlTimeToTimeFields(&v18, v29);
            v14 = v30;
          }
          v5 = a1;
        }
        v20 = v14;
        if ( !(unsigned __int8)RtlTimeFieldsToTime(v19, &v18) )
          break;
        if ( !v10 || v14 >= v28 && (v14 != v28 || v18 >= *a3) )
        {
          *a2 = v18;
          return 1;
        }
        v9 = v17;
        v10 = 0;
        ++v12;
      }
    }
    return 0;
  }
  return (unsigned __int8)RtlTimeFieldsToTime(v5, a2) && (a4 || *a2 >= *a3);
}

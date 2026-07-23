/*
 * XREFs of RtlMarkExceptionHandlingPages @ 0x140480F84
 * Callers:
 *     MiCaptureImageExceptionValues @ 0x140480EE0 (MiCaptureImageExceptionValues.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     RtlpSearchFunctionTable @ 0x140082B40 (RtlpSearchFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlMarkExceptionHandlingPages(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // r12
  unsigned int v9; // esi
  unsigned int *v10; // r13
  unsigned int v11; // eax
  unsigned int *v12; // rbp
  int v13; // r12d
  _BYTE *v14; // rbx
  __int64 v15; // rcx
  char v16; // al
  unsigned int *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  ULONG v21; // ecx
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]
  int v23; // [rsp+68h] [rbp+10h]

  v6 = a1 + a2;
  if ( a3 >= a1 )
  {
    v8 = a4 + a3;
    v22 = v8;
    if ( v8 <= v6 )
    {
      v9 = a4 / 0xC;
      if ( a4 == 12 * (a4 / 0xCuLL) )
      {
        RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
        v23 = 0;
        if ( !v9 )
          return 0LL;
        v10 = (unsigned int *)a3;
LABEL_6:
        v11 = v10[2];
        v12 = v10;
        while ( (v11 & 1) != 0 )
        {
          v19 = v12[2];
          v20 = (unsigned __int64)v12;
          if ( (v19 & 1) != 0 )
          {
            v20 = v19 + a1 - 1;
            if ( a1 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
          }
          v12 = (unsigned int *)v20;
          if ( v20 >= a3 && v20 + 12 <= v8 )
            break;
          if ( v20 < a1 || v20 > v6 - 12 )
            return 3221225727LL;
          v21 = 1;
          if ( (unsigned __int64)(((_WORD)v20 - (_WORD)a1) & 0xFFF) + 12 > 0x1000 )
            v21 = 2;
          RtlSetBits(BitMapHeader, (v20 - a1) >> 12, v21);
          v11 = *(_DWORD *)(v20 + 8);
        }
        v13 = 0;
        while ( 1 )
        {
          v14 = (_BYTE *)(a1 + v12[2]);
          if ( (unsigned __int64)v14 < a1 || (unsigned __int64)(v14 + 6) > v6 )
            break;
          v15 = 2 * (unsigned int)(unsigned __int8)v14[2] + 6;
          if ( (unsigned __int8)v14[2] % 2 )
            v15 = 2 * (unsigned int)(unsigned __int8)v14[2] + 8;
          v16 = *v14 >> 3;
          if ( (v16 & 4) != 0 )
          {
            v15 = (unsigned int)(v15 + 12);
          }
          else if ( (v16 & 3) != 0 )
          {
            v15 = (unsigned int)(v15 + 8);
          }
          if ( (unsigned __int64)&v14[v15] > v6 )
            break;
          RtlSetBits(
            BitMapHeader,
            v12[2] >> 12,
            (((unsigned int)v15 + (unsigned __int64)v12[2] + 4095) >> 12) - (v12[2] >> 12));
          if ( (*v14 & 0x20) != 0 )
          {
            if ( (unsigned int)++v13 > 0x20 )
              return 3221225727LL;
            v12 = (unsigned int *)&v14[2 * (((unsigned __int8)v14[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
            v17 = RtlpSearchFunctionTable(a3, v9, a1 + *v12, a1);
            if ( !v17 || v17[2] != v12[2] )
              continue;
          }
          v10 += 3;
          if ( ++v23 >= v9 )
            return 0LL;
          v8 = v22;
          goto LABEL_6;
        }
      }
    }
  }
  return 3221225727LL;
}

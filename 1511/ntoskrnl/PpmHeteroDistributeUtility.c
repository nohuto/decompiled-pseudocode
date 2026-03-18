/*
 * XREFs of PpmHeteroDistributeUtility @ 0x1401F34F4
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140076840 (PpmParkDistributeUtility.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1401F2A74 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  __int64 *v0; // r13
  unsigned int v1; // edi
  unsigned int v2; // ecx
  __int64 v3; // rsi
  char *v4; // rbx
  __int64 v5; // r14
  char v6; // r15
  __int16 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // si
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int16 *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  __int16 v18; // [rsp+40h] [rbp-10h]
  ULONG v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 i; // [rsp+98h] [rbp+48h]

  PpmParkDistributeUtility();
  if ( PpmHeteroPolicy == 4 )
  {
    v0 = PpmCurrentProfile;
    v1 = 0;
    v2 = PpmParkNumNodes;
    v3 = 1392LL * dword_1402DE28C;
    for ( i = v3; v1 < v2; ++v1 )
    {
      v4 = (char *)PpmParkNodes + 120 * v1;
      v5 = ~*((_QWORD *)v4 + 4);
      if ( (v5 & *((_QWORD *)v4 + 3)) != 0 )
      {
        v6 = 0;
        v7 = *((_WORD *)v4 + 2);
        v8 = *((_QWORD *)v4 + 3) & *((_QWORD *)v4 + 5);
        v19 = 0;
        v16 = 0LL;
        v17 = v5 & v8;
        v18 = v7;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v16) )
        {
          v9 = *(_QWORD *)(KeGetPrcb(v19) + 24168);
          if ( v9 )
          {
            v6 = *((_BYTE *)v0 + v3 + 1425);
            *(_BYTE *)(v9 + 187) = v6;
          }
        }
        v10 = *((_QWORD *)v4 + 2);
        v11 = 0;
        v19 = 0;
        v12 = v5 & v10;
        v16 = 0LL;
        v13 = i;
        v17 = v12;
        v18 = v7;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v16) )
        {
          v14 = *(_QWORD *)(KeGetPrcb(v19) + 24168);
          if ( v14 )
          {
            v11 = *((_BYTE *)v0 + v13 + 1424);
            *(_BYTE *)(v14 + 186) = v11;
          }
        }
        PpmEventTraceHeteroDistributeUtility((__int64)v4, v11, v6);
        v2 = PpmParkNumNodes;
        v3 = v13;
      }
    }
  }
  return 1;
}

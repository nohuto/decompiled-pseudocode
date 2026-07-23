/*
 * XREFs of PpmHeteroDistributeUtility @ 0x14020AD4C
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmParkDistributeUtility @ 0x1400D2710 (PpmParkDistributeUtility.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14020C9E0 (PpmEventTraceHeteroDistributeUtility.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int16 *v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int16 v20; // [rsp+40h] [rbp-10h]
  ULONG v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 i; // [rsp+98h] [rbp+48h]

  PpmParkDistributeUtility();
  if ( PpmHeteroPolicy == 4 )
  {
    v0 = PpmCurrentProfile;
    v1 = 0;
    v2 = PpmParkNumNodes;
    v3 = 1392LL * dword_140303D4C;
    for ( i = v3; v1 < v2; ++v1 )
    {
      v4 = (char *)PpmParkNodes + 120 * v1;
      v5 = ~*((_QWORD *)v4 + 4);
      if ( (v5 & *((_QWORD *)v4 + 3)) != 0 )
      {
        v6 = 0;
        v7 = *((_WORD *)v4 + 2);
        v8 = *((_QWORD *)v4 + 3) & *((_QWORD *)v4 + 5);
        v21 = 0;
        v18 = 0LL;
        v19 = v5 & v8;
        v20 = v7;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v18) )
        {
          v9 = *(_QWORD *)(KeGetPrcb(v21) + 24168);
          if ( v9 )
          {
            v6 = *((_BYTE *)v0 + v3 + 1425);
            *(_BYTE *)(v9 + 187) = v6;
          }
        }
        v10 = *((_QWORD *)v4 + 2);
        v11 = 0;
        v21 = 0;
        v12 = v5 & v10;
        v18 = 0LL;
        v13 = i;
        v19 = v12;
        v20 = v7;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v21, &v18) )
        {
          v16 = *(_QWORD *)(KeGetPrcb(v21) + 24168);
          if ( v16 )
          {
            v11 = *((_BYTE *)v0 + v13 + 1424);
            *(_BYTE *)(v16 + 186) = v11;
          }
        }
        LOBYTE(v15) = v6;
        LOBYTE(v14) = v11;
        PpmEventTraceHeteroDistributeUtility(v4, v14, v15);
        v2 = PpmParkNumNodes;
        v3 = v13;
      }
    }
  }
  return 1;
}

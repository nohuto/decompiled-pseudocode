/*
 * XREFs of CmpLogTransactionAbortedByName @ 0x1401AA574
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

int __fastcall CmpLogTransactionAbortedByName(unsigned __int16 *a1, int a2, __int64 a3, unsigned int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v6; // rbx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int64 v14; // [rsp+70h] [rbp+27h]
  _DWORD v15[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+5Fh] BYREF

  if ( a4 )
  {
    v4 = &retaddr;
    v6 = a4;
    do
    {
      if ( stru_1402CFD30.LevelPlus1 > 4 )
      {
        v13 = 0;
        v15[1] = 0;
        v18 = 0;
        v11 = v15;
        v14 = *((_QWORD *)a1 + 1);
        v15[0] = *a1;
        v16 = &v9;
        v9 = a2;
        v12 = 2;
        v17 = 4;
        LODWORD(v4) = TlgWrite(&stru_1402CFD30, &unk_1402535C8, 0LL, 0LL, 5u, &pData);
      }
      --v6;
    }
    while ( v6 );
  }
  return (int)v4;
}

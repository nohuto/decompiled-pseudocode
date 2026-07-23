/*
 * XREFs of KeAddSystemServiceTable @ 0x1405698CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall KeAddSystemServiceTable(int *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v7; // r9d
  int v8; // r10d
  int *v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r10d
  int *v14; // rdi
  int v15; // edx
  __int64 v16; // rax

  if ( (unsigned int)(a5 - 1) <= 1 )
  {
    v7 = 0;
    if ( a5 == 2 )
    {
      if ( !(_QWORD)xmmword_1403AA820 )
        goto LABEL_11;
    }
    else if ( !(_QWORD)xmmword_1403AA7E0 && !(_QWORD)xmmword_1403AA7A0 )
    {
      if ( a5 == 1 )
      {
        *((_QWORD *)&xmmword_1403AA7B0 + 1) = a4;
        *(_QWORD *)&xmmword_1403AA7A0 = a1;
        v8 = (_DWORD)a1 + KiTableInformation + (unsigned int)&xmmword_1403AA7A0;
        LODWORD(xmmword_1403AA7B0) = a3;
        if ( a3 )
        {
          v9 = a1;
          do
          {
            v10 = *v9;
            v11 = *v9++;
            v8 = ++v7 * ((v10 + *(int *)((char *)a1 + (v11 >> 4))) ^ v8);
          }
          while ( v7 < a3 );
        }
        KiTableInformation += 2 * v8;
        return 1;
      }
LABEL_11:
      v12 = 2LL * (unsigned int)(a5 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v12] = a1;
      LODWORD(xmmword_1403AA810[v12]) = a3;
      *((_QWORD *)&xmmword_1403AA810[v12] + 1) = a4;
      if ( a5 == 2 )
      {
        v13 = (unsigned int)&xmmword_1403AA820 + KiTableInformation + xmmword_1403AA820;
        if ( (_DWORD)xmmword_1403AA830 )
        {
          v14 = (int *)xmmword_1403AA820;
          do
          {
            v15 = *v14;
            v16 = *v14++;
            v13 = ++v7 * ((v15 + *(_DWORD *)((v16 >> 4) + xmmword_1403AA820)) ^ v13);
          }
          while ( v7 < (unsigned int)xmmword_1403AA830 );
        }
        KiTableInformation += 2 * v13;
      }
      return 1;
    }
  }
  return 0;
}

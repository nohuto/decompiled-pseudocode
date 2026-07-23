/*
 * XREFs of IovpAdvanceStackDownwards @ 0x14070A750
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x14070B0E0 (IovpCompleteRequest1.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall IovpAdvanceStackDownwards(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  BOOL v9; // ebx
  unsigned __int8 *v10; // rdi
  int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // r13
  _QWORD *v16; // rsi
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // [rsp+60h] [rbp+8h]
  unsigned __int8 *v21; // [rsp+78h] [rbp+20h]

  v9 = a4 == 0;
  v10 = (unsigned __int8 *)(120LL * a2 + a1 - 120);
  v21 = v10;
  if ( !*v10 && a7 )
  {
    memset(v10, 0, 0x78uLL);
    *((_QWORD *)v10 + 3) = v10 + 16;
    *((_QWORD *)v10 + 2) = v10 + 16;
    *((_QWORD *)v10 + 4) = a3;
  }
  v11 = 0;
  if ( v9 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
  }
  else if ( a5 <= 0 )
  {
    v13 = *((_QWORD *)v10 + 1);
    v12 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)&v10[120 * a5 + 8];
    v12 = *(_QWORD *)&v10[120 * a5 + 40];
    *((_QWORD *)v10 + 1) = v13;
    v15 = &v10[120 * a5 + 48];
    v14 = &v10[120 * a5 + 56];
    v11 = *(_DWORD *)&v10[120 * a5 + 4] & 0x10000000;
    *((_DWORD *)v10 + 1) |= v11;
  }
  if ( a5 > 1 )
  {
    v16 = v10 + 16;
    v19 = (unsigned int)(a5 - 1);
    v17 = a3;
    do
    {
      v16 += 15;
      v17 += 72LL;
      memset(v16 - 2, 0, 0x78uLL);
      v16[1] = v16;
      *v16 = v16;
      *((_BYTE *)v16 - 16) = 1;
      v16[2] = v17;
      *(v16 - 1) = v13;
      v16[4] = *(_QWORD *)v15;
      v16[5] = *(_QWORD *)v14;
      v16[3] = v12;
      *((_DWORD *)v16 - 3) |= v11 | 0x800000;
      --v19;
    }
    while ( v19 );
    v10 = v21;
  }
  *a8 = v10;
  if ( !a7 )
    return *v10;
  if ( a6 )
    *((_QWORD *)v10 + 1) = v10;
  result = *v10;
  *v10 = 1;
  return result;
}

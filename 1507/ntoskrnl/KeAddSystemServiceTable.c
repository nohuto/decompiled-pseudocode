/*
 * XREFs of KeAddSystemServiceTable @ 0x1405B20F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall KeAddSystemServiceTable(int *a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v6; // r9d
  int v7; // r8d
  int *v8; // rbx
  int v9; // edx
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a5 != 1 || (_QWORD)xmmword_1403D17E0 || (_QWORD)xmmword_1403D17A0 )
    return 0;
  *((_QWORD *)&xmmword_1403D17B0 + 1) = a4;
  v6 = 0;
  LODWORD(xmmword_1403D17B0) = a3;
  *(_QWORD *)&xmmword_1403D17A0 = a1;
  v7 = (unsigned int)&xmmword_1403D17A0 + (_DWORD)a1;
  if ( a3 )
  {
    v8 = a1;
    do
    {
      v9 = *v8;
      ++v6;
      v10 = *v8++;
      v7 = v6 * ((v9 + *(int *)((char *)a1 + (v10 >> 4))) ^ v7);
    }
    while ( v6 < a3 );
  }
  KiTableInformation += 2 * v7;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return 1;
}

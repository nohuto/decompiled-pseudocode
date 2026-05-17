/*
 * XREFs of RtlNumberOfSetBits @ 0x18008B250
 * Callers:
 *     RtlNumberOfClearBits @ 0x18008B230 (RtlNumberOfClearBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBits(unsigned int *a1)
{
  char *v1; // r11
  int v2; // esi
  int v3; // r14d
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // r9d
  unsigned int v7; // edi
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r9d
  int i; // r10d
  char v12; // cl
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v18; // edi
  char v19; // cl

  v1 = (char *)*((_QWORD *)a1 + 1);
  v2 = *a1 & 7;
  v3 = *a1;
  v4 = *a1 >> 3;
  v5 = 0;
  v6 = (unsigned __int8)v1 & 7;
  v7 = v4 + (v2 != 0);
  if ( 8 - (unsigned __int64)(a1[2] & 7) > (unsigned __int64)*a1 >> 3 )
  {
    v9 = 0;
    v8 = v7;
    v10 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v4 - (8 - (_BYTE)v6)) & 7;
    if ( v2 )
      ++v9;
    v10 = v7 - v9 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *v1++;
    if ( i == v7 - 1 && v2 )
      v12 &= byte_180111120[v3 & 7];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v12];
  }
  if ( v10 )
  {
    v13 = ((v10 - 1) >> 3) + 1;
    v14 = v13;
    i += 8 * v13;
    do
    {
      v15 = *(_QWORD *)v1;
      v16 = *(_QWORD *)v1;
      v1 += 8;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v14;
    }
    while ( v14 );
  }
  if ( v9 )
  {
    v18 = v7 - 1;
    do
    {
      v19 = *v1++;
      if ( i == v18 && v2 )
        v19 &= byte_180111120[v3 & 7];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v19];
      --v9;
    }
    while ( v9 );
  }
  return v5;
}

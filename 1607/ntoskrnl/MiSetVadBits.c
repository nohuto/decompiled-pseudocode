/*
 * XREFs of MiSetVadBits @ 0x14065B614
 * Callers:
 *     MiUpdateVadBits @ 0x14046C99C (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r14
  _RTL_BITMAP *v8; // r11
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  int v11; // ebp
  unsigned int v12; // edx
  unsigned int v13; // r8d

  v1 = 0;
  v2 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v3 = *(unsigned __int8 *)(a1 + 33) << 28;
  v4 = *(_DWORD *)(a1 + 28);
  v5 = qword_140327FD0;
  v6 = (v4 >> 4) | v3;
  v7 = 0LL;
  do
  {
    v8 = (_RTL_BITMAP *)(v7 + v5);
    v9 = 8 * (*(_DWORD *)(v7 + v5 + 276840472) - v5);
    if ( v6 < v9 )
      goto LABEL_10;
    v10 = v9 + v8[17302529].SizeOfBitMap;
    if ( v2 >= v10 )
      goto LABEL_10;
    v11 = 0;
    v12 = v2;
    if ( v2 < v9 )
    {
      v12 = 8 * (*(_DWORD *)(v7 + v5 + 276840472) - v5);
      v11 = 1;
    }
    v13 = v6;
    if ( v6 >= v10 )
    {
      v13 = v10 - 1;
      v11 = 1;
    }
    RtlSetBits(v8 + 17302529, v12 - v9, v13 - v12 + 1);
    if ( !v11 )
      break;
    v5 = qword_140327FD0;
LABEL_10:
    ++v1;
    v7 += 40LL;
  }
  while ( v1 < 2 );
}

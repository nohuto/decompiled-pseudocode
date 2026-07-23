/*
 * XREFs of MmGetPageFileInformation @ 0x1404B2420
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall MmGetPageFileInformation(__int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v5; // r13d
  unsigned int v6; // r10d
  unsigned int v8; // r14d
  ULONG v9; // eax
  ULONG v10; // esi
  unsigned int v11; // ebx
  __int64 v12; // rdi
  int *v13; // r8
  char v14; // al
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // ebx
  int v19; // r11d
  int v20; // r8d
  __int64 result; // rax
  __int128 v22; // [rsp+38h] [rbp-50h]
  unsigned int v23; // [rsp+90h] [rbp+8h]
  ULONG v26; // [rsp+A8h] [rbp+20h]

  v5 = a3;
  v6 = a2;
  v8 = a3 != 0 ? 40 : 32;
  *a4 = 0;
  v9 = Count;
  v26 = Count;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = 0;
  v11 = 0;
  v12 = a1;
  while ( v10 < v9 )
  {
    v13 = *(int **)&MiSystemPartition[2 * v10 + 1576];
    v14 = *((_BYTE *)v13 + 204);
    if ( (v14 & 0x10) == 0 && (v14 & 0x40) == 0 )
    {
      v12 = a1 + v11;
      v15 = v11 + v8;
      if ( v11 + v8 <= v11 || v15 > v6 )
      {
        *a4 = v15;
        return 3221225476LL;
      }
      v16 = *v13;
      v17 = v13[6];
      v18 = v13[8];
      v19 = v13[4];
      v20 = v13[2];
      while ( v17 >= v16 )
        ;
      *(_DWORD *)(v12 + 4) = v16;
      *(_DWORD *)(v12 + 8) = v16 - v17 - 2;
      *(_DWORD *)(v12 + 12) = v18;
      if ( v5 )
      {
        *(_DWORD *)(v12 + 32) = v19;
        *(_DWORD *)(v12 + 36) = v20;
      }
      WORD3(v22) = 0;
      LOWORD(v22) = *(_WORD *)(*(_QWORD *)&MiSystemPartition[2 * v10 + 1576] + 96LL);
      *(_DWORD *)((char *)&v22 + 2) = (unsigned __int16)(v22 + 2);
      *((_QWORD *)&v22 + 1) = v12 + v8;
      *(_OWORD *)(v12 + 16) = v22;
      v23 = (*(_DWORD *)((char *)&v22 + 2) + 7) & 0xFFFFFFF8;
      v11 = v23 + v15;
      if ( v23 + v15 > v6 || v11 <= v15 )
      {
        *a4 = v11;
        return 3221225476LL;
      }
      memmove(
        (void *)(v12 + v8),
        *(const void **)(*(_QWORD *)&MiSystemPartition[2 * v10 + 1576] + 104LL),
        (unsigned __int16)v22);
      *(_WORD *)(v12 + v8 + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1)) = 0;
      *(_DWORD *)v12 = v8 + v23;
      v6 = a2;
      v5 = a3;
    }
    ++v10;
    v9 = v26;
  }
  result = 0LL;
  *(_DWORD *)v12 = 0;
  *a4 = v11;
  return result;
}

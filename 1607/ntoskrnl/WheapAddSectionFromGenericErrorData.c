/*
 * XREFs of WheapAddSectionFromGenericErrorData @ 0x140230A44
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140230B4C (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall WheapAddSectionFromGenericErrorData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int v6; // eax
  unsigned int v8; // r9d
  unsigned int v10; // ebx
  unsigned int *v11; // rdx
  unsigned int v12; // r9d
  unsigned int *v13; // rdx
  unsigned int v14; // r11d
  const GUID *v15; // rcx
  unsigned int v16; // edi

  v6 = *(unsigned __int16 *)(a2 + 10);
  v8 = *(_DWORD *)(a1 + 24);
  if ( v6 >= v8 )
    return (unsigned int)-1073741789;
  v11 = (unsigned int *)(a2 + 128);
  v10 = 0;
  if ( (_WORD)v6 )
  {
    v13 = &v11[18 * (v6 - 1)];
    v12 = *v13 + v13[1];
    v11 = v13 + 18;
  }
  else
  {
    v12 = 72 * v8 + 128;
  }
  if ( a6 )
  {
    v14 = 64;
    v15 = (const GUID *)a4;
    if ( *(_WORD *)(a4 + 20) == 768 )
      v14 = 72;
    v16 = *(_DWORD *)(a4 + 24);
  }
  else
  {
    v16 = a5;
    v15 = &GENERIC_SECTION_GUID;
    v14 = 0;
  }
  if ( a3 - v12 < v16 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *v11 = v12;
    v11[1] = v16;
    *((_WORD *)v11 + 4) = 768;
    *((_BYTE *)v11 + 10) = *(_BYTE *)(a4 + 22);
    v11[3] = *(unsigned __int8 *)(a4 + 23);
    *((GUID *)v11 + 1) = *v15;
    *((_OWORD *)v11 + 2) = *(_OWORD *)(a4 + 28);
    v11[12] = *(_DWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 13) = *(_OWORD *)(a4 + 44);
    v11[17] = *(_DWORD *)(a4 + 60);
    memmove((void *)(a2 + v12), (const void *)(a4 + v14), v16);
    ++*(_WORD *)(a2 + 10);
  }
  return v10;
}

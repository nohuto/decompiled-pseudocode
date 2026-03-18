/*
 * XREFs of WheapAddSectionFromGenericErrorData @ 0x140216A9C
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140216B94 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall WheapAddSectionFromGenericErrorData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        size_t Size,
        char a6)
{
  unsigned int v6; // eax
  unsigned int v8; // r9d
  unsigned int v11; // ebx
  unsigned int *v12; // rdx
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  size_t v15; // r8
  const GUID *v16; // rcx
  unsigned int v17; // esi

  v6 = *(unsigned __int16 *)(a2 + 10);
  v8 = *(_DWORD *)(a1 + 24);
  if ( v6 >= v8 )
    return (unsigned int)-1073741789;
  v12 = (unsigned int *)(a2 + 128);
  v11 = 0;
  if ( (_WORD)v6 )
  {
    v14 = &v12[18 * (v6 - 1)];
    v13 = *v14 + v14[1];
    v12 = v14 + 18;
  }
  else
  {
    v13 = 72 * v8 + 128;
  }
  if ( a6 )
  {
    v15 = *(unsigned int *)(a4 + 24);
    v16 = (const GUID *)a4;
    v17 = 64;
  }
  else
  {
    v15 = (unsigned int)Size;
    v16 = &GENERIC_SECTION_GUID;
    v17 = 0;
  }
  if ( a3 - v13 < (unsigned int)v15 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *v12 = v13;
    *((_WORD *)v12 + 4) = 513;
    v12[1] = v15;
    *((_BYTE *)v12 + 10) = *(_BYTE *)(a4 + 22);
    v12[3] = *(unsigned __int8 *)(a4 + 23);
    *((GUID *)v12 + 1) = *v16;
    *((_OWORD *)v12 + 2) = *(_OWORD *)(a4 + 28);
    v12[12] = *(_DWORD *)(a4 + 16);
    *(_OWORD *)(v12 + 13) = *(_OWORD *)(a4 + 44);
    v12[17] = *(_DWORD *)(a4 + 60);
    memmove((void *)(a2 + v13), (const void *)(a4 + v17), v15);
    ++*(_WORD *)(a2 + 10);
  }
  return v11;
}

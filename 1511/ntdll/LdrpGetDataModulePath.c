/*
 * XREFs of LdrpGetDataModulePath @ 0x18003D1CC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x18003D390 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x18003EFF0 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x18009B430 (wcsrchr.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall LdrpGetDataModulePath(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        wchar_t **a5,
        _DWORD *a6,
        _QWORD *a7)
{
  int LoadAsEntry; // ebx
  __int64 v11; // rdi
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // rdi
  wchar_t *v16; // rcx
  wchar_t *v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ecx
  _BYTE v21[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  memset(&v21[8], 0, 0x28uLL);
  if ( (a1 & 3) != 0 )
  {
    LoadAsEntry = LdrpGetLoadAsEntry(a1, v21);
    if ( LoadAsEntry < 0 )
      return (unsigned int)LoadAsEntry;
    v15 = *(_BYTE **)&v21[8];
    v16 = wcsrchr(*(const wchar_t **)&v21[8], 0x5Cu);
    if ( !v16 )
      return (unsigned int)-1073741767;
    v17 = v16 + 1;
    v18 = -1LL;
    *a5 = v17;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * (((char *)v17 - v15) >> 1);
    *a6 = 2 * v18;
    *a4 = v19;
    if ( v19 < 0x2BE )
    {
      memmove(a2, v15, v19);
      v13 = a7;
      if ( a7 )
      {
        v14 = *(_QWORD *)&v21[40];
        if ( *(_QWORD *)&v21[40] != -1LL )
          goto LABEL_15;
      }
      return (unsigned int)LoadAsEntry;
    }
    return (unsigned int)-2147483643;
  }
  LoadAsEntry = LdrFindEntryForAddress(a1, &v22);
  if ( LoadAsEntry < 0 )
    return (unsigned int)LoadAsEntry;
  v11 = v22;
  v12 = *(unsigned __int16 *)(v22 + 72) - *(unsigned __int16 *)(v22 + 88);
  *a4 = v12;
  if ( v12 > *(unsigned __int16 *)(v11 + 72) || v12 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, *(const void **)(v11 + 80), v12);
  *a5 = *(wchar_t **)(v11 + 96);
  *a6 = *(unsigned __int16 *)(v11 + 88);
  v13 = a7;
  if ( a7 )
  {
    v14 = *(_QWORD *)(v11 + 136);
LABEL_15:
    *v13 = v14;
  }
  return (unsigned int)LoadAsEntry;
}

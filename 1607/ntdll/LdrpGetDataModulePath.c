/*
 * XREFs of LdrpGetDataModulePath @ 0x18002C940
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x18002CAB8 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180076030 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x18009C7D0 (wcsrchr.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
  int EntryForAddress; // ebx
  _BYTE *v11; // rdi
  wchar_t *v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rdi
  unsigned int v20; // eax
  _BYTE v21[48]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v22 = 0LL;
  memset(&v21[8], 0, 0x28uLL);
  if ( (a1 & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(a1, &v22);
    if ( EntryForAddress < 0 )
      return (unsigned int)EntryForAddress;
    v19 = v22;
    v20 = *(unsigned __int16 *)(v22 + 72) - *(unsigned __int16 *)(v22 + 88);
    *a4 = v20;
    if ( v20 <= *(unsigned __int16 *)(v19 + 72) && v20 < 0x2BE )
    {
      memmove(a2, *(const void **)(v19 + 80), v20);
      *a5 = *(wchar_t **)(v19 + 96);
      *a6 = *(unsigned __int16 *)(v19 + 88);
      v16 = a7;
      if ( !a7 )
        return (unsigned int)EntryForAddress;
      v17 = *(_QWORD *)(v19 + 136);
      goto LABEL_9;
    }
    return (unsigned int)-2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry(a1, v21);
  if ( EntryForAddress < 0 )
    return (unsigned int)EntryForAddress;
  v11 = *(_BYTE **)&v21[8];
  v12 = wcsrchr(*(const wchar_t **)&v21[8], 0x5Cu);
  if ( !v12 )
    return (unsigned int)-1073741767;
  v13 = v12 + 1;
  v14 = -1LL;
  *a5 = v13;
  do
    ++v14;
  while ( v13[v14] );
  v15 = 2 * (((char *)v13 - v11) >> 1);
  *a6 = 2 * v14;
  *a4 = v15;
  if ( v15 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, v11, v15);
  v16 = a7;
  if ( a7 )
  {
    v17 = *(_QWORD *)&v21[40];
    if ( *(_QWORD *)&v21[40] != -1LL )
LABEL_9:
      *v16 = v17;
  }
  return (unsigned int)EntryForAddress;
}

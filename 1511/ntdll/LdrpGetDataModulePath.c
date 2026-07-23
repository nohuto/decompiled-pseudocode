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
        PVOID DllHandle,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int16 **a5,
        _DWORD *a6,
        struct _ACTIVATION_CONTEXT **a7)
{
  NTSTATUS LoadAsEntry; // ebx
  PLDR_DATA_TABLE_ENTRY v11; // rdi
  unsigned int v12; // eax
  struct _ACTIVATION_CONTEXT **v13; // rcx
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // rax
  _BYTE *v15; // rdi
  wchar_t *v16; // rcx
  wchar_t *v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ecx
  _BYTE v21[48]; // [rsp+20h] [rbp-48h] BYREF
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+70h] [rbp+8h] BYREF

  Entry = 0LL;
  memset(&v21[8], 0, 0x28uLL);
  if ( ((unsigned __int8)DllHandle & 3) != 0 )
  {
    LoadAsEntry = LdrpGetLoadAsEntry(DllHandle, v21);
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
        EntryPointActivationContext = *(struct _ACTIVATION_CONTEXT **)&v21[40];
        if ( *(_QWORD *)&v21[40] != -1LL )
          goto LABEL_15;
      }
      return (unsigned int)LoadAsEntry;
    }
    return (unsigned int)-2147483643;
  }
  LoadAsEntry = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( LoadAsEntry < 0 )
    return (unsigned int)LoadAsEntry;
  v11 = Entry;
  v12 = Entry->FullDllName.Length - Entry->BaseDllName.Length;
  *a4 = v12;
  if ( v12 > v11->FullDllName.Length || v12 >= 0x2BE )
    return (unsigned int)-2147483643;
  memmove(a2, v11->FullDllName.Buffer, v12);
  *a5 = v11->BaseDllName.Buffer;
  *a6 = v11->BaseDllName.Length;
  v13 = a7;
  if ( a7 )
  {
    EntryPointActivationContext = v11->EntryPointActivationContext;
LABEL_15:
    *v13 = EntryPointActivationContext;
  }
  return (unsigned int)LoadAsEntry;
}

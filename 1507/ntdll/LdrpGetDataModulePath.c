/*
 * XREFs of LdrpGetDataModulePath @ 0x180069C68
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x180069DE0 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180069EB0 (LdrFindEntryForAddress.c)
 *     wcsrchr @ 0x180089C80 (wcsrchr.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
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
  NTSTATUS EntryForAddress; // ebx
  _BYTE *v11; // rdi
  wchar_t *v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  struct _ACTIVATION_CONTEXT **v16; // rcx
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // rax
  PLDR_DATA_TABLE_ENTRY v19; // rdi
  unsigned int v20; // eax
  _BYTE v21[48]; // [rsp+20h] [rbp-48h] BYREF
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+70h] [rbp+8h] BYREF

  Entry = 0LL;
  memset(&v21[8], 0, 0x28uLL);
  if ( ((unsigned __int8)DllHandle & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
    if ( EntryForAddress < 0 )
      return (unsigned int)EntryForAddress;
    v19 = Entry;
    v20 = Entry->FullDllName.Length - Entry->BaseDllName.Length;
    *a4 = v20;
    if ( v20 <= v19->FullDllName.Length && v20 < 0x2BE )
    {
      memmove(a2, v19->FullDllName.Buffer, v20);
      *a5 = v19->BaseDllName.Buffer;
      *a6 = v19->BaseDllName.Length;
      v16 = a7;
      if ( !a7 )
        return (unsigned int)EntryForAddress;
      EntryPointActivationContext = v19->EntryPointActivationContext;
      goto LABEL_9;
    }
    return (unsigned int)-2147483643;
  }
  EntryForAddress = LdrpGetLoadAsEntry(DllHandle, v21);
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
    EntryPointActivationContext = *(struct _ACTIVATION_CONTEXT **)&v21[40];
    if ( *(_QWORD *)&v21[40] != -1LL )
LABEL_9:
      *v16 = EntryPointActivationContext;
  }
  return (unsigned int)EntryForAddress;
}

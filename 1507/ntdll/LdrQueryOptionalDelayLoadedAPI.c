/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800BCC30
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800BCD54 (LdrpGetDelayloadDescriptor.c)
 */

NTSTATUS __cdecl LdrQueryOptionalDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCSTR DllName,
        PCSTR ProcedureName,
        ULONG Flags)
{
  __int64 DelayloadDescriptor; // rax
  const IMAGE_DELAYLOAD_DESCRIPTOR *v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // rcx
  char *v11; // r11
  __int64 v12; // rax
  __int64 v13; // r8
  const CHAR *v14; // rax
  const CHAR *v15; // rdi
  int v16; // r10d
  int v17; // r8d

  if ( Flags )
    return -1073741811;
  DelayloadDescriptor = LdrpGetDelayloadDescriptor(ParentModuleBase, DllName);
  v8 = (const IMAGE_DELAYLOAD_DESCRIPTOR *)DelayloadDescriptor;
  if ( !DelayloadDescriptor )
    return -1073741515;
  v9 = 0LL;
  v10 = (char *)ParentModuleBase + *(unsigned int *)(DelayloadDescriptor + 12);
  v11 = (char *)ParentModuleBase + *(unsigned int *)(DelayloadDescriptor + 16);
  if ( !*v10 )
    return -1073741511;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)&v11[v12 * 8];
    if ( v13 >= 0 )
    {
      v14 = (char *)ParentModuleBase + v13 + 2;
      v15 = (const CHAR *)(ProcedureName - v14);
      do
      {
        v16 = (unsigned __int8)v15[(_QWORD)v14];
        v17 = *(unsigned __int8 *)v14 - v16;
        if ( v17 )
          break;
        ++v14;
      }
      while ( v16 );
      if ( !v17 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    v12 = (unsigned int)v9;
    if ( !v10[v12] )
      return -1073741511;
  }
  return LdrResolveDelayLoadedAPI(ParentModuleBase, v8, 0LL, 0LL, (PIMAGE_THUNK_DATA)&v10[v9], 0) == 0LL
       ? 0xC0000139
       : 0;
}

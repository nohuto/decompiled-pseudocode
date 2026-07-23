/*
 * XREFs of ViXdvDriverLoadImage @ 0x14070515C
 * Callers:
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x14014ED30 (strcmp.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViXdvBindXdvDDIWrappers @ 0x140704F5C (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x140705040 (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvGetFuncAddress @ 0x1407052FC (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  char *v1; // rbp
  char v2; // si
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  char v6; // r12
  char *v7; // r13
  char v8; // r15
  __int64 v9; // rdi
  const char *v10; // r14
  __int64 (__fastcall *FuncAddress)(_QWORD); // rax
  __int64 (*v12)(void); // rax
  ULONG v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  v2 = 1;
  v3 = RtlImageDirectoryEntryToData(v1, 1u, 0, &v13);
  v4 = v3;
  if ( !v3 || !v3[6] )
    return 0;
  v6 = 0;
  v7 = &v1[v3[8]];
  v8 = 0;
  v9 = 0LL;
  do
  {
    v10 = &v1[*(unsigned int *)&v7[4 * v9]];
    if ( !strcmp("GetXdvDDIWrappers", v10) )
    {
      FuncAddress = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
      v6 = ViXdvBindXdvDDIWrappers(FuncAddress);
      if ( v6 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention DDI bound process\n");
    }
    else if ( !strcmp("GetXdvDriverEntryWrappers", v10) )
    {
      v12 = (__int64 (*)(void))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
      v8 = ViXdvBindXdvDriverEntryWrappers(v12);
      if ( v8 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention entry point bound process\n");
    }
    else if ( !strcmp("XdvHibernationNotification", v10) )
    {
      ViFnExtensionHiberFunc = (PVOID)ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
    }
    else if ( !strcmp("XdvNotifyExtensions", v10) )
    {
      ViFnXdvNotifyExtensions = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
    }
    else if ( !strcmp("XdvQueryDispatchTable", v10) )
    {
      ViFnXdvQueryDispatchTable = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v9);
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v4[6] );
  if ( !v6 || !v8 )
    return 0;
  return v2;
}

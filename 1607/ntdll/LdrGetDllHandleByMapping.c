/*
 * XREFs of LdrGetDllHandleByMapping @ 0x1800784B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C90 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByMapping @ 0x180078560 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800D2C9C (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int LoadedDllByMapping; // ebx
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  LoadedDllByMapping = RtlImageNtHeaderEx(1, a1, 0LL, &v10);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(a1, v10, &v12, &v11);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v11 >= 7 )
      {
        v8 = v12;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount(v12, v5, v6, v7);
        if ( LoadedDllByMapping >= 0 )
          *a2 = *(_QWORD *)(v8 + 48);
      }
      else
      {
        LoadedDllByMapping = -1073741515;
        v8 = v12;
      }
      LdrpDereferenceModule(v8, v5, v6, v7);
    }
  }
  return (unsigned int)LoadedDllByMapping;
}

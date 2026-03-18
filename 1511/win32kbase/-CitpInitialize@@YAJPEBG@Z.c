/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C0067DF4
 * Callers:
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 * Callees:
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00666F4 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0067EF8 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C006825C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpInitialize(unsigned __int16 *a1)
{
  const unsigned __int16 *v1; // rdx
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = a1;
  CitpParametersInitialize((struct _CIT_PARAMETERS *)&unk_1C0107118);
  qword_1C0107180 = 0LL;
  memset(&dword_1C0107188, 0, 0x50uLL);
  qword_1C01071B0 = MEMORY[0xFFFFF78000000008];
  qword_1C01071B8 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v1 = (const unsigned __int16 *)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  qword_1C01071C0 = (__int64)v1;
  LOBYTE(g_CompatImpact) = 1;
  dword_1C01071C8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x62u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&unk_1C0107118, v1);
  if ( !byte_1C010716C )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

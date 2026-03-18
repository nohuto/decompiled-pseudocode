/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378
 * Callers:
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0079FEC (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C007A47C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C007A774 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpInitialize(unsigned __int16 *a1)
{
  const unsigned __int16 *v1; // rdx
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = a1;
  CitpParametersInitialize((struct _CIT_PARAMETERS *)&unk_1C0101F88);
  qword_1C0101FE0 = 0LL;
  memset(&dword_1C0101FE8, 0, 0x50uLL);
  qword_1C0102010 = MEMORY[0xFFFFF78000000008];
  qword_1C0102018 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v1 = (const unsigned __int16 *)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  qword_1C0102020 = (__int64)v1;
  LOBYTE(g_CompatImpact) = 1;
  dword_1C0102028 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x63u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&unk_1C0101F88, v1);
  if ( !(_BYTE)dword_1C0101FD0 )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

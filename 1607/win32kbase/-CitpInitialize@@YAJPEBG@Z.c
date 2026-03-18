/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C005100C
 * Callers:
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 * Callees:
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0050C80 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C005110C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0051240 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00515B0 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpInitialize(unsigned __int16 *a1)
{
  const unsigned __int16 *v1; // rdx
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = a1;
  CitpParametersInitialize((struct _CIT_PARAMETERS *)&unk_1C011E568);
  memset(&qword_1C011E5D0, 0, 0x58uLL);
  qword_1C011E600 = MEMORY[0xFFFFF78000000008];
  qword_1C011E608 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v1 = (const unsigned __int16 *)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  qword_1C011E610 = (__int64)v1;
  dword_1C011E618 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  LOBYTE(g_CompatImpact) = 1;
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x62u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&unk_1C011E568, v1);
  if ( !byte_1C011E5BC )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

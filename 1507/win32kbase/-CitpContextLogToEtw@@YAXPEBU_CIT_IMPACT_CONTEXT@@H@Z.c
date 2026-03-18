/*
 * XREFs of ?CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z @ 0x1C00E2CD4
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E177C (--$CitpBaseDataLogToEtw@U_CIT_SYSTEM_DATA@@@@YAXPEBU_CIT_SYSTEM_DATA@@PEBU_CIT_BASE_DATA_LOG_CON.c)
 *     ??$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@@Z @ 0x1C00E1D14 (--$CitpBaseDataLogToEtw@U_CIT_USE_DATA@@@@YAXPEBU_CIT_USE_DATA@@PEBU_CIT_BASE_DATA_LOG_CONTEXT@@.c)
 *     ?CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z @ 0x1C00E3298 (-CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z.c)
 */

void __fastcall CitpContextLogToEtw(const struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  UINT v4; // ebx
  __int64 v5; // r15
  int v6; // edx
  bool v7; // zf
  unsigned int v8; // r8d
  UINT v9; // ecx
  UINT i; // edi
  __int64 v11; // rbx
  unsigned int v12; // [rsp+20h] [rbp-E0h]
  _QWORD v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v16[128]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v17[128]; // [rsp+180h] [rbp+80h] BYREF

  v4 = 6 * uMultiplier;
  v5 = Win32AllocPool();
  if ( v5 )
  {
    memset(v13, 0, sizeof(v13));
    v13[0] = a1;
    LODWORD(v13[7]) = a2;
    v13[2] = v5;
    LODWORD(v13[3]) = v4;
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
    v6 = *((_DWORD *)a1 + 92) + *((_DWORD *)a1 + 91) + 1;
    v7 = *((_DWORD *)a1 + 60) == 0;
    v13[1] = LocalTime.QuadPart;
    HIDWORD(v13[3]) = v6;
    if ( !v7 )
      HIDWORD(v13[3]) = v6 + 1;
    v13[5] = L"SystemData";
    v13[6] = &word_1C008A410;
    CitpBaseDataLogToEtw<_CIT_SYSTEM_DATA>((__int64)a1, (__int64)v13);
    ++LODWORD(v13[4]);
    if ( *((_DWORD *)a1 + 60) )
    {
      v13[6] = &word_1C008A410;
      v13[5] = L"OverflowData";
      CitpBaseDataLogToEtw<_CIT_USE_DATA>((__int64)a1 + 216, (__int64)v13);
      ++LODWORD(v13[4]);
    }
    v9 = dword_1C0101F8C;
    for ( i = 0; i < v9; ++i )
    {
      v11 = *((_QWORD *)a1 + 38) + 168LL * i;
      if ( *(_BYTE *)(v11 + 34) || *(_BYTE *)(v11 + 35) )
      {
        CitpProgramIdToString((const struct _CIT_PROGRAM_ID *)(v11 + 40), v16, v8, v17, v12);
        v13[5] = v16;
        v13[6] = v17;
        if ( *(_DWORD *)(v11 + 72) == 1 )
        {
          HIDWORD(v13[7]) = 0;
        }
        else
        {
          v13[5] = *(_QWORD *)(v11 + 40);
          HIDWORD(v13[7]) = 1;
        }
        CitpBaseDataLogToEtw<_CIT_USE_DATA>(v11 + 80, (__int64)v13);
        ++LODWORD(v13[4]);
        v9 = dword_1C0101F8C;
      }
    }
    Win32FreePool();
  }
}

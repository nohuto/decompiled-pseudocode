/*
 * XREFs of WppInitGlobalLoggerWdf @ 0x1C0032B94
 * Callers:
 *     WppTraceCallbackWdf @ 0x1C0032AD0 (WppTraceCallbackWdf.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C00368C6 (wcscmp_0.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     WppGuidToStr @ 0x1C005F498 (WppGuidToStr.c)
 */

void __fastcall WppInitGlobalLoggerWdf(
        wchar_t *LoggerName,
        const _GUID *pControlGuid,
        unsigned __int64 *pLogger,
        unsigned int *pFlags,
        unsigned __int8 *pLevel)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  SIZE_T v17; // r14
  char *PoolWithTag; // rax
  char *v19; // rdi
  __int64 v20; // r8
  const wchar_t *v21; // rdx
  size_t v22; // r8
  char *v23; // rcx
  PVOID SystemRoutineAddress; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  PVOID v31; // rax
  int v32; // ebx
  unsigned __int8 *v33; // rcx
  unsigned int aZero; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int Lstart; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int Llevel; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int Lflags; // [rsp+3Ch] [rbp-C4h] BYREF
  const _GUID *ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING LoggerNameStr; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v40; // [rsp+58h] [rbp-A8h]
  _RTL_QUERY_REGISTRY_TABLE parms[3]; // [rsp+60h] [rbp-A0h] BYREF

  ReturnLength = pControlGuid;
  v40 = pLevel;
  v7 = -1LL;
  Lflags = 0;
  v8 = -1LL;
  Llevel = 0;
  Lstart = 0;
  aZero = 0;
  v10 = 0;
  do
    ++v8;
  while ( LoggerName[v8] );
  if ( v8 <= 0x7FFFFFFF )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( LoggerName[v11] );
    v12 = -1LL;
    do
      ++v12;
    while ( asc_1C0037AB0[v12] );
    v13 = v12 + v11;
    v14 = -1LL;
    do
      ++v14;
    while ( aWmiAutologger[v14] );
    v15 = v14 + v13;
    v16 = -1LL;
    do
      ++v16;
    while ( aWmiGloballogge[v16] );
    v17 = (unsigned int)(2 * (v16 + v15) + 76);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x45435453u);
    v19 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v17);
      if ( !wcscmp_0(LoggerName, L"GlobalLogger") )
      {
        v10 = 1;
        v20 = -1LL;
        v21 = L"WMI\\GlobalLogger\\";
        do
          ++v20;
        while ( aWmiGloballogge[v20] );
        v22 = 2 * v20;
        v23 = v19;
      }
      else
      {
        v25 = -1LL;
        do
          ++v25;
        while ( aWmiAutologger[v25] );
        memmove(v19, L"WMI\\AutoLogger\\", (unsigned int)(2 * v25));
        v26 = -1LL;
        do
          ++v26;
        while ( LoggerName[v26] );
        v27 = (unsigned int)(2 * v26);
        v28 = -1LL;
        do
          ++v28;
        while ( *(_WORD *)&v19[2 * v28] );
        memmove(&v19[2 * v28], LoggerName, v27);
        v29 = -1LL;
        v21 = L"\\";
        do
          ++v29;
        while ( asc_1C0037AB0[v29] );
        v22 = (unsigned int)(2 * v29);
        v30 = -1LL;
        do
          ++v30;
        while ( *(_WORD *)&v19[2 * v30] );
        v23 = &v19[2 * v30];
      }
      memmove(v23, v21, v22);
      parms[0].QueryRoutine = 0LL;
      parms[0].DefaultType = 4;
      parms[0].Name = L"Start";
      parms[0].DefaultLength = 4;
      parms[0].EntryContext = &Lstart;
      parms[0].Flags = 32;
      parms[0].DefaultData = &aZero;
      parms[1].QueryRoutine = 0LL;
      parms[1].Flags = 0;
      RtlInitUnicodeString(&LoggerNameStr, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&LoggerNameStr);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      if ( ((int (__fastcall *)(__int64, char *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))SystemRoutineAddress)(
             2147483650LL,
             v19,
             parms,
             0LL,
             0LL) >= 0
        && Lstart )
      {
        parms[0].QueryRoutine = 0LL;
        parms[0].Flags = 32;
        parms[0].Name = L"Flags";
        parms[0].EntryContext = &Lflags;
        parms[0].DefaultData = &aZero;
        parms[0].DefaultType = 4;
        parms[1].Name = L"Level";
        parms[1].EntryContext = &Llevel;
        parms[1].DefaultData = &aZero;
        parms[0].DefaultLength = 4;
        parms[1].QueryRoutine = 0LL;
        parms[1].Flags = 32;
        parms[1].DefaultType = 4;
        parms[1].DefaultLength = 1;
        parms[2].QueryRoutine = 0LL;
        parms[2].Flags = 0;
        do
          ++v7;
        while ( *(_WORD *)&v19[2 * v7] );
        WppGuidToStr((wchar_t *)&v19[2 * (unsigned int)v7], ReturnLength);
        RtlInitUnicodeString(&LoggerNameStr, L"RtlQueryRegistryValuesEx");
        v31 = MmGetSystemRoutineAddress(&LoggerNameStr);
        if ( !v31 )
          v31 = RtlQueryRegistryValues;
        v32 = ((__int64 (__fastcall *)(__int64, char *, _RTL_QUERY_REGISTRY_TABLE *, _QWORD, _QWORD))v31)(
                2147483650LL,
                v19,
                parms,
                0LL,
                0LL);
        ExFreePoolWithTag(v19, 0x45435453u);
        if ( v32 >= 0 && Lstart == 1 )
        {
          if ( v10 )
          {
            *pLogger = 1LL;
          }
          else
          {
            LODWORD(ReturnLength) = 0;
            RtlInitUnicodeString(&LoggerNameStr, LoggerName);
            if ( WmiQueryTraceInformation(TraceHandleByNameClass, pLogger, 8u, (PULONG)&ReturnLength, &LoggerNameStr) < 0 )
              *pLogger = 0LL;
          }
          v33 = v40;
          *pFlags = Lflags & 0x7FFFFFFF;
          *v33 = Llevel;
        }
      }
      else
      {
        ExFreePoolWithTag(v19, 0x45435453u);
      }
    }
  }
}

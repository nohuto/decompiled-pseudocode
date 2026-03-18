/*
 * XREFs of PopHiberCheckResume @ 0x1403EFBB8
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x14018B250 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlRestoreEnlightenment @ 0x140195BAC (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E9568 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1401ECCE8 (HvlNotifyAcpiReenabled.c)
 *     MmUpdateHiberMappings @ 0x1403F02FC (MmUpdateHiberMappings.c)
 *     xHalPowerEarlyRestore @ 0x1403FB1C8 (xHalPowerEarlyRestore.c)
 *     xHalPciEarlyRestore @ 0x1403FB1CC (xHalPciEarlyRestore.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rsi
  char v1; // bl
  __int64 v2; // rbp
  unsigned __int64 v3; // r14
  char v4; // al
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  POPLOCK v11; // rcx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-168h] BYREF
  int v18; // [rsp+28h] [rbp-160h]
  __int64 v19; // [rsp+40h] [rbp-148h]
  __int64 v20; // [rsp+48h] [rbp-140h]
  __int128 v21; // [rsp+50h] [rbp-138h]
  __int128 v22; // [rsp+60h] [rbp-128h]

  v0 = qword_14032E680;
  v1 = 0;
  v2 = *(_QWORD *)(qword_14032E680 + 200);
  if ( *(_DWORD *)v2 )
  {
    off_1403219F8();
    v3 = __rdtsc();
    if ( *(_BYTE *)(v0 + 3) )
    {
      MmUpdateHiberMappings(1LL, v0 + 32);
      *(_BYTE *)(v0 + 4) = 1;
    }
    PoResumeFromHibernate = 1;
    off_140321880();
    off_1403219F8();
    off_140321980();
    if ( (HvlpFlags & 1) != 0 )
    {
      HvlRestoreEnlightenment();
      off_140321968(v11);
      if ( (HvlpFlags & 4) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    v4 = (char)KdDebuggerEnabled;
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
      v4 = (char)KdDebuggerEnabled;
    }
    if ( v4 && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume(*(_QWORD *)(v0 + 232), *(_QWORD *)(v0 + 240));
    if ( *(_QWORD *)(v2 + 904) )
    {
      v12 = *(_QWORD *)(v0 + 272);
      v13 = *(_OWORD *)(v2 + 904);
      v17 = 0LL;
      v14 = *(_OWORD *)(v2 + 920);
      v15 = *(_QWORD *)(v12 + 8);
      v18 = 80;
      v19 = 0LL;
      v20 = 0x4000LL;
      v21 = v13;
      v22 = v14;
      MmMapMemoryDumpMdlEx(v15, v5, (__int64)&v17, 1);
      v16 = *(_QWORD *)(v0 + 272);
      HIWORD(v18) |= 1u;
      memset(*(void **)(v16 + 8), 0, 0x4000uLL);
    }
    v6 = &qword_14032EBE0;
    v7 = 3LL;
    qword_1403254D8 = *(_QWORD *)(v2 + 880);
    v8 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v6 = *v8;
      *((_OWORD *)v6 + 1) = v8[1];
      *((_OWORD *)v6 + 2) = v8[2];
      *((_OWORD *)v6 + 3) = v8[3];
      *((_OWORD *)v6 + 4) = v8[4];
      *((_OWORD *)v6 + 5) = v8[5];
      *((_OWORD *)v6 + 6) = v8[6];
      v6 += 16;
      v9 = v8[7];
      v8 += 8;
      *((_OWORD *)v6 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)v6 = *v8;
    *((_OWORD *)v6 + 1) = v8[1];
    *((_OWORD *)v6 + 2) = v8[2];
    *((_OWORD *)v6 + 3) = v8[3];
    *((_OWORD *)v6 + 4) = v8[4];
    *((_OWORD *)v6 + 5) = v8[5];
    *(_DWORD *)(v0 + 224) = *(_DWORD *)(v2 + 632);
    *(_BYTE *)(v0 + 5) = 0;
    qword_14032ECA8 = v3;
    qword_14032EC38 = v3 - qword_14032EC40;
    if ( (HvlpFlags & 4) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}

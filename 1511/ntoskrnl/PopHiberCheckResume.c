/*
 * XREFs of PopHiberCheckResume @ 0x14039D7D4
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x14015B770 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlRestoreEnlightenment @ 0x140166DF4 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401B0B6C (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1401B2840 (HvlNotifyAcpiReenabled.c)
 *     MmUpdateHiberMappings @ 0x14039DF40 (MmUpdateHiberMappings.c)
 *     xHalPowerEarlyRestore @ 0x1403AAAB0 (xHalPowerEarlyRestore.c)
 *     xHalPciEarlyRestore @ 0x1403AAACC (xHalPciEarlyRestore.c)
 *     AlpcMessageDeleteProcedure @ 0x1404E2C00 (AlpcMessageDeleteProcedure.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
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

  v0 = qword_1402DE0C0;
  v1 = 0;
  v2 = *(_QWORD *)(qword_1402DE0C0 + 200);
  if ( *(_DWORD *)v2 )
  {
    off_1402D28A8();
    v3 = __rdtsc();
    if ( *(_BYTE *)(v0 + 3) )
    {
      MmUpdateHiberMappings(1LL, v0 + 32);
      *(_BYTE *)(v0 + 4) = 1;
    }
    PoResumeFromHibernate = 1;
    off_1402D2730();
    off_1402D28A8();
    off_1402D2830();
    if ( (HvlpFlags & 1) != 0 )
    {
      HvlRestoreEnlightenment();
      off_1402D2818(v11);
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
      MmMapMemoryDumpMdlEx(v15, v5, (__int64)&v17, 1LL);
      v16 = *(_QWORD *)(v0 + 272);
      HIWORD(v18) |= 1u;
      memset(*(void **)(v16 + 8), 0, 0x4000uLL);
    }
    v6 = &qword_1402DE620;
    v7 = 3LL;
    qword_1402D6398 = *(_QWORD *)(v2 + 880);
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
    qword_1402DE6E8 = v3;
    qword_1402DE678 = v3 - qword_1402DE680;
    if ( (HvlpFlags & 4) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}

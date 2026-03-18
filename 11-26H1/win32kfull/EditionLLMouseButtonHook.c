/*
 * XREFs of EditionLLMouseButtonHook @ 0x140173290
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkFirstValid @ 0x14003954C (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1401735F8 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // rsi
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  BOOL v12; // edi
  __int64 Valid; // r15
  unsigned int v15; // ecx
  __int64 v16; // xmm0_8
  int v17; // r12d
  int v18; // r13d
  __int64 v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v25; // [rsp+38h] [rbp-60h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  v8 = PtiCurrent(a1);
  if ( (unsigned __int8)IsInputThread() )
    v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18696);
  else
    v11 = (__int64)v8;
  v12 = *(_DWORD *)(a2 + 12) & 1;
  Valid = PhkFirstValid(v11, 14LL);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v25, "LowLevelMouseButtonHook", 0LL);
  v15 = 1;
  v16 = *((_QWORD *)v8 + 193);
  v17 = *((_DWORD *)v8 + 388);
  v18 = *((_DWORD *)v8 + 391);
  v28 = *((_QWORD *)v8 + 196);
  v26 = v16;
  v19 = *(_QWORD *)((char *)v8 + 1556);
  *((_QWORD *)v8 + 196) = a2;
  v27 = v19;
  if ( v7 )
  {
    v20 = *(_QWORD *)(W32GetUserGdiSessionState(1LL) + 40);
    v21 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL);
    if ( *(_QWORD *)v21 == v20 )
    {
      *(_QWORD *)((char *)v8 + 1556) = 0x2000LL;
    }
    else
    {
      *(_QWORD *)((char *)v8 + 1556) = *(_QWORD *)(v21 + 864);
      *((_DWORD *)v8 + 391) = *(_DWORD *)(v21 + 872);
    }
    v15 = 3;
  }
  else
  {
    *((_DWORD *)v8 + 389) = -1;
    *((_DWORD *)v8 + 390) = -1;
  }
  if ( !v12 || *(_DWORD *)(a4 + 12) )
  {
    *((_DWORD *)v8 + 386) = -1;
    *((_DWORD *)v8 + 387) = -1;
  }
  else
  {
    v23 = *((_QWORD *)v8 + 57);
    *((_QWORD *)v8 + 193) = *(_QWORD *)(v23 + 864);
    *((_DWORD *)v8 + 388) = *(_DWORD *)(v23 + 872);
  }
  v22 = xxxCallHook2(Valid, 0LL, a3, a2, v15);
  *((_QWORD *)v8 + 196) = v28;
  *((_QWORD *)v8 + 193) = v26;
  *(_QWORD *)((char *)v8 + 1556) = v27;
  *((_DWORD *)v8 + 391) = v18;
  *((_DWORD *)v8 + 388) = v17;
  if ( !v22 )
  {
    if ( !a5 || IsGpqForegroundAccessibleOnInputThread(v12, (const struct tagUIPI_INFO_INT *)a4) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v25);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v25);
  return 1LL;
}

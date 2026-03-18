/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00710D4 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E2EB4 (-CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0007504 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0014D80 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     TraceLoggingProviderEnabled @ 0x1C0057B24 (TraceLoggingProviderEnabled.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0079F80 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0079FEC (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z @ 0x1C00E2CD4 (-CitpContextLogToEtw@@YAXPEBU_CIT_IMPACT_CONTEXT@@H@Z.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E3400 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00E3578 (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00E3A18 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E3FD8 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2, int a3, void *a4)
{
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int v20; // eax
  char v21; // dl
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  bool v31; // cf
  unsigned int v32; // eax
  int v33; // edx
  unsigned int v34; // r10d
  __int64 v35; // rcx
  DWORD v36; // eax
  DWORD v37; // r8d
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // eax
  struct tagPROCESSINFO *v41; // rdi
  void *v42; // rsi
  HANDLE v43; // r14
  int v44; // eax
  NTSTATUS v45; // edi
  int v47; // eax
  UCHAR v48; // dl
  const struct _TlgProvider_t *v49; // rcx
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  char *v57; // rbx
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int64 v62; // rax
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Data; // [rsp+38h] [rbp-C8h] BYREF
  ULONG DataSize; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int128 v71; // [rsp+80h] [rbp-80h]
  __int128 v72; // [rsp+90h] [rbp-70h]
  __int128 v73; // [rsp+A0h] [rbp-60h]
  __int128 v74; // [rsp+B0h] [rbp-50h]
  __int128 v75; // [rsp+C0h] [rbp-40h]
  __int128 v76; // [rsp+D0h] [rbp-30h]
  __int128 v77; // [rsp+E0h] [rbp-20h]
  __int128 v78; // [rsp+F0h] [rbp-10h]
  __int128 v79; // [rsp+100h] [rbp+0h]
  __int128 v80; // [rsp+110h] [rbp+10h]
  __int128 v81; // [rsp+120h] [rbp+20h]
  __int128 v82; // [rsp+130h] [rbp+30h]
  __int128 v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+150h] [rbp+50h]
  _BYTE v85[16]; // [rsp+160h] [rbp+60h] BYREF
  WCHAR SourceString[40]; // [rsp+170h] [rbp+70h] BYREF

  Src = 0LL;
  Data = 0LL;
  KeyHandle = 0LL;
  v7 = *((_OWORD *)a1 + 1);
  v71 = *(_OWORD *)a1;
  v8 = *((_OWORD *)a1 + 2);
  v72 = v7;
  v9 = *((_OWORD *)a1 + 3);
  v73 = v8;
  v10 = *((_OWORD *)a1 + 4);
  v74 = v9;
  v11 = *((_OWORD *)a1 + 5);
  v75 = v10;
  v12 = *((_OWORD *)a1 + 6);
  v76 = v11;
  v13 = *((_OWORD *)a1 + 8);
  v77 = v12;
  v78 = *((_OWORD *)a1 + 7);
  v14 = *((_OWORD *)a1 + 9);
  v79 = v13;
  v15 = *((_OWORD *)a1 + 10);
  v80 = v14;
  v16 = *((_OWORD *)a1 + 11);
  v81 = v15;
  v17 = *((_OWORD *)a1 + 12);
  v18 = *((_QWORD *)a1 + 26);
  v82 = v16;
  v83 = v17;
  v84 = v18;
  v19 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  qword_1C0102000 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  qword_1C0102008 = LocalTime.QuadPart;
  if ( !*((_QWORD *)a1 + 52) && (unsigned __int8)RtlIsMultiSessionSku() || !*((_DWORD *)a1 + 92) )
    return (unsigned int)-1073741637;
  CitpStatIncrement((unsigned __int16 *)a1 + 99, 1);
  v20 = *((_DWORD *)a1 + 25);
  v22 = *(_DWORD *)&v21 & ((unsigned __int8)~*((_BYTE *)a1 + 432) >> 1);
  v23 = -1;
  v24 = *((_DWORD *)a1 + 24) + v22;
  if ( v24 >= *((_DWORD *)a1 + 24) )
    v23 = v24;
  v25 = v20 + a2 - *((_DWORD *)a1 + 115);
  *((_DWORD *)a1 + 24) = v23;
  v26 = -1;
  v27 = -1;
  if ( v25 >= v20 )
    v26 = v25;
  *((_DWORD *)a1 + 25) = v26;
  v28 = *((_DWORD *)a1 + 40);
  if ( (v19 - *((_QWORD *)a1 + 58)) / 0x2710uLL <= 0xFFFFFFFF )
    v27 = (v19 - *((_QWORD *)a1 + 58)) / 0x2710uLL;
  v29 = -1;
  v30 = v28 + (((unsigned __int8)~*((_BYTE *)a1 + 432) >> 1) & 1);
  v31 = v30 < v28;
  v32 = *((_DWORD *)a1 + 41);
  if ( !v31 )
    v29 = v30;
  *((_DWORD *)a1 + 40) = v29;
  v33 = -1;
  if ( v32 + v27 >= v32 )
    v33 = v32 + v27;
  *((_DWORD *)a1 + 41) = v33;
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 544), a2);
  v36 = *(_DWORD *)(v35 + 12);
  v37 = v36 - *((_DWORD *)a1 + 118);
  LODWORD(v35) = *((_DWORD *)a1 + 44);
  v38 = *((_DWORD *)a1 + 137) + v35 - *((_DWORD *)a1 + 119);
  SystemTime.LowPart = v36;
  v39 = v34;
  if ( v38 >= (unsigned int)v35 )
    v39 = v38;
  *((_DWORD *)a1 + 44) = v39;
  v40 = *((_DWORD *)a1 + 45);
  if ( v40 + v37 >= v40 )
    v34 = v40 + v37;
  *((_DWORD *)a1 + 45) = v34;
  if ( *((_DWORD *)a1 + 122) )
    CitpBitmapUpdateForTimeRange(a1, *((_DWORD *)a1 + 120), a2);
  v41 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
  if ( v41 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, a2, v41, 0LL, 0LL);
  }
  if ( BYTE2(dword_1C0101FD0) )
  {
    v47 = CitpEnsureDataKey(&KeyHandle);
    v43 = KeyHandle;
    v45 = v47;
    if ( v47 < 0
      || (v45 = CitpSavedDataPrune(KeyHandle), v45 < 0)
      || (v45 = CitpSavedDataPrepare(a1, (struct _CIT_PERSISTED_HEADER **)&Src, (unsigned int *)&Size), v45 < 0) )
    {
      v42 = Src;
    }
    else
    {
      v42 = Src;
      v45 = CitpSavedDataCompress(Src, (unsigned int)Size, &Data, &DataSize);
      if ( v45 >= 0 )
      {
        CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v85, *((void **)a1 + 52));
        CitpBytesToString(v85, 0x10u, SourceString);
        RtlInitUnicodeString(&DestinationString, SourceString);
        v45 = ZwSetValueKey(v43, &DestinationString, 0, 3u, Data, DataSize);
        if ( v45 >= 0 )
        {
          if ( TraceLoggingProviderEnabled(v49, v48, 0x200000000800uLL) )
            CitpContextLogToEtw(a1, a3);
          goto LABEL_23;
        }
      }
    }
    v50 = v72;
    *(_OWORD *)a1 = v71;
    v51 = v73;
    *((_OWORD *)a1 + 1) = v50;
    v52 = v74;
    *((_OWORD *)a1 + 2) = v51;
    v53 = v75;
    *((_OWORD *)a1 + 3) = v52;
    v54 = v76;
    *((_OWORD *)a1 + 4) = v53;
    v55 = v77;
    *((_OWORD *)a1 + 5) = v54;
    v56 = v78;
    *((_OWORD *)a1 + 6) = v55;
    v57 = (char *)a1 + 128;
    *((_OWORD *)v57 - 1) = v56;
    v58 = v80;
    *(_OWORD *)v57 = v79;
    v59 = v81;
    *((_OWORD *)v57 + 1) = v58;
    v60 = v82;
    *((_OWORD *)v57 + 2) = v59;
    v61 = v83;
    v62 = v84;
    *((_OWORD *)v57 + 3) = v60;
    *((_OWORD *)v57 + 4) = v61;
    *((_QWORD *)v57 + 10) = v62;
    goto LABEL_24;
  }
  v42 = Src;
  v43 = KeyHandle;
LABEL_23:
  v44 = *((_DWORD *)a1 + 137);
  *((_BYTE *)a1 + 432) |= 2u;
  *((_DWORD *)a1 + 119) = v44;
  v45 = 0;
  *((_DWORD *)a1 + 118) = SystemTime.LowPart;
  *((_DWORD *)a1 + 115) = a2;
  *((_QWORD *)a1 + 58) = v19;
LABEL_24:
  if ( v42 )
    Win32FreePool();
  if ( Data )
    Win32FreePool();
  if ( v43 )
    ZwClose(v43);
  return (unsigned int)v45;
}

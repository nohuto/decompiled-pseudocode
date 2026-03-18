/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00050F4 (-CitpResetTracking@@YAJXZ.c)
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064DF8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 *     ?CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z @ 0x1C00E401C (-CitpContextNewPeriod@@YAJPEAU_CIT_IMPACT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C000B3E4 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004FC0C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0066688 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00666F4 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0079770 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00E4E0C (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00E4F84 (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00E5424 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E59E4 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned int v4; // r12d
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // r15
  NTSTATUS v19; // edi
  unsigned int v21; // eax
  char v22; // dl
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // ecx
  bool v32; // cf
  unsigned int v33; // eax
  int v34; // edx
  int v35; // r10d
  __int64 v36; // rcx
  int v37; // r13d
  int v38; // eax
  int v39; // r8d
  unsigned int v40; // eax
  struct tagPROCESSINFO *v41; // rdi
  int v42; // eax
  HANDLE v43; // r14
  void *v44; // rsi
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  char *v52; // rbx
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int64 v57; // rax
  int v58; // eax
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  size_t Size; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG DataSize; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Data; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+58h] [rbp-A8h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int128 v67; // [rsp+80h] [rbp-80h]
  __int128 v68; // [rsp+90h] [rbp-70h]
  __int128 v69; // [rsp+A0h] [rbp-60h]
  __int128 v70; // [rsp+B0h] [rbp-50h]
  __int128 v71; // [rsp+C0h] [rbp-40h]
  __int128 v72; // [rsp+D0h] [rbp-30h]
  __int128 v73; // [rsp+E0h] [rbp-20h]
  __int128 v74; // [rsp+F0h] [rbp-10h]
  __int128 v75; // [rsp+100h] [rbp+0h]
  __int128 v76; // [rsp+110h] [rbp+10h]
  __int128 v77; // [rsp+120h] [rbp+20h]
  __int128 v78; // [rsp+130h] [rbp+30h]
  __int128 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  _BYTE v81[16]; // [rsp+160h] [rbp+60h] BYREF
  WCHAR SourceString[40]; // [rsp+170h] [rbp+70h] BYREF

  v4 = a2;
  Src = 0LL;
  Data = 0LL;
  KeyHandle = 0LL;
  CitpInteractionSummariesFlush(a1, a2, a3);
  v6 = *((_OWORD *)a1 + 1);
  v67 = *(_OWORD *)a1;
  v7 = *((_OWORD *)a1 + 2);
  v68 = v6;
  v8 = *((_OWORD *)a1 + 3);
  v69 = v7;
  v9 = *((_OWORD *)a1 + 4);
  v70 = v8;
  v10 = *((_OWORD *)a1 + 5);
  v71 = v9;
  v11 = *((_OWORD *)a1 + 6);
  v72 = v10;
  v12 = *((_OWORD *)a1 + 8);
  v73 = v11;
  v74 = *((_OWORD *)a1 + 7);
  v13 = *((_OWORD *)a1 + 9);
  v75 = v12;
  v14 = *((_OWORD *)a1 + 10);
  v76 = v13;
  v15 = *((_OWORD *)a1 + 11);
  v77 = v14;
  v16 = *((_OWORD *)a1 + 12);
  v17 = *((_QWORD *)a1 + 26);
  v78 = v15;
  v79 = v16;
  v80 = v17;
  v18 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  qword_1C01071A0 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  qword_1C01071A8 = LocalTime.QuadPart;
  if ( !*((_QWORD *)a1 + 52) && (unsigned __int8)RtlIsMultiSessionSku() || !*((_DWORD *)a1 + 92) )
    return (unsigned int)-1073741637;
  CitpStatIncrement((unsigned __int16 *)a1 + 99, 1);
  v21 = *((_DWORD *)a1 + 25);
  v23 = *(_DWORD *)&v22 & ((unsigned __int8)~*((_BYTE *)a1 + 432) >> 1);
  v24 = -1;
  v25 = *((_DWORD *)a1 + 24) + v23;
  if ( v25 >= *((_DWORD *)a1 + 24) )
    v24 = v25;
  v26 = v21 + v4 - *((_DWORD *)a1 + 125);
  *((_DWORD *)a1 + 24) = v24;
  v27 = -1;
  v28 = -1;
  if ( v26 >= v21 )
    v27 = v26;
  *((_DWORD *)a1 + 25) = v27;
  v29 = *((_DWORD *)a1 + 40);
  if ( (v18 - *((_QWORD *)a1 + 63)) / 0x2710uLL <= 0xFFFFFFFF )
    v28 = (v18 - *((_QWORD *)a1 + 63)) / 0x2710uLL;
  v30 = -1;
  v31 = v29 + (((unsigned __int8)~*((_BYTE *)a1 + 432) >> 1) & 1);
  v32 = v31 < v29;
  v33 = *((_DWORD *)a1 + 41);
  if ( !v32 )
    v30 = v31;
  *((_DWORD *)a1 + 40) = v30;
  v34 = -1;
  if ( v33 + v28 >= v33 )
    v34 = v33 + v28;
  *((_DWORD *)a1 + 41) = v34;
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 584), v4);
  v37 = *(_DWORD *)(v36 + 12);
  v38 = v35;
  v39 = v37 - *((_DWORD *)a1 + 128);
  if ( (unsigned int)(*((_DWORD *)a1 + 147) + *((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 129)) >= *((_DWORD *)a1 + 44) )
    v38 = *((_DWORD *)a1 + 147) + *((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 129);
  *((_DWORD *)a1 + 44) = v38;
  v40 = *((_DWORD *)a1 + 45);
  if ( v40 + v39 >= v40 )
    v35 = v40 + v39;
  *((_DWORD *)a1 + 45) = v35;
  if ( *((_DWORD *)a1 + 132) )
    CitpBitmapUpdateForTimeRange(a1, *((_DWORD *)a1 + 130), v4);
  v41 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
  if ( v41 )
  {
    CitpSetForegroundProcess(a1, v4, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, v4, v41, 0LL, 0LL);
  }
  if ( !byte_1C010716E )
  {
    v44 = Src;
    v43 = KeyHandle;
LABEL_35:
    *((_BYTE *)a1 + 432) |= 2u;
    v58 = *((_DWORD *)a1 + 147);
    v19 = 0;
    *((_DWORD *)a1 + 125) = v4;
    *((_QWORD *)a1 + 63) = v18;
    *((_DWORD *)a1 + 129) = v58;
    *((_DWORD *)a1 + 128) = v37;
    goto LABEL_36;
  }
  v42 = CitpEnsureDataKey(&KeyHandle);
  v43 = KeyHandle;
  v19 = v42;
  if ( v42 < 0
    || (v19 = CitpSavedDataPrune(KeyHandle), v19 < 0)
    || (v19 = CitpSavedDataPrepare(a1, (struct _CIT_PERSISTED_HEADER **)&Src, (unsigned int *)&Size), v19 < 0) )
  {
    v44 = Src;
  }
  else
  {
    v44 = Src;
    v19 = CitpSavedDataCompress(Src, (unsigned int)Size, &Data, &DataSize);
    if ( v19 >= 0 )
    {
      CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v81, *((void **)a1 + 52));
      CitpBytesToString(v81, 0x10u, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v19 = ZwSetValueKey(v43, &DestinationString, 0, 3u, Data, DataSize);
      if ( v19 >= 0 )
        goto LABEL_35;
    }
  }
  v45 = v68;
  *(_OWORD *)a1 = v67;
  v46 = v69;
  *((_OWORD *)a1 + 1) = v45;
  v47 = v70;
  *((_OWORD *)a1 + 2) = v46;
  v48 = v71;
  *((_OWORD *)a1 + 3) = v47;
  v49 = v72;
  *((_OWORD *)a1 + 4) = v48;
  v50 = v73;
  *((_OWORD *)a1 + 5) = v49;
  v51 = v74;
  *((_OWORD *)a1 + 6) = v50;
  v52 = (char *)a1 + 128;
  *((_OWORD *)v52 - 1) = v51;
  v53 = v76;
  *(_OWORD *)v52 = v75;
  v54 = v77;
  *((_OWORD *)v52 + 1) = v53;
  v55 = v78;
  *((_OWORD *)v52 + 2) = v54;
  v56 = v79;
  v57 = v80;
  *((_OWORD *)v52 + 3) = v55;
  *((_OWORD *)v52 + 4) = v56;
  *((_QWORD *)v52 + 10) = v57;
LABEL_36:
  if ( v44 )
    Win32FreePool();
  if ( Data )
    Win32FreePool();
  if ( v43 )
    ZwClose(v43);
  return (unsigned int)v19;
}

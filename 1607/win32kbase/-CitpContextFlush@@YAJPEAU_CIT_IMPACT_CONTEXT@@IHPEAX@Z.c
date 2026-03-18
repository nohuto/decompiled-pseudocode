/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88
 * Callers:
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0011AA0 (-CitpTimeUpdate@@YAXI@Z.c)
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004EE38 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C00F595C (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C00F6BB4 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C000EA00 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C004F780 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0050C14 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0050C80 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C00711A0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z @ 0x1C00F6D48 (-CitpSaveKeyGet@@YAXPEAU_CIT_SAVE_KEY@@PEAX@Z.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00F6EC0 (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00F7360 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00F78FC (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2, __int64 a3, void *a4)
{
  struct tagPROCESSINFO *v4; // rdi
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
  NTSTATUS v20; // edi
  unsigned int v22; // eax
  char v23; // dl
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // r8d
  unsigned int v30; // eax
  int v31; // edx
  unsigned int v32; // ecx
  bool v33; // cf
  unsigned int v34; // eax
  int v35; // edx
  int v36; // r10d
  __int64 v37; // rcx
  int v38; // r13d
  int v39; // eax
  int v40; // r8d
  unsigned int v41; // eax
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
  unsigned int Size; // [rsp+38h] [rbp-C8h] BYREF
  ULONG Size_4; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Data; // [rsp+48h] [rbp-B8h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+70h] [rbp-90h]
  __int128 v68; // [rsp+80h] [rbp-80h]
  __int128 v69; // [rsp+90h] [rbp-70h]
  __int128 v70; // [rsp+A0h] [rbp-60h]
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  __int128 v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+100h] [rbp+0h]
  __int128 v77; // [rsp+110h] [rbp+10h]
  __int128 v78; // [rsp+120h] [rbp+20h]
  __int128 v79; // [rsp+130h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+40h]
  _BYTE v81[16]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR SourceString[40]; // [rsp+160h] [rbp+60h] BYREF

  v4 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
  Src = 0LL;
  Data = 0LL;
  KeyHandle = 0LL;
  if ( v4 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, a2, v4, 0LL, 0LL, 0LL);
  }
  CitpInteractionSummariesFlush(a1);
  v7 = *((_OWORD *)a1 + 1);
  v67 = *(_OWORD *)a1;
  v8 = *((_OWORD *)a1 + 2);
  v68 = v7;
  v9 = *((_OWORD *)a1 + 3);
  v69 = v8;
  v10 = *((_OWORD *)a1 + 4);
  v70 = v9;
  v11 = *((_OWORD *)a1 + 5);
  v71 = v10;
  v12 = *((_OWORD *)a1 + 6);
  v72 = v11;
  v13 = *((_OWORD *)a1 + 8);
  v73 = v12;
  v74 = *((_OWORD *)a1 + 7);
  v14 = *((_OWORD *)a1 + 9);
  v75 = v13;
  v15 = *((_OWORD *)a1 + 10);
  v76 = v14;
  v16 = *((_OWORD *)a1 + 11);
  v77 = v15;
  v17 = *((_OWORD *)a1 + 12);
  v18 = *((_QWORD *)a1 + 26);
  v78 = v16;
  v79 = v17;
  v80 = v18;
  v19 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  qword_1C011E5F0 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  qword_1C011E5F8 = LocalTime.QuadPart;
  if ( !*((_QWORD *)a1 + 52) && (unsigned __int8)RtlIsMultiSessionSku() || !*((_DWORD *)a1 + 92) )
    return (unsigned int)-1073741637;
  CitpStatIncrement((unsigned __int16 *)a1 + 99, 1);
  v22 = *((_DWORD *)a1 + 25);
  v24 = *(_DWORD *)&v23 & ((unsigned __int8)~*((_BYTE *)a1 + 432) >> 1);
  v25 = -1;
  v26 = *((_DWORD *)a1 + 24) + v24;
  if ( v26 >= *((_DWORD *)a1 + 24) )
    v25 = v26;
  v27 = v22 + a2 - *((_DWORD *)a1 + 126);
  *((_DWORD *)a1 + 24) = v25;
  v28 = -1;
  v29 = -1;
  if ( v27 >= v22 )
    v28 = v27;
  *((_DWORD *)a1 + 25) = v28;
  v30 = *((_DWORD *)a1 + 40);
  if ( (v19 - *((_QWORD *)a1 + 64)) / 0x2710uLL <= 0xFFFFFFFF )
    v29 = (v19 - *((_QWORD *)a1 + 64)) / 0x2710uLL;
  v31 = -1;
  v32 = v30 + (((unsigned __int8)~*((_BYTE *)a1 + 432) >> 1) & 1);
  v33 = v32 < v30;
  v34 = *((_DWORD *)a1 + 41);
  if ( !v33 )
    v31 = v32;
  *((_DWORD *)a1 + 40) = v31;
  v35 = -1;
  if ( v34 + v29 >= v34 )
    v35 = v34 + v29;
  *((_DWORD *)a1 + 41) = v35;
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 592), a2);
  v38 = *(_DWORD *)(v37 + 12);
  v39 = v36;
  v40 = v38 - *((_DWORD *)a1 + 130);
  if ( (unsigned int)(*((_DWORD *)a1 + 149) + *((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 131)) >= *((_DWORD *)a1 + 44) )
    v39 = *((_DWORD *)a1 + 149) + *((_DWORD *)a1 + 44) - *((_DWORD *)a1 + 131);
  *((_DWORD *)a1 + 44) = v39;
  v41 = *((_DWORD *)a1 + 45);
  if ( v41 + v40 >= v41 )
    v36 = v41 + v40;
  *((_DWORD *)a1 + 45) = v36;
  if ( *((_DWORD *)a1 + 134) )
    CitpBitmapUpdateForTimeRange(a1, *((_DWORD *)a1 + 132), a2);
  if ( !byte_1C011E5BD )
  {
    v44 = Src;
    v43 = KeyHandle;
LABEL_35:
    *((_BYTE *)a1 + 432) |= 2u;
    v58 = *((_DWORD *)a1 + 149);
    v20 = 0;
    *((_DWORD *)a1 + 126) = a2;
    *((_QWORD *)a1 + 64) = v19;
    *((_DWORD *)a1 + 131) = v58;
    *((_DWORD *)a1 + 130) = v38;
    goto LABEL_36;
  }
  v42 = CitpEnsureDataKey(&KeyHandle);
  v43 = KeyHandle;
  v20 = v42;
  if ( v42 < 0
    || (v20 = CitpSavedDataPrune(KeyHandle), v20 < 0)
    || (v20 = CitpSavedDataPrepare(a1, (struct _CIT_PERSISTED_HEADER **)&Src, &Size), v20 < 0) )
  {
    v44 = Src;
  }
  else
  {
    v44 = Src;
    v20 = CitpSavedDataCompress(Src, Size, &Data, &Size_4);
    if ( v20 >= 0 )
    {
      CitpSaveKeyGet((struct _CIT_SAVE_KEY *)v81, *((void **)a1 + 52));
      CitpBytesToString(v81, 0x10u, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v20 = ZwSetValueKey(v43, &DestinationString, 0, 3u, Data, Size_4);
      if ( v20 >= 0 )
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
  return (unsigned int)v20;
}

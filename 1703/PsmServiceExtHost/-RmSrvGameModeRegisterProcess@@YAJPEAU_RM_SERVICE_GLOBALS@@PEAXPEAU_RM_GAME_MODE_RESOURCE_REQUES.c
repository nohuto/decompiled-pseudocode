/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x18002CC6C
 * Callers:
 *     RmGameModeSrvRegisterProcess @ 0x18002D6C0 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@K_K@Z @ 0x18002FD04 (-RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@K_K@Z.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180030DF8 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 */

__int64 __fastcall RmSrvGameModeRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        const GUID *a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rdi
  int v5; // esi
  void *v7; // r14
  int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // r9d
  const WCHAR *FileNameW; // rdi
  const struct _TlgProvider_t *v12; // rcx
  DWORD ProcessId; // eax
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  int *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  ULONG *p_ReturnLength; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  int *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  char *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  int *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  int *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+120h] [rbp+20h] BYREF
  LPCWSTR pszPath; // [rsp+128h] [rbp+28h]

  v4 = RmSvcGlobals;
  v5 = (int)a4;
  v7 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(a1, &unk_180040197, (LPCGUID)a3, a4, 2u, &pData);
  if ( v5 )
  {
    v8 = -1073741583;
  }
  else if ( *(_DWORD *)a3 == 2
         && (v9 = RtlNumberOfSetBitsUlongPtr(*((_QWORD *)a3 + 1), a2, a3, a4),
             LODWORD(a2) = *((_DWORD *)a3 + 1),
             (unsigned int)a2 >= v9)
         && (unsigned int)a2 <= 0x40
         && (unsigned int)(*((_DWORD *)a3 + 4) - 2) <= 8
         && (unsigned int)(*((_DWORD *)a3 + 5) + *((_DWORD *)a3 + 6)) <= 0x64
         && (*((_BYTE *)a3 + 28) & 0x18) != 0x18
         && RmpCpuSetManagerIsGameModeRequestSatisfiable(
              (struct _RM_SERVICE_GLOBALS *)((char *)v4 + 648),
              (unsigned int)a2,
              *((_QWORD *)a3 + 1)) )
  {
    v18 = RmpGameModeRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 1104), v7, a3);
    if ( v18 < 0 )
      goto LABEL_17;
    v8 = 0;
  }
  else
  {
    v8 = -1073741584;
  }
  v18 = v8;
LABEL_17:
  if ( TraceLoggingProviderEnabled(a1, (UCHAR)a2, 0LL) )
  {
    FileNameW = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(v7, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v12, 0x400000000001uLL) )
    {
      v28 = 0;
      v26 = &v18;
      v27 = 4;
      ProcessId = GetProcessId(v7);
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      ReturnLength = ProcessId;
      p_ReturnLength = &ReturnLength;
      v20 = *((_DWORD *)a3 + 1);
      v32 = &v20;
      v35 = (char *)a3 + 8;
      v21 = *((_DWORD *)a3 + 4);
      v38 = &v21;
      v22 = *((_DWORD *)a3 + 5);
      v41 = &v22;
      v23 = *((_DWORD *)a3 + 6);
      v44 = &v23;
      v24 = *((_DWORD *)a3 + 7);
      v47 = &v24;
      v30 = 4;
      v33 = 4;
      v36 = 8;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      TlgCreateWsz(&pDesc, FileNameW);
      TlgWrite(v14, &unk_180040C2C, v15, v16, 0xBu, &v25);
    }
    return (unsigned int)v18;
  }
  return v10;
}

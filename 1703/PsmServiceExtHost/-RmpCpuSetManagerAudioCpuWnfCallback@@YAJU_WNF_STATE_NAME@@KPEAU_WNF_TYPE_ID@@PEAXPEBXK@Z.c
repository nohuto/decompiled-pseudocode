/*
 * XREFs of ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18001B5D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F43C (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAudioCpuWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _RM_CPU_SET_MANAGER *a4,
        int *a5,
        unsigned int a6)
{
  int v6; // edi
  int v8; // ebx
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v14; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v17; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+70h] [rbp+Fh]
  int v19; // [rsp+74h] [rbp+13h]
  int *v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+84h] [rbp+23h]

  v6 = -1;
  if ( a5 && a6 == 4 )
    v8 = *a5;
  else
    v8 = -1;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*(_BYTE *)(*(_QWORD *)a4 + 1524LL) & 2) == 0 )
  {
    v6 = *((_DWORD *)a4 + 108);
    if ( v8 != v6 )
    {
      *((_DWORD *)a4 + 108) = v8;
      RmpCpuSetManagerResetValidMask(a4);
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v9, 1uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v14;
    v20 = &v15;
    v14 = v8;
    v18 = 4;
    v15 = v6;
    v21 = 4;
    TlgWrite(v10, &unk_180041E18, v11, v12, 4u, &pData);
  }
  return 0LL;
}

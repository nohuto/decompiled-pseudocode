/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18004181C
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180041960 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x18004E3C4 (MemUtilQueryGpuUtilization.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  unsigned __int8 v3; // dl
  BOOL v4; // ebx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned __int8 v13; // [rsp+38h] [rbp-29h] BYREF
  bool v14; // [rsp+39h] [rbp-28h] BYREF
  int v15; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v19; // [rsp+78h] [rbp+17h]
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]
  unsigned __int8 *v22; // [rsp+88h] [rbp+27h]
  int v23; // [rsp+90h] [rbp+2Fh]
  int v24; // [rsp+94h] [rbp+33h]
  bool *v25; // [rsp+98h] [rbp+37h]
  int v26; // [rsp+A0h] [rbp+3Fh]
  int v27; // [rsp+A4h] [rbp+43h]

  v15 = MemUtilQueryGpuUtilization(&v16);
  if ( v15 < 0 )
    goto LABEL_2;
  RtlQueryUnbiasedInterruptTime(&v17);
  v5 = v17 - *((_QWORD *)a1 + 4);
  if ( v17 == *((_QWORD *)a1 + 4) )
  {
    v15 = -1071513567;
LABEL_2:
    v3 = 100;
    v4 = 1;
    goto LABEL_8;
  }
  v6 = v16;
  *((_QWORD *)a1 + 4) = v17;
  v7 = v6 - *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = v6;
  v8 = 100 * v7 / v5;
  v3 = 100;
  v2 = (const struct _TlgProvider_t *)(unsigned __int8)v8;
  if ( v8 < 0x64 )
    v3 = v8;
  v4 = v3 > *((_BYTE *)a1 + 56);
  v15 = 0;
LABEL_8:
  v13 = v3;
  if ( (unsigned int)dword_1800690A0 > 5 && TlgKeywordOn(v2, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v15;
    v20 = 4;
    v22 = &v13;
    v14 = v4;
    v27 = 0;
    v25 = &v14;
    v23 = 1;
    v26 = 1;
    TlgWrite(v9, &unk_18005CC49, v10, v11, 5u, &pData);
  }
  return v4;
}

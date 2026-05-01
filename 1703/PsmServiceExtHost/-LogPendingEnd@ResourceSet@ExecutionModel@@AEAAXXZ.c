/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000F5E8
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18000FA08 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ @ 0x18001B0E0 (-RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  int v9; // eax
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  char v15[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v16; // [rsp+68h] [rbp-98h] BYREF
  char v17; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+CCh] [rbp-34h]
  int *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  char *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  int v27; // [rsp+ECh] [rbp-14h]
  char *v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  int *v31; // [rsp+100h] [rbp+0h]
  int v32; // [rsp+108h] [rbp+8h]
  int v33; // [rsp+10Ch] [rbp+Ch]
  int *v34; // [rsp+110h] [rbp+10h]
  int v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+11Ch] [rbp+1Ch]
  int *v37; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]

  if ( TraceLoggingProviderEnabled(this, a2, 0LL) )
  {
    RmpSystemMemoryMetricsQuery(
      *(struct _RM_PARTITION **)(*((_QWORD *)this + 173) + 112LL),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v15);
    RmpUtilQueryUnbiasedInterruptTimeMs();
    if ( (unsigned int)dword_18004D030 > 4 )
    {
      if ( TlgKeywordOn(v3, 0x400000000001uLL) )
      {
        v6 = *((_QWORD *)this + 230);
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v19 = &v14;
        v10 = *((_DWORD *)this + 352);
        v22 = &v10;
        v25 = &v17;
        v28 = &v16;
        v7 = *((_DWORD *)this + 463);
        v14 = v6;
        v20 = (_DWORD)v5 + 4;
        v26 = (_DWORD)v5 + 4;
        v29 = (_DWORD)v5 + 4;
        v8 = (const struct _TlgProvider_t *)*((unsigned int *)this + 462);
        v11 = v7 - (_DWORD)v8;
        v31 = &v11;
        v34 = &v12;
        v9 = *((_DWORD *)this + 464) - (_DWORD)v8;
        v23 = (int)v5;
        v39 = 0;
        v13 = v9;
        v37 = &v13;
        v32 = (int)v5;
        v12 = (int)v4;
        v35 = (int)v5;
        v38 = (int)v5;
        TlgWrite(v8, &unk_180042CFB, v4, v5, 9u, &pData);
      }
    }
  }
}

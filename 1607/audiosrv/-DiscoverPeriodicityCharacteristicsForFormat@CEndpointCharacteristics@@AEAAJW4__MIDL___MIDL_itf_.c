/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800883A0
 * Callers:
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18008A3CC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180087C68 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800894BC (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18008992C (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
        CEndpointCharacteristics *this,
        unsigned int a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4,
        struct PacketSizeConstraints *a5,
        bool a6,
        __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11,
        unsigned int *a12)
{
  int PacketSizesFromConstraints; // r14d
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rcx
  unsigned int v18; // r14d
  char *v19; // rdi
  __int64 v20; // rax
  GUID *v21; // rcx
  unsigned int v22; // eax
  unsigned int *v23; // rcx
  unsigned int *v24; // rdx
  int v25; // eax
  unsigned int v26; // eax
  unsigned int i; // ebx
  unsigned int *v28; // rcx
  signed int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v35; // [rsp+28h] [rbp-B9h]
  unsigned __int64 v36; // [rsp+30h] [rbp-B1h]
  unsigned __int64 v37; // [rsp+38h] [rbp-A9h]
  unsigned int v38; // [rsp+68h] [rbp-79h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-69h] BYREF
  unsigned int *v41; // [rsp+80h] [rbp-61h]
  unsigned int v42; // [rsp+88h] [rbp-59h]
  unsigned int *v43; // [rsp+90h] [rbp-51h]
  signed __int64 v44; // [rsp+98h] [rbp-49h]
  struct _GUID *v45; // [rsp+A0h] [rbp-41h]
  char *v46; // [rsp+A8h] [rbp-39h]
  const struct tWAVEFORMATEX *v47; // [rsp+B0h] [rbp-31h]
  unsigned int *v48; // [rsp+B8h] [rbp-29h]
  struct _GUID v49; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v50; // [rsp+D8h] [rbp-9h]

  v50 = -2LL;
  v47 = a4;
  v45 = a3;
  v38 = a2;
  v43 = a9;
  v41 = a10;
  v48 = a12;
  PacketSizesFromConstraints = 0;
  v15 = a7;
  if ( !a7 )
    v15 = 100000LL;
  v44 = v15;
  v16 = (int)((double)(int)a4->nSamplesPerSec * (double)(int)v15 / 10000000.0 + 0.5);
  *a11 = v16;
  *a10 = v16;
  *a9 = v16;
  *a8 = v16;
  if ( !*((_DWORD *)this + 6) )
  {
    v46 = 0LL;
    pv = 0LL;
    *(_QWORD *)&v49.Data1 = 0LL;
    PacketSizesFromConstraints = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                   *((_QWORD *)this + 2),
                                   &pv);
    if ( PacketSizesFromConstraints < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_6:
      v17 = 0LL;
LABEL_7:
      CoTaskMemFree(v17);
      return (unsigned int)PacketSizesFromConstraints;
    }
    v18 = a4->cbSize + 64;
    v42 = v18;
    v19 = (char *)CoTaskMemAlloc(v18);
    CoTaskMemFree(0LL);
    v46 = v19;
    if ( !v19 )
    {
      PacketSizesFromConstraints = -2147024882;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_6;
    }
    *(_DWORD *)v19 = a4->cbSize + 64;
    *((_DWORD *)v19 + 1) = GetSessionIdFromEndpointId(pv);
    v20 = (int)v38;
    *((_DWORD *)v19 + 2) = v38;
    v21 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( *((_DWORD *)this + v20 + 10) )
      v21 = v45;
    *(GUID *)(v19 + 12) = *v21;
    memcpy_0(v19 + 44, a4, a4->cbSize + 18LL);
    PacketSizesFromConstraints = CheckConnectorSupportForPeriodicity(
                                   *((_QWORD *)this + 2),
                                   *((_DWORD *)this + 93),
                                   (__int64)v19,
                                   v18,
                                   v44,
                                   &v40);
    if ( PacketSizesFromConstraints < 0 )
    {
LABEL_13:
      CoTaskMemFree(pv);
      pv = 0LL;
      v17 = v19;
      goto LABEL_7;
    }
    v22 = v40;
    *a11 = v40;
    v23 = v41;
    *v41 = v22;
    v24 = v43;
    *v43 = v22;
    *a8 = v22;
    if ( !v38 && !a7 )
    {
      if ( *((_DWORD *)this + 93) == 1 && (unsigned int)g_MaxCapturePeriodicityInHns > v44 && (!a5 || !*(_BYTE *)a5) )
      {
        v25 = CheckConnectorSupportForPeriodicity(
                *((_QWORD *)this + 2),
                1,
                (__int64)v19,
                v42,
                (unsigned int)g_MaxCapturePeriodicityInHns,
                &v38);
        v23 = v41;
        v24 = v43;
        if ( v25 >= 0 )
          *a11 = v38;
      }
      if ( a5 )
      {
        v49 = *v45;
        PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                       a5,
                                       a4->nAvgBytesPerSec,
                                       a4->nBlockAlign,
                                       &v49,
                                       v35,
                                       v36,
                                       v37,
                                       a8,
                                       v24,
                                       v23,
                                       &v38);
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_13;
        if ( *((_DWORD *)this + 93) != 1 || (v26 = v38, !*(_BYTE *)a5) )
          v26 = *a8;
        *a11 = v26;
      }
      else if ( a6 )
      {
        PacketSizesFromConstraints = HnsToBlocksRU(0x61A8uLL, a4->nAvgBytesPerSec, a4->nBlockAlign, &v38);
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_13;
        for ( i = 32 * (((v38 - 1) >> 5) + 1); ; i += 32 )
        {
          if ( i >= *a8 )
          {
            v28 = v41;
            goto LABEL_37;
          }
          if ( (int)CheckConnectorSupportForPeriodicity(
                      *((_QWORD *)this + 2),
                      *((_DWORD *)this + 93),
                      (__int64)v19,
                      v42,
                      (unsigned int)(int)((double)(int)i * 10000000.0 / (double)(int)a4->nSamplesPerSec + 0.5),
                      &v40) >= 0
            && i == v40 )
          {
            break;
          }
        }
        v28 = v41;
        *v41 = v40;
LABEL_37:
        if ( *v28 < *a8 )
        {
          LOBYTE(v29) = 0;
          v38 = 0;
          while ( 1 )
          {
            v30 = 32 * (1 << v29);
            v31 = v30 * ((*v41 - 1) / v30 + 1);
            if ( v31 < *a8
              && (int)CheckConnectorSupportForPeriodicity(
                        *((_QWORD *)this + 2),
                        *((_DWORD *)this + 93),
                        (__int64)v19,
                        v42,
                        (unsigned int)(int)((double)(int)v31 * 10000000.0 / (double)(int)v47->nSamplesPerSec + 0.5),
                        &v40) >= 0
              && v40 == v31 )
            {
              break;
            }
            v29 = v38 + 1;
            v38 = v29;
            if ( v29 >= 3 )
            {
              v32 = v43;
              goto LABEL_45;
            }
          }
          v32 = v43;
          *v43 = v30;
LABEL_45:
          v33 = *a8;
          if ( *v32 == *a8 )
          {
            *v32 = v33;
            *v41 = v33;
          }
        }
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v19);
  }
  *v48 = *a11;
  if ( *a11 > *a8 )
    *a11 = *a8;
  return (unsigned int)PacketSizesFromConstraints;
}

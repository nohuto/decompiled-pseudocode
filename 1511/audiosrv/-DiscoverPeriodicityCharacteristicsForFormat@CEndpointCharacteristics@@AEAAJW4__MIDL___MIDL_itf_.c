/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAI666@Z @ 0x1800A5900
 * Callers:
 *     _lambda_418c5ae5971ebab8b75617066dde6fa1_::operator() @ 0x1800A4F74 (_lambda_418c5ae5971ebab8b75617066dde6fa1_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800A7350 (-TryAddFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x1800A52B0 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@KGU_GUID@@_K22PEAI333@Z @ 0x1800A6B18 (-GetPacketSizesFromConstraints@@YAJPEBU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x1800A6CE0 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
        CEndpointCharacteristics *this,
        unsigned int a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4,
        struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *a5,
        bool a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        struct _GUID *a11)
{
  unsigned int *v12; // r15
  int PacketSizesFromConstraints; // esi
  unsigned __int64 v14; // r8
  int v15; // eax
  void *v16; // rcx
  unsigned int v17; // esi
  char *v18; // rdi
  __int64 v19; // rax
  CEndpointCharacteristics *v20; // rbx
  GUID *v21; // rax
  unsigned int v22; // eax
  unsigned int *v23; // r8
  unsigned int v24; // ebx
  CEndpointCharacteristics *v25; // r12
  int v26; // r12d
  unsigned int v27; // ebx
  unsigned int v28; // r15d
  unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned __int64 v32; // [rsp+28h] [rbp-B9h]
  unsigned __int64 v33; // [rsp+30h] [rbp-B1h]
  unsigned __int64 v34; // [rsp+38h] [rbp-A9h]
  unsigned int *v35; // [rsp+40h] [rbp-A1h]
  LPVOID pv; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v37[2]; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-69h]
  CEndpointCharacteristics *v39; // [rsp+80h] [rbp-61h]
  unsigned int *v40; // [rsp+88h] [rbp-59h]
  struct _GUID *v41; // [rsp+90h] [rbp-51h]
  unsigned int *v42; // [rsp+98h] [rbp-49h]
  unsigned __int64 v43; // [rsp+A0h] [rbp-41h]
  struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *v44; // [rsp+A8h] [rbp-39h]
  char *v45; // [rsp+B0h] [rbp-31h]
  unsigned int *p_Data1; // [rsp+B8h] [rbp-29h]
  struct _GUID v47; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-9h]

  v48 = -2LL;
  v41 = a3;
  v37[1] = a2;
  v39 = this;
  v44 = a5;
  v40 = a9;
  v12 = a10;
  v42 = a10;
  p_Data1 = &a11->Data1;
  PacketSizesFromConstraints = 0;
  v14 = a7;
  if ( !a7 )
    v14 = 100000LL;
  v43 = v14;
  v15 = (int)((double)(int)a4->nSamplesPerSec * (double)(int)v14 / 10000000.0 + 0.5);
  a11->Data1 = v15;
  *a10 = v15;
  *a9 = v15;
  *a8 = v15;
  if ( !*((_DWORD *)this + 6) )
  {
    v45 = 0LL;
    pv = 0LL;
    *(_QWORD *)&v47.Data1 = 0LL;
    PacketSizesFromConstraints = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                   *((_QWORD *)this + 2),
                                   &pv);
    if ( PacketSizesFromConstraints >= 0 )
    {
      v17 = a4->cbSize + 64;
      v38 = v17;
      v18 = (char *)CoTaskMemAlloc(v17);
      CoTaskMemFree(0LL);
      v45 = v18;
      if ( v18 )
      {
        *(_DWORD *)v18 = a4->cbSize + 64;
        *((_DWORD *)v18 + 1) = GetSessionIdFromEndpointId(pv);
        v19 = (int)v37[1];
        *((_DWORD *)v18 + 2) = v37[1];
        v20 = v39;
        if ( !*((_DWORD *)v39 + v19 + 10) || (v21 = v41, *((_DWORD *)v39 + 100)) )
          v21 = &GUID_00000000_0000_0000_0000_000000000000;
        *(GUID *)(v18 + 12) = *v21;
        memcpy_0(v18 + 44, a4, a4->cbSize + 18LL);
        PacketSizesFromConstraints = CheckConnectorSupportForPeriodicity(
                                       *((_QWORD *)v20 + 2),
                                       *((_DWORD *)v20 + 93),
                                       (__int64)v18,
                                       v17,
                                       v43,
                                       v37);
        if ( PacketSizesFromConstraints >= 0 )
        {
          v22 = v37[0];
          v23 = p_Data1;
          *p_Data1 = v37[0];
          *a10 = v22;
          *a9 = v22;
          *a8 = v22;
          if ( !v37[1] && !a7 )
          {
            if ( v44 )
            {
              v47 = *v41;
              PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                             v44,
                                             a4->nAvgBytesPerSec,
                                             a4->nBlockAlign,
                                             &v47,
                                             v32,
                                             v33,
                                             v34,
                                             v35,
                                             a9,
                                             a10,
                                             v23);
            }
            else if ( a6 )
            {
              PacketSizesFromConstraints = HnsToBlocksRU(0x61A8uLL, a4->nAvgBytesPerSec, a4->nBlockAlign, &v37[1]);
              if ( PacketSizesFromConstraints >= 0 )
              {
                v24 = 32 * (((v37[1] - 1) >> 5) + 1);
                if ( v24 < *a8 )
                {
                  v25 = v39;
                  while ( (int)CheckConnectorSupportForPeriodicity(
                                 *((_QWORD *)v25 + 2),
                                 *((_DWORD *)v25 + 93),
                                 (__int64)v18,
                                 v38,
                                 (unsigned int)(int)((double)(int)v24 * 10000000.0 / (double)(int)a4->nSamplesPerSec
                                                   + 0.5),
                                 v37) < 0
                       || v24 != v37[0] )
                  {
                    v24 += 32;
                    if ( v24 >= *a8 )
                      goto LABEL_25;
                  }
                  *a10 = v37[0];
                }
LABEL_25:
                if ( *a10 < *a8 )
                {
                  v26 = 0;
                  while ( 1 )
                  {
                    v27 = 32 * (1 << v26);
                    v28 = v27 * ((*v12 - 1) / v27 + 1);
                    if ( v28 < *a8
                      && (int)CheckConnectorSupportForPeriodicity(
                                *((_QWORD *)v39 + 2),
                                *((_DWORD *)v39 + 93),
                                (__int64)v18,
                                v38,
                                (unsigned int)(int)((double)(int)v28 * 10000000.0 / (double)(int)a4->nSamplesPerSec + 0.5),
                                v37) >= 0
                      && v37[0] == v28 )
                    {
                      v29 = v40;
                      *v40 = v27;
                      goto LABEL_34;
                    }
                    if ( ++v26 >= 3 )
                      break;
                    v12 = v42;
                  }
                  v29 = v40;
LABEL_34:
                  v30 = *a8;
                  if ( *v29 == *a8 )
                  {
                    *v29 = v30;
                    *v42 = v30;
                  }
                }
              }
            }
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        v16 = v18;
        goto LABEL_37;
      }
      PacketSizesFromConstraints = -2147024882;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    v16 = 0LL;
LABEL_37:
    CoTaskMemFree(v16);
  }
  return (unsigned int)PacketSizesFromConstraints;
}

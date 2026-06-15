/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAI666@Z @ 0x1800A7F00
 * Callers:
 *     _lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator() @ 0x1800A7780 (_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_--operator().c)
 * Callees:
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x1800A797C (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@KGU_GUID@@_K22PEAI333@Z @ 0x1800A91D0 (-GetPacketSizesFromConstraints@@YAJPEBU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@KGU_GUID@@_K22PEAI333@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x1800A9440 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
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
  unsigned int *v12; // r14
  int PacketSizesFromConstraints; // esi
  unsigned __int64 v14; // r8
  int v15; // eax
  void *v16; // rcx
  unsigned int v17; // esi
  char *v18; // rdi
  unsigned int v19; // ecx
  unsigned int v20; // eax
  CEndpointCharacteristics *v21; // rbx
  GUID *v22; // rax
  unsigned int v23; // eax
  unsigned int *v24; // r8
  unsigned int v25; // ebx
  CEndpointCharacteristics *v26; // r12
  int v27; // r12d
  unsigned int v28; // ebx
  unsigned int v29; // r14d
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v33; // [rsp+28h] [rbp-B9h]
  unsigned __int64 v34; // [rsp+30h] [rbp-B1h]
  unsigned __int64 v35; // [rsp+38h] [rbp-A9h]
  unsigned int *v36; // [rsp+40h] [rbp-A1h]
  LPVOID pv; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v38[2]; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-69h]
  CEndpointCharacteristics *v40; // [rsp+80h] [rbp-61h]
  unsigned int *v41; // [rsp+88h] [rbp-59h]
  struct _GUID *v42; // [rsp+90h] [rbp-51h]
  unsigned int *v43; // [rsp+98h] [rbp-49h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-41h]
  struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *v45; // [rsp+A8h] [rbp-39h]
  char *v46; // [rsp+B0h] [rbp-31h]
  unsigned int *p_Data1; // [rsp+B8h] [rbp-29h]
  struct _GUID v48; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-9h]

  v49 = -2LL;
  v42 = a3;
  v38[1] = a2;
  v40 = this;
  v45 = a5;
  v41 = a9;
  v12 = a10;
  v43 = a10;
  p_Data1 = &a11->Data1;
  PacketSizesFromConstraints = 0;
  v14 = a7;
  if ( !a7 )
    v14 = 100000LL;
  v44 = v14;
  v15 = (int)((double)(int)a4->nSamplesPerSec * (double)(int)v14 / 10000000.0 + 0.5);
  a11->Data1 = v15;
  *a10 = v15;
  *a9 = v15;
  *a8 = v15;
  if ( !*((_DWORD *)this + 6) )
  {
    v46 = 0LL;
    pv = 0LL;
    *(_QWORD *)&v48.Data1 = 0LL;
    PacketSizesFromConstraints = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                   *((_QWORD *)this + 2),
                                   &pv);
    if ( PacketSizesFromConstraints >= 0 )
    {
      v17 = a4->cbSize + 64;
      v39 = v17;
      v18 = (char *)CoTaskMemAlloc(v17);
      CoTaskMemFree(0LL);
      v46 = v18;
      if ( v18 )
      {
        *(_DWORD *)v18 = a4->cbSize + 64;
        *((_DWORD *)v18 + 1) = GetSessionIdFromEndpointId(pv);
        v19 = v38[1];
        *((_DWORD *)v18 + 2) = v38[1];
        v20 = v19;
        if ( v19 == 1 )
          v20 = 0;
        v21 = v40;
        if ( !*((_DWORD *)v40 + (int)v20 + 10) || (v22 = v42, *((_DWORD *)v40 + 100)) )
          v22 = &GUID_00000000_0000_0000_0000_000000000000;
        *(GUID *)(v18 + 12) = *v22;
        memcpy_0(v18 + 44, a4, a4->cbSize + 18LL);
        PacketSizesFromConstraints = CheckConnectorSupportForPeriodicity(
                                       *((_QWORD *)v21 + 2),
                                       *((_DWORD *)v21 + 93),
                                       (__int64)v18,
                                       v17,
                                       v44,
                                       v38);
        if ( PacketSizesFromConstraints >= 0 )
        {
          v23 = v38[0];
          v24 = p_Data1;
          *p_Data1 = v38[0];
          *a10 = v23;
          *a9 = v23;
          *a8 = v23;
          if ( !v38[1] && !a7 )
          {
            if ( v45 )
            {
              v48 = *v42;
              PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                             v45,
                                             a4->nAvgBytesPerSec,
                                             a4->nBlockAlign,
                                             &v48,
                                             v33,
                                             v34,
                                             v35,
                                             v36,
                                             a9,
                                             a10,
                                             v24);
            }
            else if ( a6 )
            {
              PacketSizesFromConstraints = HnsToBlocksRU(0x61A8uLL, a4->nAvgBytesPerSec, a4->nBlockAlign, &v38[1]);
              if ( PacketSizesFromConstraints >= 0 )
              {
                v25 = 32 * (((v38[1] - 1) >> 5) + 1);
                if ( v25 < *a8 )
                {
                  v26 = v40;
                  while ( (int)CheckConnectorSupportForPeriodicity(
                                 *((_QWORD *)v26 + 2),
                                 *((_DWORD *)v26 + 93),
                                 (__int64)v18,
                                 v39,
                                 (unsigned int)(int)((double)(int)v25 * 10000000.0 / (double)(int)a4->nSamplesPerSec
                                                   + 0.5),
                                 v38) < 0
                       || v25 != v38[0] )
                  {
                    v25 += 32;
                    if ( v25 >= *a8 )
                      goto LABEL_27;
                  }
                  *a10 = v38[0];
                }
LABEL_27:
                if ( *a10 < *a8 )
                {
                  v27 = 0;
                  while ( 1 )
                  {
                    v28 = 32 * (1 << v27);
                    v29 = v28 * ((*v12 - 1) / v28 + 1);
                    if ( v29 < *a8
                      && (int)CheckConnectorSupportForPeriodicity(
                                *((_QWORD *)v40 + 2),
                                *((_DWORD *)v40 + 93),
                                (__int64)v18,
                                v39,
                                (unsigned int)(int)((double)(int)v29 * 10000000.0 / (double)(int)a4->nSamplesPerSec + 0.5),
                                v38) >= 0
                      && v38[0] == v29 )
                    {
                      v30 = v41;
                      *v41 = v28;
                      goto LABEL_36;
                    }
                    if ( ++v27 >= 3 )
                      break;
                    v12 = v43;
                  }
                  v30 = v41;
LABEL_36:
                  v31 = *a8;
                  if ( *v30 == *a8 )
                  {
                    *v30 = v31;
                    *v43 = v31;
                  }
                }
              }
            }
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        v16 = v18;
        goto LABEL_39;
      }
      PacketSizesFromConstraints = -2147024882;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    v16 = 0LL;
LABEL_39:
    CoTaskMemFree(v16);
  }
  return (unsigned int)PacketSizesFromConstraints;
}

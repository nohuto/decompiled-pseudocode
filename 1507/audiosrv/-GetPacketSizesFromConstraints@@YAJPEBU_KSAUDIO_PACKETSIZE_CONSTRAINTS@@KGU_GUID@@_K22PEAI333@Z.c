/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@KGU_GUID@@_K22PEAI333@Z @ 0x1800A91D0
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAI666@Z @ 0x1800A7F00 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x1800A9440 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned int v14; // r9d
  unsigned int v15; // ebp
  unsigned int v16; // eax
  bool v17; // cf
  bool v18; // cc
  unsigned int v19; // r8d
  unsigned int v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned int v26; // esi
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r14d
  unsigned int v31; // eax
  unsigned int v32; // edi
  unsigned int v34; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v35[17]; // [rsp+24h] [rbp-44h] BYREF

  v11 = *(unsigned int *)a1;
  v12 = 5000LL;
  if ( v11 > 0x1388 )
    v12 = (unsigned int)v11;
  v14 = *((_DWORD *)a1 + 1) + 1;
  v15 = a3;
  v16 = v14;
  v17 = a3 < v14;
  v18 = a3 <= v14;
  v34 = a2;
  v19 = v14;
  if ( !v18 )
    v16 = v15;
  if ( v17 )
    v19 = v15;
  v21 = 1;
  v22 = v16 % v19;
  v23 = 0;
  while ( 1 )
  {
    v24 = v22;
    if ( !v22 )
      break;
    v22 = v19 % v22;
    v19 = v24;
  }
  v25 = v14 * (unsigned __int64)(v15 / v19);
  if ( v25 > 0xFFFFFFFF )
    return (unsigned int)-2004287480;
  v26 = (unsigned int)v25 / v15;
  if ( a9 )
    *a9 = (unsigned int)v25 / v15;
  v27 = 0;
  if ( *((_DWORD *)a1 + 3) )
  {
    while ( 1 )
    {
      v28 = *((_QWORD *)a1 + 3 * v27 + 2) - *(_QWORD *)&a4->Data1;
      if ( !v28 )
        v28 = *((_QWORD *)a1 + 3 * v27 + 3) - *(_QWORD *)a4->Data4;
      if ( !v28 )
        break;
      if ( ++v27 >= *((_DWORD *)a1 + 3) )
        goto LABEL_23;
    }
    v29 = 3LL * v27;
    if ( v12 <= *((unsigned int *)a1 + 2 * v29 + 9) )
      v12 = *((unsigned int *)a1 + 2 * v29 + 9);
    if ( *((_DWORD *)a1 + 2 * v29 + 8) )
      v21 = *((_DWORD *)a1 + 2 * v29 + 8);
  }
LABEL_23:
  v30 = v34;
  if ( (int)HnsToBlocksRU(v12, v34, v15, v35) < 0 )
    return (unsigned int)-2004287480;
  v31 = v35[0];
  if ( v21 > v35[0] )
    v31 = v21;
  v32 = v26 * ((v31 - 1) / v26 + 1);
  if ( a10 )
    *a10 = v32;
  if ( a11 )
  {
    if ( (int)HnsToBlocksRU(0x186A0uLL, v30, v15, &v34) < 0 )
      return (unsigned int)-2004287480;
    if ( v34 > v32 )
      v32 = v34;
    *a11 = v26 * ((v32 - 1) / v26 + 1);
  }
  return v23;
}

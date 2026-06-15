/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800894BC
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800883A0 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18008992C (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
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
  unsigned __int64 v11; // r10
  unsigned int *v12; // r14
  unsigned int v15; // edi
  unsigned int v16; // r9d
  unsigned __int64 v17; // rax
  unsigned int v18; // ebp
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned int v25; // r15d
  unsigned __int64 v26; // rcx
  unsigned int v27; // esi
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // edi
  unsigned int v33; // eax
  unsigned int *v34; // r13
  const struct PacketSizeConstraints *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v41; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v42; // [rsp+28h] [rbp-60h]
  unsigned int *v43; // [rsp+30h] [rbp-58h]
  unsigned int *v44; // [rsp+38h] [rbp-50h]
  const struct PacketSizeConstraints *v45; // [rsp+40h] [rbp-48h]

  v11 = 5000LL;
  v12 = (unsigned int *)*((_QWORD *)a1 + 1);
  v44 = a8;
  v15 = 1;
  v16 = v12[1];
  v43 = a10;
  v42 = a11;
  v17 = *v12;
  v18 = a3;
  v45 = a1;
  if ( v17 > 0x1388 )
    v11 = (unsigned int)v17;
  v19 = v16 + 1;
  v20 = v19;
  v21 = v19;
  if ( v18 > v19 )
    v20 = v18;
  if ( v18 < v19 )
    v21 = v18;
  v22 = v20 % v21;
  v23 = 0;
  while ( 1 )
  {
    v24 = v22;
    if ( !v22 )
      break;
    v22 = v21 % v22;
    v21 = v24;
  }
  v25 = -1;
  v26 = v19 * (unsigned __int64)(v18 / v21);
  if ( v26 > 0xFFFFFFFF )
    goto LABEL_33;
  v27 = (unsigned int)v26 / v18;
  if ( a9 )
    *a9 = (unsigned int)v26 / v18;
  v28 = 0;
  if ( v12[3] )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)&v12[6 * v28 + 4] - *(_QWORD *)&a4->Data1;
      if ( !v29 )
        v29 = *(_QWORD *)&v12[6 * v28 + 6] - *(_QWORD *)a4->Data4;
      if ( !v29 )
        break;
      if ( ++v28 >= v12[3] )
        goto LABEL_23;
    }
    v30 = 3LL * v28;
    if ( v11 <= v12[2 * v30 + 9] )
      v11 = v12[2 * v30 + 9];
    if ( v12[2 * v30 + 8] )
      v15 = v12[2 * v30 + 8];
  }
LABEL_23:
  if ( (int)HnsToBlocksRU(v11, a2, v18, &v41) < 0 )
    goto LABEL_33;
  v31 = v41;
  if ( v15 > v41 )
    v31 = v15;
  v32 = v27 * ((v31 - 1) / v27 + 1);
  *v43 = v32;
  if ( (int)HnsToBlocksRU(0x186A0uLL, a2, v18, &v41) < 0 )
    goto LABEL_33;
  v33 = v32;
  v34 = v44;
  if ( v41 > v32 )
    v33 = v41;
  v35 = v45;
  v36 = v27 * ((v33 - 1) / v27 + 1);
  *v44 = v36;
  if ( !*(_BYTE *)v35 )
  {
    *v42 = v36;
    return v23;
  }
  v37 = v12[2];
  if ( v37 )
    v25 = v27 * (v37 / (v27 * v18));
  if ( (int)HnsToBlocksRU(0x1E8480uLL, a2, v18, &v41) >= 0 )
  {
    v38 = *v34;
    if ( v41 > v32 )
      v32 = v41;
    v39 = v27 * ((v32 - 1) / v27 + 1);
    if ( v25 < v39 )
      v39 = v25;
    if ( v39 > v38 )
      v38 = v39;
    *v42 = v38;
  }
  else
  {
LABEL_33:
    v23 = -2004287480;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        (__int64)&WPP_3dded2e6bf653ecbc334b4283f1211e8_Traceguids,
        -2004287480);
    }
  }
  return v23;
}

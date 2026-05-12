/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C002CEAC
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C002AA9C (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002BE68 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     RaidGetStorPoFxComponent @ 0x1C0029344 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x1C0029380 (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(
        unsigned __int64 a1,
        int *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // esi
  __int64 v6; // r15
  char v7; // r13
  unsigned int v8; // r9d
  unsigned int v9; // r14d
  unsigned int i; // r10d
  char *StorPoFxComponent; // rax
  int v12; // r10d
  char *v13; // r11
  unsigned int v14; // ebx
  unsigned int j; // edx
  int v16; // edx
  size_t v17; // r12
  _DWORD *Pool; // rax
  _DWORD *v19; // rbx
  __int64 v21; // rax
  unsigned int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // rsi
  char *v25; // rax
  int v26; // r11d
  __int64 v27; // r10
  char *v28; // r12
  unsigned int v29; // r8d
  __int128 v30; // xmm0
  __int64 v31; // rdx
  unsigned int v32; // edx
  char *StorPoFxFState; // rax
  int v34; // edx
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 (__fastcall *v37)(); // rax
  __int64 v38; // r8
  int v39; // esi
  const struct _TlgProvider_t *v40; // rcx
  int v41; // ebx
  const GUID *v42; // r8
  const GUID *v43; // r9
  int v44; // r10d
  int v45; // r11d
  __int64 v46; // rcx
  const struct _TlgProvider_t *v47; // rcx
  unsigned int v48; // ecx
  const GUID *v49; // r8
  const GUID *v50; // r9
  int v51; // r10d
  int v52; // eax
  unsigned int v53; // eax
  unsigned __int8 v54; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v55; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v56; // [rsp+32h] [rbp-CEh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 *v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  unsigned __int8 *Data4; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  char *v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  unsigned int *v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  struct _TlgProvider_t *v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  struct _TlgProvider_t *p_hProvider; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  unsigned int *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  char *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  char *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  char *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]

  v4 = a2[2];
  *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = a4;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4) = a3;
  v6 = a1;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4) = a1;
  v7 = 1;
  v8 = 80;
  v9 = 0;
  for ( i = 0; i < v4; i = v12 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(a2, i);
    v13 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      v8 += 56;
      if ( *((_DWORD *)StorPoFxComponent + 2) > v9 )
        v9 = *((_DWORD *)StorPoFxComponent + 2);
    }
    v14 = *((_DWORD *)StorPoFxComponent + 2);
    for ( j = 0; j < v14; j = v16 + 1 )
    {
      if ( RaidGetStorPoFxFState(v13, j) )
        v8 += 24;
    }
  }
  v17 = v8;
  Pool = RaidAllocatePool(NonPagedPoolNx, v8, 0x4F506152u, v6);
  v19 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v17);
  v21 = *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4);
  *v19 = 2;
  v22 = 0;
  v19[18] = v4;
  v23 = 3LL;
  *((_QWORD *)v19 + 8) = v21;
  if ( v4 )
  {
    do
    {
      v24 = 14LL * v22;
      v25 = RaidGetStorPoFxComponent(a2, v22);
      *(_QWORD *)&v19[v24 + 28] = v27;
      v28 = v25;
      v29 = *((_DWORD *)v25 + 2);
      v19[v24 + 27] = v29;
      v19[v24 + 26] = *((_DWORD *)v25 + 3);
      v30 = *((_OWORD *)v25 + 1);
      *(_QWORD *)&v19[v24 + 24] = 1LL;
      v31 = *(_QWORD *)&v19[v24 + 24];
      *(_OWORD *)&v19[v24 + 20] = v30;
      if ( (a2[3] & 0x100) != 0 )
        v31 = v23;
      *(_QWORD *)&v19[v24 + 24] = v31;
      v32 = 0;
      if ( v29 > 1 )
        v7 = 0;
      if ( v29 )
      {
        do
        {
          StorPoFxFState = RaidGetStorPoFxFState(v28, v32);
          v32 = v34 + 1;
          *(_DWORD *)(v36 + 8 * v35 + 16) = *((_DWORD *)StorPoFxFState + 6);
          *(_QWORD *)(v36 + 8 * v35 + 8) = *((_QWORD *)StorPoFxFState + 2);
          *(_QWORD *)(v36 + 8 * v35) = *((_QWORD *)StorPoFxFState + 1);
        }
        while ( v32 < v19[v24 + 27] );
        v23 = 3LL;
      }
      v22 = v26 + 1;
    }
    while ( v22 < v19[18] );
    v6 = *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4);
  }
  if ( **(_DWORD **)(v6 + 64) == 1 )
  {
    if ( !v7 )
      *((_QWORD *)v19 + 4) = StorPortUnitIdleState;
    *((_QWORD *)v19 + 2) = StorPortUnitActiveConditionStep1;
    *((_QWORD *)v19 + 3) = StorPortUnitIdleCondition;
    *((_QWORD *)v19 + 6) = StorPortUnitPowerNotRequiredStep1;
    *((_QWORD *)v19 + 5) = StorPortUnitPowerRequiredStep1;
    v37 = StorPortUnitPowerControl;
  }
  else
  {
    if ( !v7 )
      *((_QWORD *)v19 + 4) = StorPortAdapterIdleState;
    *((_QWORD *)v19 + 2) = StorPortAdapterActiveCondition;
    *((_QWORD *)v19 + 3) = StorPortAdapterIdleCondition;
    *((_QWORD *)v19 + 6) = StorPortAdapterPowerNotRequiredStep1;
    *((_QWORD *)v19 + 5) = StorPortAdapterPowerRequiredStep1;
    v37 = (__int64 (__fastcall *)())StorPortAdapterPowerControl;
  }
  v38 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
  *((_QWORD *)v19 + 7) = v37;
  v39 = PoFxRegisterDevice(v6, v19, v38, v23);
  ExFreePoolWithTag(v19, 0x4F506152u);
  if ( v39 >= 0 )
  {
    v40 = (const struct _TlgProvider_t *)**(unsigned int **)(v6 + 64);
    if ( (_DWORD)v40 == 1 )
    {
      v41 = 0;
      if ( (unsigned int)*a2 >= 2 )
        v41 = a2[4];
      if ( (unsigned int)dword_1C0048030 > 5 )
      {
        if ( TlgKeywordOn(v40, 0x400000000000uLL) )
        {
          v46 = *(_QWORD *)v43[1].Data4;
          HIDWORD(hProvider.RegHandle) = *(_DWORD *)(v46 + 56);
          v55 = v43[5].Data4[0];
          v54 = v43[5].Data4[1];
          v56 = v43[5].Data4[2];
          hProvider.LevelPlus1 = a2[2];
          HIDWORD(hProvider.ProviderMetadataPtr) = a2[3];
          v58 = (unsigned __int8 *)(v46 + 5192);
          v64 = &v55;
          Data4 = v43[105].Data4;
          v66 = (unsigned int *)&v54;
          LODWORD(hProvider.EnableCallback) = v44;
          v68 = (struct _TlgProvider_t *)&v56;
          p_EnableCallback = &hProvider.EnableCallback;
          p_hProvider = &hProvider;
          v74 = &hProvider.LevelPlus1 + 1;
          v76 = (char *)&hProvider.ProviderMetadataPtr + 4;
          v78 = (char *)&hProvider.KeywordAny + 4;
          v80 = (char *)&hProvider.KeywordAll + 4;
          *(&hProvider.LevelPlus1 + 1) = v9;
          HIDWORD(hProvider.KeywordAny) = v41;
          HIDWORD(hProvider.KeywordAll) = v45;
          v59 = 16LL;
          v61 = 16LL;
          v62 = (char *)&hProvider.RegHandle + 4;
          v63 = 4LL;
          v65 = 1LL;
          v67 = 1LL;
          v69 = 1LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          TlgWrite(
            (TraceLoggingHProvider)((char *)&hProvider.KeywordAll + 4),
            &unk_1C003FE6B,
            v42,
            v43,
            0xEu,
            (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
        }
      }
    }
    else if ( !(_DWORD)v40 )
    {
      v47 = 0LL;
      if ( (unsigned int)*a2 >= 2 )
        v47 = (const struct _TlgProvider_t *)(unsigned int)a2[4];
      if ( (unsigned int)dword_1C0048030 > 5 && TlgKeywordOn(v47, 0x400000000000uLL) )
      {
        v52 = a2[2];
        hProvider.LevelPlus1 = v48;
        v62 = (char *)&hProvider.KeywordAny + 4;
        HIDWORD(hProvider.KeywordAny) = v52;
        v53 = a2[3];
        v64 = (unsigned __int8 *)&hProvider.ProviderMetadataPtr + 4;
        *(&hProvider.LevelPlus1 + 1) = v53;
        v66 = &hProvider.LevelPlus1 + 1;
        v58 = v50[324].Data4;
        v68 = &hProvider;
        HIDWORD(hProvider.KeywordAll) = v51;
        HIDWORD(hProvider.ProviderMetadataPtr) = v9;
        v59 = 16LL;
        Data4 = (unsigned __int8 *)&hProvider.KeywordAll + 4;
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v69 = 4LL;
        TlgWrite(
          &hProvider,
          &unk_1C003FF32,
          v49,
          v50,
          8u,
          (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
      }
    }
  }
  return (unsigned int)v39;
}

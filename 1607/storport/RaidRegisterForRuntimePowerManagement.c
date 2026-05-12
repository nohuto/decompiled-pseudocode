/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C000EF80
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C0019138 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002F9A8 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0058AB4 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidGetStorPoFxFState @ 0x1C000F358 (RaidGetStorPoFxFState.c)
 *     RaidGetStorPoFxComponent @ 0x1C000F4A4 (RaidGetStorPoFxComponent.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  _DWORD *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r9
  char i; // r13
  __int64 StorPoFxComponent; // rax
  int v12; // r10d
  __int64 v13; // r11
  unsigned int v14; // ebx
  __int64 j; // rdx
  int v16; // edx
  unsigned int v17; // r12d
  _DWORD *Pool; // rax
  _DWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // r11d
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // r11d
  __int64 v27; // r10
  unsigned int v28; // r12d
  unsigned int v29; // edx
  __int128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 StorPoFxFState; // rax
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 (__fastcall *v36)(); // rax
  __int64 v37; // r8
  int v38; // esi
  const struct _TlgProvider_t *v39; // rcx
  int v40; // ebx
  const GUID *v41; // r8
  const GUID *v42; // r9
  int v43; // r10d
  unsigned int v44; // r11d
  const struct _TlgProvider_t *v46; // rcx
  unsigned int v47; // ecx
  const GUID *v48; // r8
  const GUID *v49; // r9
  unsigned int v50; // r10d
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  unsigned __int8 v54; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v55; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v56; // [rsp+32h] [rbp-CEh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 *v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  unsigned int *Data4; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  char *v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  struct _TlgProvider_t *v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  struct _TlgProvider_t *p_hProvider; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  char *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  char *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  char *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  unsigned int *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  v6 = 0;
  *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = a4;
  *(_QWORD *)(&hProvider.LevelPlus1 + 1) = a3;
  v7 = (_DWORD *)a2;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4) = a2;
  v8 = a1;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4) = a1;
  v9 = 80LL;
  for ( i = 1; v6 < v4; v6 = v12 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(v7, v6, a3, v9);
    v13 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      v9 = (unsigned int)(v9 + 56);
      if ( *(_DWORD *)(StorPoFxComponent + 8) > v5 )
        v5 = *(_DWORD *)(StorPoFxComponent + 8);
    }
    v14 = *(_DWORD *)(StorPoFxComponent + 8);
    for ( j = 0LL; (unsigned int)j < v14; j = (unsigned int)(v16 + 1) )
    {
      if ( RaidGetStorPoFxFState(v13, j, a3, v9) )
        v9 = (unsigned int)(v9 + 24);
    }
  }
  v17 = v9;
  Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)v9, 0x4F506152u, v8);
  v19 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v17);
  v21 = *(_QWORD *)(&hProvider.LevelPlus1 + 1);
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
      v25 = RaidGetStorPoFxComponent(v7, v22, v20, v23);
      *(_QWORD *)&v19[v24 + 28] = v27;
      v28 = 0;
      v29 = *(_DWORD *)(v25 + 8);
      v19[v24 + 27] = v29;
      v19[v24 + 26] = *(_DWORD *)(v25 + 12);
      v30 = *(_OWORD *)(v25 + 16);
      *(_QWORD *)&v19[v24 + 24] = 1LL;
      v31 = *(_QWORD *)&v19[v24 + 24];
      *(_OWORD *)&v19[v24 + 20] = v30;
      if ( (v7[3] & 0x100) != 0 )
        v31 = v23;
      *(_QWORD *)&v19[v24 + 24] = v31;
      if ( v29 > 1 )
        i = 0;
      if ( v29 )
      {
        v32 = v25;
        do
        {
          StorPoFxFState = RaidGetStorPoFxFState(v32, v28, v20, 3LL * v28);
          ++v28;
          *(_DWORD *)(v35 + 8 * v34 + 16) = *(_DWORD *)(StorPoFxFState + 24);
          *(_QWORD *)(v35 + 8 * v34 + 8) = *(_QWORD *)(StorPoFxFState + 16);
          *(_QWORD *)(v35 + 8 * v34) = *(_QWORD *)(StorPoFxFState + 8);
        }
        while ( v28 < v19[v24 + 27] );
        v7 = *(_DWORD **)((char *)&hProvider.KeywordAll + 4);
        v23 = 3LL;
      }
      v22 = v26 + 1;
    }
    while ( v22 < v19[18] );
    v8 = *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4);
  }
  if ( **(_DWORD **)(v8 + 64) == 1 )
  {
    if ( !i )
      *((_QWORD *)v19 + 4) = StorPortUnitIdleState;
    *((_QWORD *)v19 + 2) = StorPortUnitActiveConditionStep1;
    *((_QWORD *)v19 + 3) = StorPortUnitIdleCondition;
    *((_QWORD *)v19 + 6) = StorPortUnitPowerNotRequiredStep1;
    *((_QWORD *)v19 + 5) = StorPortUnitPowerRequiredStep1;
    v36 = StorPortUnitPowerControl;
  }
  else
  {
    if ( !i )
      *((_QWORD *)v19 + 4) = StorPortAdapterIdleState;
    *((_QWORD *)v19 + 2) = StorPortAdapterActiveCondition;
    *((_QWORD *)v19 + 3) = StorPortAdapterIdleCondition;
    *((_QWORD *)v19 + 6) = StorPortAdapterPowerNotRequiredStep1;
    *((_QWORD *)v19 + 5) = StorPortAdapterPowerRequiredStep1;
    v36 = (__int64 (__fastcall *)())StorPortAdapterPowerControl;
  }
  v37 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
  *((_QWORD *)v19 + 7) = v36;
  v38 = PoFxRegisterDevice(v8, v19, v37, v23);
  ExFreePoolWithTag(v19, 0x4F506152u);
  if ( v38 >= 0 )
  {
    v39 = (const struct _TlgProvider_t *)**(unsigned int **)(v8 + 64);
    if ( (_DWORD)v39 == 1 )
    {
      v40 = 0;
      if ( *v7 >= 2u )
        v40 = v7[4];
      if ( (unsigned int)dword_1C004F010 > 5 )
      {
        if ( TlgKeywordOn(v39, 0x400000000000uLL) )
        {
          v53 = *(_QWORD *)v42[1].Data4;
          HIDWORD(hProvider.RegHandle) = *(_DWORD *)(v53 + 56);
          v54 = v42[5].Data4[0];
          v55 = v42[5].Data4[1];
          v56 = v42[5].Data4[2];
          hProvider.LevelPlus1 = v7[2];
          HIDWORD(hProvider.KeywordAny) = v7[3];
          v58 = (unsigned __int8 *)(v53 + 5192);
          v64 = &v54;
          Data4 = (unsigned int *)v42[105].Data4;
          v66 = &v55;
          LODWORD(hProvider.EnableCallback) = v43;
          v68 = (struct _TlgProvider_t *)&v56;
          p_EnableCallback = &hProvider.EnableCallback;
          p_hProvider = &hProvider;
          v74 = (char *)&hProvider.ProviderMetadataPtr + 4;
          v76 = (char *)&hProvider.KeywordAny + 4;
          v78 = (char *)&hProvider.KeywordAll + 4;
          v80 = &hProvider.LevelPlus1 + 1;
          HIDWORD(hProvider.ProviderMetadataPtr) = v5;
          HIDWORD(hProvider.KeywordAll) = v40;
          *(&hProvider.LevelPlus1 + 1) = v44;
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
            (TraceLoggingHProvider)(&hProvider.LevelPlus1 + 1),
            &unk_1C0045FDC,
            v41,
            v42,
            0xEu,
            (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
        }
      }
    }
    else if ( !(_DWORD)v39 )
    {
      v46 = 0LL;
      if ( *v7 >= 2u )
        v46 = (const struct _TlgProvider_t *)(unsigned int)v7[4];
      if ( (unsigned int)dword_1C004F010 > 5 && TlgKeywordOn(v46, 0x400000000000uLL) )
      {
        v51 = v7[2];
        hProvider.LevelPlus1 = v47;
        v62 = (char *)&hProvider.KeywordAll + 4;
        HIDWORD(hProvider.KeywordAll) = v51;
        v52 = v7[3];
        v64 = (unsigned __int8 *)&hProvider.KeywordAny + 4;
        HIDWORD(hProvider.ProviderMetadataPtr) = v52;
        v66 = (unsigned __int8 *)&hProvider.ProviderMetadataPtr + 4;
        v58 = v49[324].Data4;
        v68 = &hProvider;
        *(&hProvider.LevelPlus1 + 1) = v50;
        HIDWORD(hProvider.KeywordAny) = v5;
        v59 = 16LL;
        Data4 = &hProvider.LevelPlus1 + 1;
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v69 = 4LL;
        TlgWrite(
          &hProvider,
          &unk_1C00460A3,
          v48,
          v49,
          8u,
          (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
      }
    }
  }
  return (unsigned int)v38;
}

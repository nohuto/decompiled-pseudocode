/*
 * XREFs of ReadPointerDeviceSettingsFull @ 0x1402CA3AC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x14013EB3C (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x14016E3F4 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x14016E560 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x14016E7E0 (GetLocalMachineRegistryDWORDValues.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x140251DDC (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402C9C48 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettingsFull(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  __int64 UserSessionState; // rax
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 *v8; // r8
  __int64 v9; // r14
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  _DWORD *v27; // rsi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rsi
  int LocalMachineRegistryDWORDValues; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int128 v48; // [rsp+20h] [rbp-28h] BYREF
  __int128 v49; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = UserSessionState;
  v10 = v3 - 148;
  if ( !v10 )
  {
    if ( !*(_DWORD *)(UserSessionState + 18248) )
      LoadPointerDevicePenSettings(v7, (__int64)v6);
    v35 = *(_QWORD *)(v9 + 18256);
    *(_QWORD *)&v48 = L"PreventFlicks";
    *((_QWORD *)&v48 + 1) = 0LL;
    v49 = *(_OWORD *)(v35 + 96);
    LocalMachineRegistryDWORDValues = GetLocalMachineRegistryDWORDValues(
                                        v7,
                                        (size_t)L"\\Software\\Policies\\Microsoft\\TabletPC",
                                        &v48);
    if ( HIDWORD(v48) )
    {
      if ( LocalMachineRegistryDWORDValues >= 0 )
      {
LABEL_49:
        v37 = *(_DWORD *)(v35 + 12);
        if ( v37 == -1 )
          v37 = *(_DWORD *)(v35 + 8);
        *(_DWORD *)a2 = v37;
        v38 = *(_DWORD *)(v35 + 28);
        if ( v38 == -1 )
          v38 = *(_DWORD *)(v35 + 24);
        *(_DWORD *)(a2 + 4) = v38;
        v39 = *(_DWORD *)(v35 + 44);
        if ( v39 == -1 )
          v39 = *(_DWORD *)(v35 + 40);
        *(_DWORD *)(a2 + 8) = v39;
        v40 = *(_DWORD *)(v35 + 60);
        if ( v40 == -1 )
          v40 = *(_DWORD *)(v35 + 56);
        *(_DWORD *)(a2 + 12) = v40;
        v41 = *(_DWORD *)(v35 + 76);
        if ( v41 == -1 )
          v41 = *(_DWORD *)(v35 + 72);
        *(_DWORD *)(a2 + 16) = v41;
        v42 = *(_DWORD *)(v35 + 92);
        if ( v42 == -1 )
          v42 = *(_DWORD *)(v35 + 88);
        *(_DWORD *)(a2 + 20) = v42;
        v43 = DWORD2(v49);
        if ( v4 != -1 )
          v43 = v4;
        *(_DWORD *)(a2 + 24) = v43;
        v44 = *(_DWORD *)(v35 + 124);
        if ( v44 == -1 )
          v44 = *(_DWORD *)(v35 + 120);
        *(_DWORD *)(a2 + 28) = v44;
        v45 = *(_DWORD *)(v35 + 140);
        if ( v45 == -1 )
          v45 = *(_DWORD *)(v35 + 136);
        *(_DWORD *)(a2 + 32) = v45;
        v46 = *(_DWORD *)(v35 + 156);
        if ( v46 == -1 )
          v46 = *(_DWORD *)(v35 + 152);
        *(_DWORD *)(a2 + 36) = v46;
        return 1;
      }
    }
    else if ( (unsigned int)GetDWORDSettingValues(6LL, &v48) && HIDWORD(v48) == 1 )
    {
      goto LABEL_49;
    }
    v4 = HIDWORD(v49);
    goto LABEL_49;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v27 = *(_DWORD **)(UserSessionState + 18080);
    if ( !*(_DWORD *)(UserSessionState + 18072) )
      GetDWORDSettingValues(7LL, *(_QWORD *)(UserSessionState + 18080));
    v28 = v27[3];
    if ( v28 == -1 )
      v28 = v27[2];
    *(_DWORD *)a2 = v28;
    v29 = v27[7];
    if ( v29 == -1 )
      v29 = v27[6];
    *(_DWORD *)(a2 + 4) = v29;
    v30 = v27[11];
    if ( v30 == -1 )
      v30 = v27[10];
    *(_DWORD *)(a2 + 8) = v30;
    v31 = v27[15];
    if ( v31 == -1 )
      v31 = v27[14];
    *(_DWORD *)(a2 + 12) = v31;
    v32 = v27[19];
    if ( v32 == -1 )
      v32 = v27[18];
    *(_DWORD *)(a2 + 16) = v32;
    v33 = v27[23];
    if ( v33 == -1 )
      v33 = v27[22];
    *(_DWORD *)(a2 + 20) = v33;
    v34 = v27[27];
    if ( v34 == -1 )
      v34 = v27[26];
    *(_DWORD *)(a2 + 24) = v34;
    return 1;
  }
  v12 = v11 - 2;
  if ( !v12 )
    return GetFlickMap((struct tagFLICK_MAP *)a2, (__int64)v6);
  v13 = v12 - 2;
  if ( !v13 )
    return GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
  if ( v13 == 2 )
  {
    if ( !*(_DWORD *)(UserSessionState + 18520)
      && (int)CreatePredictionSettings(*(struct tagDEVICECONFIG_SETTING **)(UserSessionState + 18528), v6, v8) >= 0 )
    {
      *(_DWORD *)(v9 + 18520) = 1;
    }
    if ( *(_DWORD *)(v9 + 18520) == 1 )
    {
      v14 = *(_QWORD *)(v9 + 18528);
      GetPredictionSettings((struct tagDEVICECONFIG_SETTING *)v14, v6, v8);
      v17 = *(_DWORD *)(v14 + 12);
      v18 = 60;
      if ( v17 == -1 )
      {
        v19 = *(_DWORD *)(v14 + 8);
      }
      else
      {
        v19 = 60;
        if ( v17 <= 0x3C )
          v19 = *(_DWORD *)(v14 + 12);
      }
      *(_DWORD *)(a2 + 4) = v19;
      *(_DWORD *)(W32GetUserSessionState(v16, v15) + 18968) = v19;
      v22 = *(_DWORD *)(v14 + 28);
      if ( v22 == -1 )
      {
        v18 = *(_DWORD *)(v14 + 24);
      }
      else if ( v22 <= 0x3C )
      {
        v18 = *(_DWORD *)(v14 + 28);
      }
      *(_DWORD *)(a2 + 8) = v18;
      *(_DWORD *)(W32GetUserSessionState(v21, v20) + 18972) = v18;
      v25 = *(_DWORD *)(v14 + 44);
      if ( v25 == -1 )
        v25 = *(_DWORD *)(v14 + 40);
      *(_DWORD *)(a2 + 12) = v25;
      *(_DWORD *)(W32GetUserSessionState(v24, v23) + 18976) = v25;
      return 1;
    }
  }
  return v4;
}

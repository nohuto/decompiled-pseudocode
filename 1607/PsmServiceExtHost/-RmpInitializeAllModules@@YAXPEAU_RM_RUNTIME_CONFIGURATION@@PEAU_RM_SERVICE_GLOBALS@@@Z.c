/*
 * XREFs of ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001E19C
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18001B108 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001E37C (-RmpGameModePublishGlobalState@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     RmpEnforcerContextInitialize @ 0x18001E3B8 (RmpEnforcerContextInitialize.c)
 *     RmpCpuSetManagerInitialize @ 0x18001E4B4 (RmpCpuSetManagerInitialize.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpSystemEnableAsyncInSwap @ 0x180037828 (RmpSystemEnableAsyncInSwap.c)
 */

void __fastcall RmpInitializeAllModules(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  bool v4; // zf
  unsigned __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-50h]

  memset_0(a2, 0, 0xD20uLL);
  v4 = (*(_BYTE *)a1 & 0x20) == 0;
  RmpNextHandleValues = (unsigned __int64 near *)1;
  qword_18004C748 = 1LL;
  qword_18004C750 = 1LL;
  qword_18004C758 = 1LL;
  if ( !v4 )
    RmpSystemEnableAsyncInSwap();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v5 = v18;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  RmpPageSize = v5;
  *((_QWORD *)a2 + 375) = 0LL;
  *((_QWORD *)a2 + 376) = 0LL;
  *((_QWORD *)a2 + 377) = 0LL;
  *((_QWORD *)a2 + 378) = 0LL;
  RmpCpuSetManagerInitialize(a2);
  RmpEnforcerContextInitialize(a1, a2);
  memset_0((char *)a2 + 2920, 0, 0x50uLL);
  *((_QWORD *)a2 + 365) = a2;
  *((_QWORD *)a2 + 367) = (char *)a2 + 2928;
  *((_QWORD *)a2 + 366) = (char *)a2 + 2928;
  RmpGameModePublishGlobalState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2920));
  memset_0((char *)a2 + 328, 0, 0x60uLL);
  *((_DWORD *)a2 + 98) = *((_DWORD *)a1 + 32);
  *((_DWORD *)a2 + 99) = *((_DWORD *)a1 + 34);
  *((_DWORD *)a2 + 100) = *((_DWORD *)a1 + 35);
  *((_DWORD *)a2 + 102) = *((_DWORD *)a1 + 36);
  *((_DWORD *)a2 + 105) = 3;
  memset_0((char *)a2 + 424, 0, 0x5A0uLL);
  v6 = *(_OWORD *)((char *)a1 + 8);
  v7 = *(_OWORD *)((char *)a1 + 24);
  *((_DWORD *)a2 + 459) = *(_DWORD *)a1;
  v8 = *((_DWORD *)a1 + 1);
  *(_OWORD *)((char *)a2 + 424) = v6;
  *((_DWORD *)a2 + 460) = v8;
  v9 = *(_OWORD *)((char *)a1 + 40);
  v10 = *((_DWORD *)a1 + 31);
  *(_OWORD *)((char *)a2 + 440) = v7;
  *((_DWORD *)a2 + 464) = v10;
  v11 = *(_OWORD *)((char *)a1 + 56);
  v12 = *((_DWORD *)a1 + 33);
  *(_OWORD *)((char *)a2 + 456) = v9;
  *((_DWORD *)a2 + 463) = v12;
  v13 = *(_OWORD *)((char *)a1 + 72);
  v14 = *((_DWORD *)a1 + 30);
  *(_OWORD *)((char *)a2 + 472) = v11;
  *((_DWORD *)a2 + 461) = v14;
  v15 = *(_OWORD *)((char *)a1 + 88);
  *((_DWORD *)a2 + 462) = 60;
  *(_OWORD *)((char *)a2 + 488) = v13;
  v16 = *(_OWORD *)((char *)a1 + 104);
  *(_OWORD *)((char *)a2 + 504) = v15;
  *(_OWORD *)((char *)a2 + 520) = v16;
  memset_0((char *)a2 + 1888, 0, 0x38uLL);
}

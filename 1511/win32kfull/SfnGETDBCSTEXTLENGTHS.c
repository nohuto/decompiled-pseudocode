/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C00E5330
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C011F134 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0122F00 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

ULONG_PTR __fastcall SfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v11; // r12d
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r15d
  unsigned int v26; // r14d
  __int64 v27; // r12
  unsigned __int8 *v28; // rax
  unsigned __int8 *v29; // rbx
  int v30; // ecx
  ULONG_PTR v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  ULONG_PTR *v39; // rdi
  ULONG_PTR v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 v42; // xmm1_8
  int v44; // [rsp+30h] [rbp-378h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-370h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-368h] BYREF
  int v47; // [rsp+48h] [rbp-360h] BYREF
  int v48; // [rsp+4Ch] [rbp-35Ch]
  int v49; // [rsp+50h] [rbp-358h]
  int v50; // [rsp+54h] [rbp-354h] BYREF
  __int128 v51; // [rsp+58h] [rbp-350h]
  unsigned __int64 v52; // [rsp+68h] [rbp-340h] BYREF
  __int128 v53; // [rsp+70h] [rbp-338h] BYREF
  __int64 v54; // [rsp+80h] [rbp-328h]
  _QWORD v55[6]; // [rsp+88h] [rbp-320h] BYREF
  _QWORD v56[3]; // [rsp+B8h] [rbp-2F0h] BYREF
  _QWORD v57[5]; // [rsp+D0h] [rbp-2D8h] BYREF
  _QWORD v58[3]; // [rsp+F8h] [rbp-2B0h] BYREF
  unsigned __int8 v59[96]; // [rsp+110h] [rbp-298h] BYREF
  unsigned __int8 v60[512]; // [rsp+170h] [rbp-238h] BYREF

  RegionSize = a3;
  v48 = a2;
  v11 = a4 != 0;
  v49 = v11;
  v44 = a7 & 1;
  v12 = *(_QWORD *)(a1 + 144);
  v13 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  memset(v55, 0, 0x28uLL);
  v55[0] = v13;
  LODWORD(v55[1]) = a2;
  v55[2] = a3;
  v55[3] = a5;
  v55[4] = a6;
  v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v56;
  v56[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v51 = *(_OWORD *)(v14 + 64);
  v46 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v13;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = *(_QWORD *)a1;
  v15 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v15;
  UserSessionSwitchLeaveCrit(v15, v16);
  EtwTraceBeginCallback(6LL);
  LODWORD(v13) = KeUserModeCallback(6LL, v55, 40LL, &v52, &v50);
  EtwTraceEndCallback(6LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v51;
  *(_QWORD *)(v19 + 80) = v46;
  if ( (int)v13 < 0 || v50 != 24 )
    return 0LL;
  v20 = (__int64 *)v52;
  if ( v52 + 8 < v52 || v52 + 8 > W32UserProbeAddress )
    v20 = (__int64 *)W32UserProbeAddress;
  v21 = *v20;
  v46 = v21;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v21 <= 0 || v11 == v44 )
    return v21;
  if ( *(_QWORD *)(a1 + 144) != v12 )
    goto LABEL_26;
  v22 = 0;
  if ( a2 == 14 )
    goto LABEL_23;
  if ( !HMValidateHandleNoSecure(*(_QWORD *)a1, 1) )
    return 0LL;
  v23 = *(_DWORD *)(a1 + 52);
  if ( a2 == 394 )
  {
    if ( (v23 & 0x40) != 0 || (v23 & 0x30) == 0 )
      goto LABEL_24;
    goto LABEL_21;
  }
  if ( a2 != 329 )
    return 0LL;
  if ( (v23 & 0x200) == 0 && (v23 & 0x30) != 0 )
  {
LABEL_21:
    v22 = 1;
    v21 = 8LL;
    goto LABEL_23;
  }
  v22 = 0;
LABEL_23:
  if ( v22 )
    return v21;
LABEL_24:
  v24 = *(_DWORD *)(gptiCurrent + 440LL);
  if ( (v24 & 0x4000000) != 0 )
  {
    if ( v11 )
LABEL_26:
      v21 *= 2LL;
    return v21;
  }
  v25 = v21 + 1;
  v26 = v21 + 1;
  v27 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  *(_DWORD *)(gptiCurrent + 440LL) = v24 | 0x4000000;
  if ( (a7 & 1) == 0 )
    v26 = 2 * v25;
  v28 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v26, v60, 0, 0x200uLL);
  v29 = v28;
  *(_QWORD *)&v51 = v28;
  if ( !v28 )
    return 0LL;
  if ( v28 != v59 && v28 != v60 )
    PushW32ThreadLock((__int64)v28, v58, (__int64)Win32FreePool);
  *((_QWORD *)v29 + 5) = v27;
  v30 = v48;
  *((_DWORD *)v29 + 12) = v48 - 1;
  v31 = v25;
  if ( v30 != 14 )
    v31 = RegionSize;
  *((_QWORD *)v29 + 7) = v31;
  *((_QWORD *)v29 + 8) = a5;
  *((_QWORD *)v29 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v29, v26, (void **)v29 + 10) < 0 )
    goto LABEL_49;
  *((_DWORD *)v29 + 22) = v26;
  v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v57;
  v57[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  v33 = *(_QWORD *)(gptiCurrent + 432LL);
  v53 = *(_OWORD *)(v33 + 64);
  RegionSize = *(_QWORD *)(v33 + 80);
  *(_QWORD *)(v33 + 72) = v27;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = *(_QWORD *)a1;
  v34 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v34;
  UserSessionSwitchLeaveCrit(v34, v32);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v29 + 2) = 0LL;
  v35 = KeUserModeCallback(35LL, v29, *(unsigned int *)v29, &v46, &v47);
  EtwTraceEndCallback(35LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v37, v36);
  v38 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v38 + 64) = v53;
  *(_QWORD *)(v38 + 80) = RegionSize;
  if ( v35 < 0 )
    goto LABEL_49;
  if ( v47 == 24 )
  {
    v39 = (ULONG_PTR *)v46;
    if ( v46 + 8 < v46 || v46 + 8 > W32UserProbeAddress )
      v39 = (ULONG_PTR *)W32UserProbeAddress;
    v40 = *v39;
    RegionSize = v40;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v40 > 0 )
    {
      v41 = v46;
      if ( v46 + 24 < v46 || v46 + 24 > W32UserProbeAddress )
        v41 = W32UserProbeAddress;
      v42 = *(_QWORD *)(v41 + 16);
      v53 = *(_OWORD *)v41;
      v54 = v42;
      v40 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v53, v40, v49, v44);
      RegionSize = v40;
    }
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x4000000u;
  }
  else
  {
LABEL_49:
    v40 = 0LL;
  }
  if ( v29 != v59 && v29 != v60 )
  {
    if ( *((_QWORD *)v29 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v29 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v58);
  }
  return v40;
}

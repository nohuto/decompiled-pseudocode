/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C0108910
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0091118 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // rbx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // r14d
  __int64 v29; // r12
  unsigned __int8 *v30; // rax
  __int64 v31; // r9
  unsigned __int8 *v32; // rbx
  int v33; // ecx
  ULONG_PTR v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 *v43; // rdi
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  __int64 v46; // xmm1_8
  PVOID *v47; // rdx
  int v48; // [rsp+30h] [rbp-408h]
  int v49; // [rsp+34h] [rbp-404h]
  int v50; // [rsp+40h] [rbp-3F8h] BYREF
  int v51; // [rsp+44h] [rbp-3F4h]
  _DWORD v52[10]; // [rsp+48h] [rbp-3F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-3C8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-3C0h]
  unsigned __int64 v55; // [rsp+80h] [rbp-3B8h] BYREF
  __int64 v56; // [rsp+88h] [rbp-3B0h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-398h] BYREF
  _QWORD v58[5]; // [rsp+B0h] [rbp-388h] BYREF
  __int128 v59; // [rsp+D8h] [rbp-360h]
  __int64 v60; // [rsp+E8h] [rbp-350h]
  __int128 v61; // [rsp+F0h] [rbp-348h]
  __int64 v62; // [rsp+100h] [rbp-338h]
  _QWORD v63[3]; // [rsp+140h] [rbp-2F8h] BYREF
  _QWORD v64[3]; // [rsp+158h] [rbp-2E0h] BYREF
  __int128 v65; // [rsp+170h] [rbp-2C8h] BYREF
  __int64 v66; // [rsp+180h] [rbp-2B8h]
  _QWORD v67[3]; // [rsp+188h] [rbp-2B0h] BYREF
  unsigned __int8 v68[96]; // [rsp+1A0h] [rbp-298h] BYREF
  unsigned __int8 v69[512]; // [rsp+200h] [rbp-238h] BYREF

  RegionSize = a3;
  v51 = a2;
  v49 = a4 != 0;
  v48 = a7 & 1;
  v11 = *(_QWORD *)(a1 + 144);
  v54 = 0LL;
  v12 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  memset(v58, 0, sizeof(v58));
  v58[0] = v12;
  LODWORD(v58[1]) = a2;
  v58[2] = a3;
  v58[3] = a5;
  v58[4] = a6;
  v63[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v63;
  v63[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v59 = *(_OWORD *)(v13 + 64);
  v60 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = *(_QWORD *)a1;
  v14 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v14;
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation);
  EtwTraceBeginCallback(6LL);
  v15 = KeUserModeCallback(6LL, v58, 40LL, &v57, &v50);
  EtwTraceEndCallback(6LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v17, v16);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v59;
  *(_QWORD *)(v21 + 80) = v60;
  if ( v15 < 0 || v50 != 24 )
    return 0LL;
  v22 = (__int64 *)v57;
  if ( v57 + 8 < v57 || v57 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v54 = v23;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v23 <= 0 || v49 == v48 )
    return v23;
  if ( *(_QWORD *)(a1 + 144) != v11 )
    goto LABEL_31;
  v25 = 0;
  if ( a2 != 14 )
  {
    LOBYTE(v18) = 1;
    if ( HMValidateHandleNoSecure(*(_QWORD *)a1, v18, v19, v20) )
    {
      if ( a2 == 394 )
      {
        if ( (*(_DWORD *)(a1 + 52) & 0x30) == 0 || (*(_DWORD *)(a1 + 52) & 0x40) != 0 )
          goto LABEL_29;
LABEL_27:
        v25 = 1;
        v23 = 8LL;
        v54 = 8LL;
        goto LABEL_28;
      }
      if ( a2 == 329 )
      {
        if ( (*(_DWORD *)(a1 + 52) & 0x30) == 0 || (*(_DWORD *)(a1 + 52) & 0x200) != 0 )
        {
          v25 = 0;
          goto LABEL_28;
        }
        goto LABEL_27;
      }
    }
    return 0LL;
  }
LABEL_28:
  if ( v25 )
    return v23;
LABEL_29:
  v26 = *(_DWORD *)(gptiCurrent + 440LL);
  if ( (v26 & 0x4000000) != 0 )
  {
    if ( v49 )
LABEL_31:
      v23 *= 2LL;
    return v23;
  }
  v27 = v23 + 1;
  v28 = v23 + 1;
  v56 = 0LL;
  v29 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  *(_DWORD *)(gptiCurrent + 440LL) = v26 | 0x4000000;
  if ( (a7 & 1) == 0 )
    v28 = 2 * v27;
  v30 = AllocCallbackMessage(96, 1u, v28, v69, 0, 0x200uLL);
  v32 = v30;
  if ( !v30 )
    return 0LL;
  if ( v30 != v68 && v30 != v69 )
    PushW32ThreadLock((__int64)v30, v67, (__int64)Win32FreePool, v31);
  *((_QWORD *)v32 + 5) = v29;
  v33 = v51;
  *((_DWORD *)v32 + 12) = v51 - 1;
  v34 = v27;
  if ( v33 != 14 )
    v34 = RegionSize;
  *((_QWORD *)v32 + 7) = v34;
  *((_QWORD *)v32 + 8) = a5;
  *((_QWORD *)v32 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v32, v28, (void **)v32 + 10) < 0 )
    goto LABEL_57;
  *((_DWORD *)v32 + 22) = v28;
  v64[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v64;
  v64[1] = a1;
  ++*(_DWORD *)(a1 + 8);
  v37 = *(_QWORD *)(gptiCurrent + 432LL);
  v61 = *(_OWORD *)(v37 + 64);
  v62 = *(_QWORD *)(v37 + 80);
  *(_QWORD *)(v37 + 72) = v29;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = *(_QWORD *)a1;
  v38 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v38;
  if ( gdwInAtomicOperation )
  {
    v38 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v38, gdwInAtomicOperation);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v32 + 2) = 0LL;
  v39 = KeUserModeCallback(35LL, v32, *(unsigned int *)v32, &v55, v52);
  EtwTraceEndCallback(35LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v41, v40);
  v42 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v42 + 64) = v61;
  *(_QWORD *)(v42 + 80) = v62;
  if ( v39 < 0 )
    goto LABEL_57;
  if ( v52[0] == 24 )
  {
    v43 = (__int64 *)v55;
    if ( v55 + 8 < v55 || v55 + 8 > W32UserProbeAddress )
      v43 = (__int64 *)W32UserProbeAddress;
    v44 = *v43;
    v56 = v44;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v44 > 0 )
    {
      v45 = v55;
      if ( v55 + 24 < v55 || v55 + 24 > W32UserProbeAddress )
        v45 = W32UserProbeAddress;
      v46 = *(_QWORD *)(v45 + 16);
      v65 = *(_OWORD *)v45;
      v66 = v46;
      v44 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v65, v44, v49, v48);
      v56 = v44;
    }
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x4000000u;
  }
  else
  {
LABEL_57:
    v44 = 0LL;
  }
  if ( v32 != v68 && v32 != v69 )
  {
    v47 = (PVOID *)(v32 + 32);
    if ( *((_QWORD *)v32 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v47, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v67, (__int64)v47, v35, v36);
  }
  return v44;
}

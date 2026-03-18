/*
 * XREFs of ClientGetListboxString @ 0x1C014A8B0
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C014A6D0 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C014A7C0 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0090FDC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00910A4 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0091118 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall ClientGetListboxString(
        __int64 *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  __int64 v13; // r14
  int v14; // ecx
  unsigned __int64 v15; // rdi
  unsigned __int8 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 *v25; // rdi
  unsigned __int64 v26; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // xmm1_8
  unsigned int *v30; // r14
  int v31; // r15d
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  _QWORD *v35; // rcx
  PVOID *v36; // rdx
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-360h] BYREF
  int v38; // [rsp+40h] [rbp-358h]
  int v39; // [rsp+44h] [rbp-354h] BYREF
  int v40; // [rsp+48h] [rbp-350h]
  unsigned __int64 v41; // [rsp+60h] [rbp-338h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-330h]
  __int128 v43; // [rsp+78h] [rbp-320h]
  __int64 v44; // [rsp+88h] [rbp-310h]
  __int128 v45; // [rsp+90h] [rbp-308h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-2F8h]
  _QWORD v47[3]; // [rsp+D0h] [rbp-2C8h] BYREF
  _QWORD v48[3]; // [rsp+E8h] [rbp-2B0h] BYREF
  unsigned __int8 v49[96]; // [rsp+100h] [rbp-298h] BYREF
  unsigned __int8 v50[512]; // [rsp+160h] [rbp-238h] BYREF

  RegionSize = a4;
  v40 = a7 & 1;
  v12 = v49;
  v42 = 0LL;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 4);
  v15 = (v14 & 0x7FFFFFFFu) + 2;
  if ( (unsigned int)v15 < (v14 & 0x7FFFFFFFu) )
    goto LABEL_44;
  v38 = (v14 & 0x7FFFFFFF) + 2;
  if ( v14 < 0 && (a7 & 1) == 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_44;
    v38 = v15;
  }
  v16 = AllocCallbackMessage(96, 1u, (unsigned int)v15, v50, 0, 0x200uLL);
  v12 = v16;
  if ( !v16 )
    return 0LL;
  if ( v16 != v49 && v16 != v50 )
    PushW32ThreadLock((__int64)v16, v48, (__int64)Win32FreePool, v17);
  *((_QWORD *)v12 + 5) = v13;
  *((_DWORD *)v12 + 12) = a2;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v15, (void **)v12 + 10) >= 0 )
  {
    *((_DWORD *)v12 + 22) = v15;
    v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v47;
    v47[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v18 = *(_QWORD *)(gptiCurrent + 432LL);
    v43 = *(_OWORD *)(v18 + 64);
    v44 = *(_QWORD *)(v18 + 80);
    *(_QWORD *)(v18 + 72) = v13;
    if ( a1 )
      v19 = *a1;
    else
      v19 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
    if ( a1 )
      v20 = a1[33];
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
    if ( gdwInAtomicOperation )
    {
      v20 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation);
    EtwTraceBeginCallback(72LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v21 = KeUserModeCallback(72LL, v12, *(unsigned int *)v12, &v41, &v39);
    EtwTraceEndCallback(72LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v23, v22);
    v24 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v24 + 64) = v43;
    *(_QWORD *)(v24 + 80) = v44;
    if ( v21 >= 0 && v39 == 24 )
    {
      v25 = (unsigned __int64 *)v41;
      if ( v41 + 8 < v41 || v41 + 8 > W32UserProbeAddress )
        v25 = (unsigned __int64 *)W32UserProbeAddress;
      v26 = *v25;
      v42 = v26;
      if ( (v26 & 0x80000000) == 0LL && (!a9 || (*(_DWORD *)(a9 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( a8 )
        {
          v35 = *(_QWORD **)(v41 + 16);
          if ( v35 + 1 < v35 || (unsigned __int64)(v35 + 1) > W32UserProbeAddress )
            v35 = (_QWORD *)W32UserProbeAddress;
          v30 = (unsigned int *)RegionSize;
          **(_QWORD **)(RegionSize + 8) = *v35;
        }
        else
        {
          v28 = v41;
          if ( v41 + 24 < v41 || v41 + 24 > W32UserProbeAddress )
            v28 = W32UserProbeAddress;
          v29 = *(_QWORD *)(v28 + 16);
          v45 = *(_OWORD *)v28;
          v46 = v29;
          v30 = (unsigned int *)RegionSize;
          v31 = v40;
          v26 = (unsigned int)CalcOutputStringSize(
                                (struct _CALLBACKSTATUS *)&v45,
                                v26,
                                *(_DWORD *)(RegionSize + 4) >> 31,
                                v40);
          v42 = v26;
          v32 = *(_DWORD *)(RegionSize + 4);
          if ( v32 < 0 )
            LODWORD(v33) = v32 & 0x7FFFFFFF;
          else
            v33 = (unsigned __int64)(v32 & 0x7FFFFFFE) >> 1;
          CopyOutputString((struct _CALLBACKSTATUS *)&v45, (struct _LARGE_STRING *)RegionSize, v33, v31);
        }
        v34 = *v30;
        if ( (v30[1] & 0x80000000) == 0 )
          v34 >>= 1;
        if ( !a8 && v26 != -1LL && v26 > v34 )
          LODWORD(v26) = v34;
      }
      goto LABEL_27;
    }
  }
LABEL_44:
  LODWORD(v26) = 0;
LABEL_27:
  if ( v12 != v49 && v12 != v50 )
  {
    v36 = (PVOID *)(v12 + 32);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v36, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v48, (__int64)v36, a3, a4);
  }
  return (unsigned int)v26;
}

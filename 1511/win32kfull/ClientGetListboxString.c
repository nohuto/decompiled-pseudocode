/*
 * XREFs of ClientGetListboxString @ 0x1C0143E80
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C0143CA0 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C0143D90 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C011F134 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0122E0C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0122F00 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall ClientGetListboxString(
        __int64 a1,
        int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  unsigned __int8 *result; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 *v25; // rdi
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // xmm1_8
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-328h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-320h]
  int v35; // [rsp+40h] [rbp-318h]
  unsigned __int64 v36; // [rsp+48h] [rbp-310h] BYREF
  int v37; // [rsp+50h] [rbp-308h] BYREF
  __int128 v38; // [rsp+58h] [rbp-300h] BYREF
  __int64 v39; // [rsp+68h] [rbp-2F0h]
  _QWORD v40[5]; // [rsp+78h] [rbp-2E0h] BYREF
  _QWORD v41[4]; // [rsp+A0h] [rbp-2B8h] BYREF
  unsigned __int8 v42[96]; // [rsp+C0h] [rbp-298h] BYREF
  unsigned __int8 v43[512]; // [rsp+120h] [rbp-238h] BYREF

  LODWORD(v34) = a2;
  v35 = a7 & 1;
  v12 = v42;
  if ( a1 )
    v13 = a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v13 = 0LL;
  v14 = a4[1] & 0x7FFFFFFF;
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_48;
  if ( a4[1] < 0 && (a7 & 1) == 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_48;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v15, v43, 0, 0x200uLL);
  v12 = result;
  RegionSize = (ULONG_PTR)result;
  if ( !result )
    return result;
  if ( result != v42 && result != v43 )
    PushW32ThreadLock((__int64)result, v41, (__int64)Win32FreePool);
  *((_QWORD *)v12 + 5) = v13;
  *((_DWORD *)v12 + 12) = v34;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v15, (void **)v12 + 10) < 0 )
    goto LABEL_48;
  *((_DWORD *)v12 + 22) = v15;
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v38 = *(_OWORD *)(v18 + 64);
  v34 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  v19 = a1 ? *(_QWORD *)a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  v20 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  UserSessionSwitchLeaveCrit(v20, v17);
  EtwTraceBeginCallback(71LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v21 = KeUserModeCallback(71LL, v12, *(unsigned int *)v12, &v36, &v37);
  EtwTraceEndCallback(71LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v38;
  *(_QWORD *)(v24 + 80) = v34;
  if ( v21 < 0 )
    goto LABEL_48;
  if ( v37 == 24 )
  {
    v25 = (unsigned __int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > W32UserProbeAddress )
      v25 = (unsigned __int64 *)W32UserProbeAddress;
    v26 = *v25;
    v34 = v26;
    if ( (v26 & 0x80000000) == 0LL && (!a9 || (*(_DWORD *)(a9 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      if ( a8 )
      {
        v27 = *(_QWORD **)(v36 + 16);
        if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > W32UserProbeAddress )
          v27 = (_QWORD *)W32UserProbeAddress;
        **((_QWORD **)a4 + 1) = *v27;
      }
      else
      {
        v28 = v36;
        if ( v36 + 24 < v36 || v36 + 24 > W32UserProbeAddress )
          v28 = W32UserProbeAddress;
        v29 = *(_QWORD *)(v28 + 16);
        v38 = *(_OWORD *)v28;
        v39 = v29;
        v26 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v38, v26, (unsigned int)a4[1] >> 31, v35);
        v34 = v26;
        v30 = a4[1];
        if ( v30 >= 0 )
          v31 = (unsigned __int64)(v30 & 0x7FFFFFFE) >> 1;
        else
          LODWORD(v31) = v30 & 0x7FFFFFFF;
        CopyOutputString((struct _CALLBACKSTATUS *)&v38, (struct _LARGE_STRING *)a4, v31, v35);
      }
      v32 = *a4;
      if ( a4[1] >= 0 )
        v32 >>= 1;
      if ( !a8 && v26 != -1LL && v26 > v32 )
        LODWORD(v26) = v32;
    }
  }
  else
  {
LABEL_48:
    LODWORD(v26) = 0;
  }
  if ( v12 != v42 && v12 != v43 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v41);
  }
  return (unsigned __int8 *)(unsigned int)v26;
}

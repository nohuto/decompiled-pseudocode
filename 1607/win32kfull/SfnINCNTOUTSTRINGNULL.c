/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C0206DF0
 * Callers:
 *     <none>
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        __int64 *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r13d
  unsigned __int8 *v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned __int8 *result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rdi
  __int64 v25; // rdi
  __m128i *v26; // rcx
  __int64 v27; // xmm1_8
  struct _LARGE_STRING *v28; // rsi
  PVOID *v29; // rdx
  int v30[5]; // [rsp+3Ch] [rbp-36Ch] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-358h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-350h] BYREF
  __int64 v33; // [rsp+60h] [rbp-348h]
  int v34[4]; // [rsp+68h] [rbp-340h]
  __int128 v35; // [rsp+78h] [rbp-330h]
  __int64 v36; // [rsp+88h] [rbp-320h]
  __m128i v37; // [rsp+90h] [rbp-318h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-308h]
  _QWORD v39[3]; // [rsp+C8h] [rbp-2E0h] BYREF
  _QWORD v40[4]; // [rsp+E0h] [rbp-2C8h] BYREF
  unsigned __int8 v41[96]; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned __int8 v42[512]; // [rsp+160h] [rbp-248h] BYREF

  RegionSize = a4;
  *(_QWORD *)v34 = a3;
  v10 = a7 & 1;
  v11 = v41;
  v33 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v14 = v13 + 2;
  if ( (unsigned int)v14 < v13 )
    goto LABEL_39;
  if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v14 *= 2LL;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_39;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v14, v42, 0, 0x200uLL);
  v11 = result;
  if ( !result )
    return result;
  if ( result != v41 && result != v42 )
    PushW32ThreadLock((__int64)result, v40, (__int64)Win32FreePool, a4);
  v16 = *(_QWORD *)v34;
  if ( *(_QWORD *)v34 < 2uLL )
    goto LABEL_39;
  *((_QWORD *)v11 + 5) = v12;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v16;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v14, (void **)v11 + 10) < 0 )
    goto LABEL_39;
  *((_DWORD *)v11 + 22) = v14;
  v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v39;
  v39[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v17 = *(_QWORD *)(gptiCurrent + 432LL);
  v35 = *(_OWORD *)(v17 + 64);
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v12;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v18;
  if ( a1 )
    v19 = a1[33];
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v19;
  if ( gdwInAtomicOperation )
  {
    v19 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v19, gdwInAtomicOperation);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v20 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &v32, v30);
  EtwTraceEndCallback(8LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v35;
  *(_QWORD *)(v23 + 80) = v36;
  if ( v20 < 0 )
    goto LABEL_39;
  if ( v30[0] == 24 )
  {
    v24 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v25 = *v24;
    v33 = v25;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v26 = (__m128i *)v32;
      if ( v32 + 24 < v32 || v32 + 24 > W32UserProbeAddress )
        v26 = (__m128i *)W32UserProbeAddress;
      v27 = v26[1].m128i_i64[0];
      v37 = *v26;
      v38 = v27;
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v37, 8)) )
      {
        v28 = (struct _LARGE_STRING *)RegionSize;
        v25 = (unsigned int)CalcOutputStringSize(
                              (struct _CALLBACKSTATUS *)&v37,
                              v25,
                              *(_DWORD *)(RegionSize + 4) >> 31,
                              v10);
        v33 = v25;
        CopyOutputString((struct _CALLBACKSTATUS *)&v37, v28, v34[0], v10);
      }
    }
  }
  else
  {
LABEL_39:
    v25 = 0LL;
  }
  if ( v11 != v41 && v11 != v42 )
  {
    v29 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v40, (__int64)v29, a3, a4);
  }
  return (unsigned __int8 *)v25;
}

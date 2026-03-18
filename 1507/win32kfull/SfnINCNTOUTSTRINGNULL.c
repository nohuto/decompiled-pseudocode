/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C020EF40
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0059A14 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0059AA8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C005A7F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        __int64 a1,
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
  unsigned __int64 v14; // rsi
  unsigned __int8 *result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i *v24; // rcx
  __int64 *v25; // rdi
  __int64 v26; // rdi
  __m128i *v27; // rcx
  __int64 v28; // xmm1_8
  struct _LARGE_STRING *v29; // rsi
  __int64 v30; // [rsp+38h] [rbp-330h]
  int v31; // [rsp+40h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-320h] BYREF
  unsigned int v33[2]; // [rsp+50h] [rbp-318h]
  unsigned __int64 v34; // [rsp+58h] [rbp-310h] BYREF
  __m128i v35; // [rsp+60h] [rbp-308h] BYREF
  __int64 v36; // [rsp+70h] [rbp-2F8h]
  _QWORD v37[3]; // [rsp+88h] [rbp-2E0h] BYREF
  _QWORD v38[4]; // [rsp+A0h] [rbp-2C8h] BYREF
  unsigned __int8 v39[96]; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned __int8 v40[512]; // [rsp+120h] [rbp-248h] BYREF

  RegionSize = a4;
  *(_QWORD *)v33 = a3;
  v10 = a7 & 1;
  v11 = v39;
  if ( a1 )
    v12 = a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  v13 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v14 = v13 + 2;
  if ( (unsigned int)v14 < v13 )
    goto LABEL_36;
  if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v14 *= 2LL;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_36;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v14, v40, 0, 0x200uLL);
  v11 = result;
  if ( !result )
    return result;
  if ( result != v39 && result != v40 )
    PushW32ThreadLock((__int64)result, v38, (__int64)Win32FreePool);
  v16 = *(_QWORD *)v33;
  if ( *(_QWORD *)v33 < 2uLL )
    goto LABEL_36;
  *((_QWORD *)v11 + 5) = v12;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v16;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v14, (void **)v11 + 10) < 0 )
    goto LABEL_36;
  *((_DWORD *)v11 + 22) = v14;
  v37[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v37;
  v37[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v18 = *(__m128i **)(gptiCurrent + 440LL);
  v35 = v18[4];
  v30 = v18[5].m128i_i64[0];
  v18[4].m128i_i64[1] = v12;
  v19 = a1 ? *(_QWORD *)a1 : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v19;
  v20 = a1 ? *(_QWORD *)(a1 + 264) : 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v20;
  UserSessionSwitchLeaveCrit(v20, v17);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v21 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &v34, &v31);
  EtwTraceEndCallback(8LL);
  EnterCrit(1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(__m128i **)(gptiCurrent + 440LL);
  v24[4] = v35;
  v24[5].m128i_i64[0] = v30;
  if ( v21 < 0 )
    goto LABEL_36;
  if ( v31 == 24 )
  {
    v25 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v26 = *v25;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v27 = (__m128i *)v34;
      if ( v34 + 24 < v34 || v34 + 24 > W32UserProbeAddress )
        v27 = (__m128i *)W32UserProbeAddress;
      v28 = v27[1].m128i_i64[0];
      v35 = *v27;
      v36 = v28;
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v35, 8)) )
      {
        v29 = (struct _LARGE_STRING *)RegionSize;
        v26 = (unsigned int)CalcOutputStringSize(
                              (struct _CALLBACKSTATUS *)&v35,
                              v26,
                              *(_DWORD *)(RegionSize + 4) >> 31,
                              v10);
        CopyOutputString((struct _CALLBACKSTATUS *)&v35, v29, v33[0], v10);
      }
    }
  }
  else
  {
LABEL_36:
    v26 = 0LL;
  }
  if ( v11 != v39 && v11 != v40 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v38);
  }
  return (unsigned __int8 *)v26;
}

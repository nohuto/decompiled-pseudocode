/*
 * XREFs of xxxClientPSMTextOut @ 0x1C020DDD8
 * Callers:
 *     xxxPSMTextOut @ 0x1C023C4C4 (xxxPSMTextOut.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C0049A00 (GreSaveDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientPSMTextOut(HDC a1, int a2, int a3, char **a4, int a5, int a6)
{
  unsigned __int8 *result; // rax
  HDC v11; // rsi
  __int64 v12; // r9
  unsigned __int8 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // rcx
  int v19; // r15d
  PVOID *v20; // rdx
  int v21; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-2D0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+70h] [rbp-2C8h] BYREF
  _BYTE v24[16]; // [rsp+88h] [rbp-2B0h] BYREF
  _QWORD v25[3]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v26[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v27[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize[0] = (ULONG_PTR)a1;
  v22 = 0LL;
  result = (unsigned __int8 *)CreateCompatiblePublicDC(a1, &v22);
  v11 = (HDC)result;
  RegionSize[2] = (ULONG_PTR)result;
  if ( result )
  {
    result = AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v27, 1, 0x200uLL);
    v13 = result;
    RegionSize[1] = (ULONG_PTR)result;
    if ( result )
    {
      if ( result != v26 && result != v27 )
        PushW32ThreadLock((__int64)result, v25, (__int64)Win32FreePool, v12);
      *((_QWORD *)v13 + 7) = v11;
      *((_DWORD *)v13 + 16) = a2;
      *((_DWORD *)v13 + 17) = a3;
      *((_DWORD *)v13 + 18) = a5;
      *((_DWORD *)v13 + 19) = a6;
      *((_WORD *)v13 + 20) = *(_WORD *)a4;
      *((_WORD *)v13 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v13,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v13 + 6) >= 0 )
      {
        v17 = GreSaveDC(a1);
        v18 = gdwInAtomicOperation;
        if ( gdwInAtomicOperation )
        {
          v18 = gdwExtraInstrumentations;
          v16 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v18, v16);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v13 + 2) = 0LL;
        v19 = KeUserModeCallback(78LL, v13, *(unsigned int *)v13, v24, &v21);
        EtwTraceEndCallback(78LL);
        EnterCrit(0LL, 1LL);
        GreRestoreDC(a1, v17);
        if ( v11 != a1 && v19 >= 0 )
          NtGdiBitBltInternal(
            a1,
            0,
            0,
            *(_DWORD *)(gpDispInfo + 56LL),
            *(_DWORD *)(gpDispInfo + 60LL),
            v11,
            0,
            0,
            0xCC0020u,
            0,
            0);
      }
      if ( v11 != a1 )
      {
        GreDeleteDC(v11);
        GreDeleteObject(v22);
      }
      result = v26;
      if ( v13 != v26 )
      {
        result = v27;
        if ( v13 != v27 )
        {
          v20 = (PVOID *)(v13 + 32);
          if ( *((_QWORD *)v13 + 4) )
          {
            RegionSize[0] = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20, RegionSize, 0x8000u);
          }
          return (unsigned __int8 *)PopAndFreeAlwaysW32ThreadLock((__int64)v25, (__int64)v20, v14, v15);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (unsigned __int8 *)GreDeleteObject(v22);
    }
  }
  return result;
}

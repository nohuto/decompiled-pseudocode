/*
 * XREFs of xxxClientPSMTextOut @ 0x1C0214F8C
 * Callers:
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     GreSaveDC @ 0x1C00CC540 (GreSaveDC.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        char **a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int8 *result; // rax
  HDC v11; // r14
  unsigned __int8 *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r12d
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2D8h] BYREF
  int v19; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v20[3]; // [rsp+70h] [rbp-2C8h] BYREF
  _BYTE v21[16]; // [rsp+88h] [rbp-2B0h] BYREF
  _QWORD v22[3]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v23[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v24[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v20[0] = 0LL;
  result = (unsigned __int8 *)CreateCompatiblePublicDC(a1, v20);
  v11 = (HDC)result;
  v20[2] = (__int64)result;
  if ( result )
  {
    result = AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v24, 1, 0x200uLL);
    v12 = result;
    v20[1] = (__int64)result;
    if ( result )
    {
      if ( result != v23 && result != v24 )
        PushW32ThreadLock((__int64)result, v22, (__int64)Win32FreePool);
      *((_QWORD *)v12 + 7) = v11;
      *((_DWORD *)v12 + 16) = a2;
      *((_DWORD *)v12 + 17) = a3;
      *((_DWORD *)v12 + 18) = a5;
      *((_DWORD *)v12 + 19) = a6;
      *((_WORD *)v12 + 20) = *(_WORD *)a4;
      *((_WORD *)v12 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v12,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v12 + 6) >= 0 )
      {
        v14 = GreSaveDC((__int64)a1, v13);
        UserSessionSwitchLeaveCrit(v16, v15);
        EtwTraceBeginCallback(77LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v17 = KeUserModeCallback(77LL, v12, *(unsigned int *)v12, v21, &v19);
        EtwTraceEndCallback(77LL);
        EnterCrit(0LL, 1LL);
        GreRestoreDC(a1, v14);
        if ( v11 != a1 && v17 >= 0 )
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
        GreDeleteObject(v20[0]);
      }
      result = v23;
      if ( v12 != v23 )
      {
        result = v24;
        if ( v12 != v24 )
        {
          if ( *((_QWORD *)v12 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
          }
          return (unsigned __int8 *)PopAndFreeAlwaysW32ThreadLock((__int64)v22);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (unsigned __int8 *)GreDeleteObject(v20[0]);
    }
  }
  return result;
}

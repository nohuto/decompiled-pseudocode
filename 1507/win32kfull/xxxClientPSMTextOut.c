/*
 * XREFs of xxxClientPSMTextOut @ 0x1C02150E4
 * Callers:
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 * Callees:
 *     GreSaveDC @ 0x1C00167D0 (GreSaveDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientPSMTextOut(HDC a1, int a2, int a3, char **a4, int a5, int a6)
{
  unsigned __int8 *result; // rax
  HDC v11; // r14
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r12d
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-2D8h] BYREF
  int v18; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v19[3]; // [rsp+70h] [rbp-2C8h] BYREF
  _BYTE v20[16]; // [rsp+88h] [rbp-2B0h] BYREF
  _QWORD v21[3]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v22[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v23[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v19[0] = 0LL;
  result = (unsigned __int8 *)CreateCompatiblePublicDC(a1, v19);
  v11 = (HDC)result;
  v19[2] = (__int64)result;
  if ( result )
  {
    result = AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v23, 1, 0x200uLL);
    v12 = result;
    v19[1] = (__int64)result;
    if ( result )
    {
      if ( result != v22 && result != v23 )
        PushW32ThreadLock((__int64)result, v21, (__int64)Win32FreePool);
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
        v13 = GreSaveDC(a1);
        UserSessionSwitchLeaveCrit(v15, v14);
        EtwTraceBeginCallback(77LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v16 = KeUserModeCallback(77LL, v12, *(unsigned int *)v12, v20, &v18);
        EtwTraceEndCallback(77LL);
        EnterCrit(1LL);
        GreRestoreDC(a1, v13);
        if ( v11 != a1 && v16 >= 0 )
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
        GreDeleteObject(v19[0]);
      }
      result = v22;
      if ( v12 != v22 )
      {
        result = v23;
        if ( v12 != v23 )
        {
          if ( *((_QWORD *)v12 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
          }
          return (unsigned __int8 *)PopAndFreeAlwaysW32ThreadLock((__int64)v21);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (unsigned __int8 *)GreDeleteObject(v19[0]);
    }
  }
  return result;
}

/*
 * XREFs of xxxMessageEvent @ 0x1C02396E8
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01EC2C4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01EC584 (xxxDDETrackSendHook.c)
 * Callees:
 *     xxxCsEvent @ 0x1C000C5DC (xxxCsEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

_DWORD *__fastcall xxxMessageEvent(__int64 *a1, int a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *result; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  result = (_DWORD *)Win32AllocPoolWithQuota(120LL, 946107221LL);
  v11 = (__int64)result;
  if ( result )
  {
    *result = a5;
    result[1] = 7340033;
    result[2] = 112;
    if ( a1 )
      v12 = *a1;
    else
      v12 = 0LL;
    *(_QWORD *)(v11 + 16) = v12;
    *(_DWORD *)(v11 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v13 = HMValidateHandleNoSecure(a3, 1);
    if ( v13 )
      *(_QWORD *)(v11 + 32) = PsGetThreadId(**(PETHREAD **)(v13 + 16));
    else
      *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 40) = a2;
    *(_QWORD *)(v11 + 48) = a3;
    *(_QWORD *)(v11 + 56) = a4;
    if ( a6 )
    {
      v14 = *(_OWORD *)(a6 + 16);
      *(_OWORD *)(v11 + 64) = *(_OWORD *)a6;
      v15 = *(_OWORD *)(a6 + 32);
      *(_OWORD *)(v11 + 80) = v14;
      *(_QWORD *)&v14 = *(_QWORD *)(a6 + 48);
      *(_OWORD *)(v11 + 96) = v15;
      *(_QWORD *)(v11 + 112) = v14;
    }
    PushW32ThreadLock(v11, v16, (__int64)Win32FreePool);
    xxxCsEvent((void *)v11, 0x70u);
    return (_DWORD *)PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  }
  return result;
}

/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x1C008FCE8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     RtlInitLargeUnicodeString @ 0x1C00900B8 (RtlInitLargeUnicodeString.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0092890 (xxxEndGetWidnowTrackInfoAsync.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  struct tagWND *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 v9; // si
  _BYTE v10[16]; // [rsp+20h] [rbp-258h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-248h] BYREF
  _WORD v12[264]; // [rsp+50h] [rbp-228h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  result = HMValidateHandleNoSecure(*(_QWORD *)a1, 1);
  v4 = (struct tagWND *)result;
  if ( result )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    v11[1] = result;
    ++*(_DWORD *)(result + 8);
    v5 = *(_DWORD *)(a1 + 8);
    if ( v5 >= 0x1A )
    {
      if ( v5 <= 0x1B )
      {
        v8 = *(_QWORD *)(a1 + 24);
        if ( v8 )
        {
          if ( v8 == -1 )
          {
            v12[0] = 0;
            RtlInitLargeUnicodeString(v10, v12);
            *(_QWORD *)(a1 + 24) = v10;
          }
          else
          {
            v9 = *(_QWORD *)(a1 + 24);
            if ( (unsigned int)UserGetAtomName((unsigned __int16)v8, v12, 260LL) )
            {
              RtlInitLargeUnicodeString(v10, v12);
              *(_QWORD *)(a1 + 24) = v10;
            }
            else
            {
              *(_QWORD *)(a1 + 24) = 0LL;
            }
            UserDeleteAtom(v9);
          }
        }
        v1 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
      else if ( v5 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v4);
        return ThreadUnlock1(v7, v6);
      }
    }
    xxxSendMessage(v4, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v1);
    return ThreadUnlock1(v7, v6);
  }
  return result;
}

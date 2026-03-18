/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x1C0072748
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C012412C (xxxEndGetWidnowTrackInfoAsync.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // si
  _BYTE v11[16]; // [rsp+20h] [rbp-258h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-248h] BYREF
  _WORD v13[264]; // [rsp+50h] [rbp-228h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(*(_QWORD *)a1, a2);
  v5 = result;
  if ( result )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = result;
    ++*(_DWORD *)(result + 8);
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 >= 0x1A )
    {
      if ( v6 <= 0x1B )
      {
        v9 = *(_QWORD *)(a1 + 24);
        if ( v9 )
        {
          if ( v9 == -1 )
          {
            v13[0] = 0;
            RtlInitLargeUnicodeString(v11, v13);
            *(_QWORD *)(a1 + 24) = v11;
          }
          else
          {
            v10 = *(_QWORD *)(a1 + 24);
            if ( (unsigned int)UserGetAtomName((unsigned __int16)v9, v13, 260LL) )
            {
              RtlInitLargeUnicodeString(v11, v13);
              *(_QWORD *)(a1 + 24) = v11;
            }
            else
            {
              *(_QWORD *)(a1 + 24) = 0LL;
            }
            UserDeleteAtom(v10);
          }
        }
        v2 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
      else if ( v6 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v5);
        return ThreadUnlock1(v8, v7);
      }
    }
    xxxSendMessage(v5, *(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16), v2);
    return ThreadUnlock1(v8, v7);
  }
  return result;
}

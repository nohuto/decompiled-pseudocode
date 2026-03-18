/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x140787D38
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     BcpGetProgressMessages @ 0x140137CB8 (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x140137E34 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterGetContext @ 0x1406DC5A0 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1406DC728 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFoDetermineFontInformation @ 0x140787F7C (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x140788038 (BcpFindMessage.c)
 */

__int64 __fastcall BgpBcInitializeCriticalMode(__int64 a1, int a2)
{
  int v2; // eax
  PCWSTR v3; // rbx
  const WCHAR *Message; // rax
  const WCHAR *v5; // rax
  const WCHAR *v6; // rax
  const WCHAR *v7; // rax
  const WCHAR *v8; // rax
  const WCHAR *v9; // rax
  int ProgressMessages; // eax
  int v11; // edx
  int v12; // r8d
  __int64 *v13; // rdi
  __int64 v14; // r14
  __int64 *v15; // rsi
  __int64 v16; // rdi
  __int64 Memory; // rax
  SIZE_T v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-28h]
  _DWORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  char v22[8]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v23[4]; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp+30h] BYREF
  PCWSTR v25; // [rsp+A0h] [rbp+40h] BYREF
  PCWSTR v26; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a1 + 120);
  if ( (v2 & 0x400000) != 0 )
  {
    dword_1402D4BB0 |= 0x400000u;
  }
  else
  {
    if ( (v2 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v3 = 0LL;
    SourceString = 0LL;
    v26 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_1403062C0, Message);
      v5 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_1403062E0, v5);
      v6 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_1403062F0, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140306300, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140306310, v8);
      v9 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_1403062D0, v9);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v25) >= 0 )
      {
        RtlInitUnicodeString(&stru_140306320, SourceString);
        RtlInitUnicodeString(&stru_140306330, v25);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v26, &v25);
        v3 = v26;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140306340, v26);
          RtlInitUnicodeString(&stru_140306350, v25);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_1402D4BB0 |= 0x20000u;
          v21[1] = -1;
          v13 = (__int64 *)&unk_1402CF700;
          v21[0] = -14653518;
LABEL_10:
          v14 = 0LL;
          v15 = v13;
          while ( (int)BgpFoDetermineFontInformation(
                         *(_DWORD *)v15,
                         v11,
                         v12,
                         (unsigned int)&v25,
                         (__int64)v23,
                         (__int64)v22) >= 0 )
          {
            ++v14;
            *(_DWORD *)v15 = v23[0];
            v15 = (__int64 *)((char *)v15 + 4);
            if ( v14 >= 3 )
            {
              v13 += 7;
              if ( (__int64)v13 < (__int64)&qword_1402CF818 )
                goto LABEL_10;
              v23[1] = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v21, &v19) >= 0 )
              {
                v16 = v19;
                Memory = BgpFwAllocateMemory(v19);
                if ( Memory )
                {
                  qword_1402D4AD0 = 0LL;
                  BcpWorkspace = Memory;
                  v19 = __PAIR64__(HIDWORD(v25), v20);
                  qword_1402D4AC8 = v16;
                  qword_140306360 = BgpDisplayCharacterGetContext((__int64)v21, &v19, 3);
                  if ( qword_140306360 )
                  {
                    dword_1402D4BB0 |= 0x10u;
                    return 0LL;
                  }
                }
              }
              break;
            }
          }
        }
      }
      if ( SourceString )
        BgpFwFreeMemory((__int64)SourceString);
      if ( v3 )
        BgpFwFreeMemory((__int64)v3);
      if ( qword_140306360 )
        BgpDisplayCharacterDestroyContext(qword_140306360);
    }
  }
  return 0LL;
}

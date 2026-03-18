/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x1407FD8F0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     BcpGetProgressMessages @ 0x1401664BC (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x140166638 (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterGetContext @ 0x14075F5E8 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x14075F770 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFoDetermineFontInformation @ 0x1407FDB34 (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x1407FDBF0 (BcpFindMessage.c)
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
    dword_140323CF0 |= 0x400000u;
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
      RtlInitUnicodeString(&stru_1403565C0, Message);
      v5 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_1403565E0, v5);
      v6 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_1403565F0, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140356600, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140356610, v8);
      v9 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_1403565D0, v9);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v25) >= 0 )
      {
        RtlInitUnicodeString(&stru_140356620, SourceString);
        RtlInitUnicodeString(&stru_140356630, v25);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v26, &v25);
        v3 = v26;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_140356640, v26);
          RtlInitUnicodeString(&stru_140356650, v25);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_140323CF0 |= 0x20000u;
          v21[1] = -1;
          v13 = (__int64 *)&unk_14031E760;
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
              if ( (__int64)v13 < (__int64)&qword_14031E878 )
                goto LABEL_10;
              v23[1] = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v21, &v19) >= 0 )
              {
                v16 = v19;
                Memory = BgpFwAllocateMemory(v19);
                if ( Memory )
                {
                  qword_140323C10 = 0LL;
                  BcpWorkspace = Memory;
                  v19 = __PAIR64__(HIDWORD(v25), v20);
                  qword_140323C08 = v16;
                  qword_140356660 = BgpDisplayCharacterGetContext((__int64)v21, &v19, 3);
                  if ( qword_140356660 )
                  {
                    dword_140323CF0 |= 0x10u;
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
      if ( qword_140356660 )
        BgpDisplayCharacterDestroyContext(qword_140356660);
    }
  }
  return 0LL;
}

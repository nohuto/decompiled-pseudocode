/*
 * XREFs of BgpBcInitializeCriticalMode @ 0x1407D3ED8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     BcpGetProgressMessages @ 0x1401417C0 (BcpGetProgressMessages.c)
 *     BcpGetMaxResourceProfile @ 0x14014192C (BcpGetMaxResourceProfile.c)
 *     BgpDisplayCharacterGetContext @ 0x140728670 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140728810 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFoDetermineFontInformation @ 0x1407D4168 (BgpFoDetermineFontInformation.c)
 *     BcpFindMessage @ 0x1407D4224 (BcpFindMessage.c)
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
  const WCHAR *v10; // rax
  const WCHAR *v11; // rax
  const WCHAR *v12; // rax
  int ProgressMessages; // eax
  int v14; // edx
  int v15; // r8d
  _DWORD *v16; // rdi
  __int64 v17; // r14
  _DWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 Memory; // rax
  SIZE_T v22; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-28h]
  _DWORD v24[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v25[8]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v26[4]; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp+30h] BYREF
  PCWSTR v28; // [rsp+A0h] [rbp+40h] BYREF
  PCWSTR v29; // [rsp+A8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a1 + 120);
  if ( (v2 & 0x400000) != 0 )
  {
    dword_1402F9F90 |= 0x400000u;
  }
  else
  {
    if ( (v2 & 0x2000000) != 0 )
      BcpDisplayParameters = 1;
    v3 = 0LL;
    SourceString = 0LL;
    v29 = 0LL;
    if ( a2 != -1 )
    {
      Message = (const WCHAR *)BcpFindMessage(3238035457LL);
      RtlInitUnicodeString(&stru_140329320, Message);
      v5 = (const WCHAR *)BcpFindMessage(3238035464LL);
      RtlInitUnicodeString(&stru_140329340, v5);
      v6 = (const WCHAR *)BcpFindMessage(1090551817LL);
      RtlInitUnicodeString(&stru_140329350, v6);
      v7 = (const WCHAR *)BcpFindMessage(1090551824LL);
      RtlInitUnicodeString(&stru_140329360, v7);
      v8 = (const WCHAR *)BcpFindMessage(1090551825LL);
      RtlInitUnicodeString(&stru_140329370, v8);
      v9 = (const WCHAR *)BcpFindMessage(3238035459LL);
      RtlInitUnicodeString(&stru_140329330, v9);
      v10 = (const WCHAR *)BcpFindMessage(1090551828LL);
      RtlInitUnicodeString(&stru_1403293C0, v10);
      v11 = (const WCHAR *)BcpFindMessage(1090551829LL);
      RtlInitUnicodeString(&stru_1403293D0, v11);
      v12 = (const WCHAR *)BcpFindMessage(1090551830LL);
      RtlInitUnicodeString(&stru_1403293E0, v12);
      if ( (int)BcpGetProgressMessages(3238035474LL, &SourceString, &v28) >= 0 )
      {
        RtlInitUnicodeString(&stru_140329380, SourceString);
        RtlInitUnicodeString(&stru_140329390, v28);
        ProgressMessages = BcpGetProgressMessages(3238035475LL, &v29, &v28);
        v3 = v29;
        if ( ProgressMessages >= 0 )
        {
          RtlInitUnicodeString(&stru_1403293A0, v29);
          RtlInitUnicodeString(&stru_1403293B0, v28);
          if ( *(_WORD *)BcpFindMessage(1090551814LL) == 48 )
            dword_1402F9F90 |= 0x20000u;
          v24[1] = -1;
          v16 = dword_1402F6930;
          v24[0] = -16746281;
LABEL_10:
          v17 = 0LL;
          v18 = v16;
          while ( (int)BgpFoDetermineFontInformation(*v18, v14, v15, (unsigned int)&v28, (__int64)v26, (__int64)v25) >= 0 )
          {
            ++v17;
            *v18++ = v26[0];
            if ( v17 >= 4 )
            {
              v16 += 18;
              if ( (__int64)v16 < (__int64)dword_1402F6A98 )
                goto LABEL_10;
              v26[1] = 0;
              if ( (int)BcpGetMaxResourceProfile((__int64)v24, &v22) >= 0 )
              {
                v19 = v22;
                Memory = BgpFwAllocateMemory(v22);
                if ( Memory )
                {
                  qword_1402F9EB0 = 0LL;
                  BcpWorkspace = Memory;
                  v22 = __PAIR64__(HIDWORD(v28), v23);
                  qword_1402F9EA8 = v19;
                  qword_1403293F0 = BgpDisplayCharacterGetContext((__int64)v24, &v22, 3);
                  if ( qword_1403293F0 )
                  {
                    dword_1402F9F90 |= 0x10u;
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
      if ( qword_1403293F0 )
        BgpDisplayCharacterDestroyContext(qword_1403293F0);
    }
  }
  return 0LL;
}

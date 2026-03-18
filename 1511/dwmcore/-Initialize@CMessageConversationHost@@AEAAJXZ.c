/*
 * XREFs of ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x1800B2EC4
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B2E2C (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int ConversationHost; // eax
  signed int v3; // ebx
  _QWORD *v4; // r14
  signed int LastError; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-38h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+10h] BYREF

  SecurityDescriptor = 0LL;
  SetLastError(0);
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    ConversationHost = (*(__int64 (__fastcall **)(_QWORD, PSECURITY_DESCRIPTOR, char *))(**((_QWORD **)this + 3) + 56LL))(
                         *((_QWORD *)this + 3),
                         SecurityDescriptor,
                         (char *)this + 32);
    v3 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v8 = 105;
    }
    else
    {
      v4 = (_QWORD *)((char *)this + 40);
      ConversationHost = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, int, int, char *, char *))(**((_QWORD **)this + 3) + 304LL))(
                           *((_QWORD *)this + 3),
                           L"System\\CompositionEngine",
                           *((_QWORD *)this + 4),
                           1LL,
                           1,
                           1,
                           (char *)this + 16,
                           (char *)this + 40);
      v3 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v8 = 119;
      }
      else
      {
        ConversationHost = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v4)(
                             *v4,
                             &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
                             (char *)this + 48);
        v3 = ConversationHost;
        if ( ConversationHost < 0 )
        {
          v8 = 129;
        }
        else
        {
          ConversationHost = CoreUICallCreateConversationHost(*((_QWORD *)this + 3), *v4, (char *)this + 56, 0LL);
          v3 = ConversationHost;
          if ( ConversationHost >= 0 )
          {
            v3 = 0;
            goto LABEL_7;
          }
          v8 = 141;
        }
      }
    }
    v7 = ConversationHost;
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v8 = 101;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v7 = v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v8);
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v3;
}

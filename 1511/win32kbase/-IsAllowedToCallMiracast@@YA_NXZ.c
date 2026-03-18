/*
 * XREFs of ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C00B83C8
 * Callers:
 *     NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00B8E30 (NtGdiDdDDINetDispStartMiracastDisplayDevice.c)
 *     NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00B8E70 (NtGdiDdDDINetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     GreOpenThreadToken @ 0x1C00B6488 (GreOpenThreadToken.c)
 */

char IsAllowedToCallMiracast(void)
{
  signed int v0; // r12d
  PSID *v1; // rsi
  PSID *v2; // r14
  void *v3; // rbx
  char v4; // r13
  int v5; // eax
  HANDLE v6; // rdi
  PUCHAR v7; // rax
  void *v9; // rax
  ULONG *v10; // r15
  PULONG v11; // rax
  ULONG v12; // ecx
  HANDLE TokenHandle; // [rsp+80h] [rbp+48h] BYREF
  ULONG TokenInformationLength; // [rsp+88h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+90h] [rbp+58h] BYREF
  ULONG ReturnLength; // [rsp+98h] [rbp+60h] BYREF

  v0 = 0;
  v1 = 0LL;
  TokenHandle = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = GreOpenThreadToken(&TokenHandle);
  v6 = TokenHandle;
  if ( v5 >= 0 && ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) >= 0 )
  {
    if ( TokenInformation )
    {
      TokenInformationLength = 0;
      ZwQueryInformationToken(v6, TokenAppContainerSid, 0LL, 0, &TokenInformationLength);
      v1 = (PSID *)Win32AllocPoolWithQuota();
      if ( v1 )
      {
        if ( ZwQueryInformationToken(v6, TokenAppContainerSid, v1, TokenInformationLength, &TokenInformationLength) >= 0 )
        {
          RtlLengthRequiredSid(8u);
          v9 = (void *)Win32AllocPoolWithQuota();
          v3 = v9;
          if ( v9 )
          {
            if ( RtlInitializeSid(v9, &IdentifierAuthority, 8u) >= 0 )
            {
              LODWORD(TokenHandle) = 0;
              v10 = (ULONG *)&unk_1C00F0F40;
              do
              {
                do
                {
                  v11 = RtlSubAuthoritySid(v3, v0);
                  v12 = *v10;
                  ++v0;
                  ++v10;
                  *v11 = v12;
                }
                while ( v0 < 8 );
                v0 = 0;
                if ( RtlEqualSid(*v1, v3) )
                  goto LABEL_6;
                LODWORD(TokenHandle) = (_DWORD)TokenHandle + 1;
              }
              while ( (unsigned __int64)(int)TokenHandle < 6 );
            }
          }
        }
      }
    }
    else
    {
      LODWORD(TokenHandle) = 0;
      ZwQueryInformationToken(v6, TokenIntegrityLevel, 0LL, 0, (PULONG)&TokenHandle);
      v2 = (PSID *)Win32AllocPoolWithQuota();
      if ( ZwQueryInformationToken(v6, TokenIntegrityLevel, v2, (ULONG)TokenHandle, (PULONG)&TokenHandle) >= 0 )
      {
        v7 = RtlSubAuthorityCountSid(*v2);
        if ( *RtlSubAuthoritySid(*v2, (unsigned int)*v7 - 1) >= 0x1000 )
LABEL_6:
          v4 = 1;
      }
    }
  }
  if ( v6 )
    ZwClose(v6);
  if ( v1 )
    Win32FreePool();
  if ( v3 )
    Win32FreePool();
  if ( v2 )
    Win32FreePool();
  return v4;
}

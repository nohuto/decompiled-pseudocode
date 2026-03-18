/*
 * XREFs of ?IsAllowedToCall@@YA_NXZ @ 0x1C00B5CD8
 * Callers:
 *     NtGdiDdDDINetDispStartMiracastDisplayDevice @ 0x1C00B66A0 (NtGdiDdDDINetDispStartMiracastDisplayDevice.c)
 *     NtGdiDdDDINetDispStartMiracastDisplayDeviceEx @ 0x1C00B6700 (NtGdiDdDDINetDispStartMiracastDisplayDeviceEx.c)
 *     NtGdiDdDDINetDispStopMiracastDisplayDevice @ 0x1C00B6740 (NtGdiDdDDINetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

char IsAllowedToCall(void)
{
  PSID *v0; // rdi
  void *v1; // rbx
  char v2; // r15
  void *v3; // rax
  int v4; // ebp
  ULONG *v5; // rsi
  signed int i; // r14d
  PULONG v7; // rax
  ULONG v8; // ecx
  ULONG TokenInformationLength; // [rsp+60h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+70h] [rbp+18h] BYREF

  v0 = 0LL;
  TokenInformationLength = 0;
  v1 = 0LL;
  TokenHandle = 0LL;
  v2 = 0;
  if ( ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle) >= 0 )
  {
    ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, 0LL, 0, &TokenInformationLength);
    v0 = (PSID *)Win32AllocPoolWithQuota();
    if ( v0 )
    {
      if ( ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, v0, TokenInformationLength, &ReturnLength) >= 0 )
      {
        RtlLengthRequiredSid(8u);
        v3 = (void *)Win32AllocPoolWithQuota();
        v1 = v3;
        if ( v3 )
        {
          if ( RtlInitializeSid(v3, &IdentifierAuthority, 8u) >= 0 )
          {
            v4 = 0;
            v5 = (ULONG *)&unk_1C00EE4C0;
            while ( 1 )
            {
              for ( i = 0; i < 8; ++i )
              {
                v7 = RtlSubAuthoritySid(v1, i);
                v8 = *v5++;
                *v7 = v8;
              }
              if ( RtlEqualSid(*v0, v1) )
                break;
              if ( (unsigned __int64)++v4 >= 2 )
                goto LABEL_13;
            }
            v2 = 1;
          }
        }
      }
    }
  }
LABEL_13:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v0 )
    Win32FreePool();
  if ( v1 )
    Win32FreePool();
  return v2;
}

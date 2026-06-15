/*
 * XREFs of ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x180044F6C
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x180044BD4 (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

void *__fastcall BuildSecurityDescriptor()
{
  __int64 v0; // rdi
  void *v1; // r14
  struct _ACL *v2; // rbx
  char v3; // r12
  void *v4; // rax
  void *v5; // rsi
  DWORD LengthSid; // ebx
  DWORD v7; // r15d
  struct _ACL *v8; // rax
  void *v9; // rax
  TraceLoggingHProvider v11; // rcx
  unsigned __int16 v12; // dx
  DWORD LastError; // eax
  unsigned __int16 v14; // dx
  DWORD v15; // eax
  unsigned __int16 v16; // dx
  DWORD dwBufferLength; // [rsp+60h] [rbp-20h] BYREF
  PSID pSid; // [rsp+68h] [rbp-18h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  v0 = 0LL;
  pSid = 0LL;
  v1 = 0LL;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_WORD *)&pIdentifierAuthority.Value[4] = 256;
  v3 = 0;
  v4 = HeapAlloc(hHeap, 0, 0x28uLL);
  v5 = v4;
  if ( !v4 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v12 = 10;
LABEL_58:
    WPP_SF_(*((_QWORD *)v11 + 2), v12, (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids);
    goto LABEL_12;
  }
  if ( !InitializeSecurityDescriptor(v4, 1u) )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 11;
LABEL_63:
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v14,
      (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids,
      LastError);
    goto LABEL_12;
  }
  if ( !AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &pSid) )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v15 = GetLastError();
    v16 = 12;
LABEL_41:
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids, v15);
    goto LABEL_12;
  }
  LengthSid = GetLengthSid(AudiosrvSid);
  v7 = LengthSid + GetLengthSid(pSid) + 24;
  v8 = (struct _ACL *)HeapAlloc(hHeap, 0, v7);
  v2 = v8;
  if ( !v8 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v12 = 13;
    goto LABEL_58;
  }
  if ( !InitializeAcl(v8, v7, 2u) )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v15 = GetLastError();
    v16 = 14;
    goto LABEL_41;
  }
  if ( !AddAccessAllowedAce(v2, 2u, 0xF001Fu, AudiosrvSid) )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 15;
    goto LABEL_63;
  }
  if ( !AddAccessAllowedAce(v2, 2u, 4u, pSid) )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 16;
    goto LABEL_63;
  }
  if ( !SetSecurityDescriptorDacl(v5, 1, v2, 0) )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 17;
    goto LABEL_63;
  }
  dwBufferLength = GetSecurityDescriptorLength(v5);
  v9 = HeapAlloc(hHeap, 0, dwBufferLength);
  v1 = v9;
  if ( !v9 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v12 = 18;
    goto LABEL_58;
  }
  if ( MakeSelfRelativeSD(v5, v9, &dwBufferLength) )
  {
    v3 = 1;
    goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    v14 = 19;
    goto LABEL_63;
  }
LABEL_12:
  if ( pSid )
    FreeSid(pSid);
  if ( v2 )
    HeapFree(hHeap, 0, v2);
  if ( v5 )
    HeapFree(hHeap, 0, v5);
  if ( v3 )
    return v1;
  if ( v1 )
    HeapFree(hHeap, 0, v1);
  return (void *)v0;
}

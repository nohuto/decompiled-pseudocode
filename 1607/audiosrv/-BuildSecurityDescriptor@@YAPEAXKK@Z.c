/*
 * XREFs of ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x180031FFC
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x180031C70 (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
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
  CAudioSession *v11; // rcx
  __int64 v12; // rdx
  DWORD LastError; // eax
  __int64 v14; // rdx
  DWORD v15; // eax
  __int64 v16; // rdx
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
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v12 = 10LL;
LABEL_25:
    WPP_SF_(*((_QWORD *)v11 + 2), v12, &WPP_b102d38601a836944f027ba64192a35a_Traceguids);
    goto LABEL_12;
  }
  if ( !InitializeSecurityDescriptor(v4, 1u) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 11LL;
LABEL_63:
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, &WPP_b102d38601a836944f027ba64192a35a_Traceguids, LastError);
    goto LABEL_12;
  }
  if ( !AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &pSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v15 = GetLastError();
    v16 = 12LL;
LABEL_34:
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, &WPP_b102d38601a836944f027ba64192a35a_Traceguids, v15);
    goto LABEL_12;
  }
  LengthSid = GetLengthSid(AudiosrvSid);
  v7 = LengthSid + GetLengthSid(pSid) + 24;
  v8 = (struct _ACL *)HeapAlloc(hHeap, 0, v7);
  v2 = v8;
  if ( !v8 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v12 = 13LL;
    goto LABEL_25;
  }
  if ( !InitializeAcl(v8, v7, 2u) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v15 = GetLastError();
    v16 = 14LL;
    goto LABEL_34;
  }
  if ( !AddAccessAllowedAce(v2, 2u, 0xF001Fu, AudiosrvSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 15LL;
    goto LABEL_63;
  }
  if ( !AddAccessAllowedAce(v2, 2u, 4u, pSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 16LL;
    goto LABEL_63;
  }
  if ( !SetSecurityDescriptorDacl(v5, 1, v2, 0) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v14 = 17LL;
    goto LABEL_63;
  }
  dwBufferLength = GetSecurityDescriptorLength(v5);
  v9 = HeapAlloc(hHeap, 0, dwBufferLength);
  v1 = v9;
  if ( !v9 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v12 = 18LL;
    goto LABEL_25;
  }
  if ( MakeSelfRelativeSD(v5, v9, &dwBufferLength) )
  {
    v3 = 1;
    goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    v14 = 19LL;
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

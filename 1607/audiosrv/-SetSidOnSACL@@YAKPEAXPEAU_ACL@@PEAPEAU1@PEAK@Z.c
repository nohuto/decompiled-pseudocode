/*
 * XREFs of ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x18006FBC0
 * Callers:
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x180067424 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

__int64 __fastcall SetSidOnSACL(PSID pSid, PACL pAcl, struct _ACL **a3, unsigned int *a4)
{
  DWORD LastError; // ebx
  struct _ACL *v9; // rdi
  int v10; // edi
  DWORD v11; // r12d
  struct _ACL *v12; // rax
  DWORD v13; // esi
  unsigned int v14; // r8d
  LPVOID pAceList; // [rsp+30h] [rbp-38h] BYREF
  LPVOID pAce; // [rsp+38h] [rbp-30h] BYREF
  __int64 pAclInformation; // [rsp+40h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-20h]

  pAceList = 0LL;
  pAclInformation = 0LL;
  v19 = 0;
  LastError = 87;
  v9 = 0LL;
  if ( a3 && a4 && pSid )
  {
    *a3 = 0LL;
    LastError = 8;
    *a4 = 0;
    v10 = 8;
    if ( pAcl && GetAclInformation(pAcl, &pAclInformation, 0xCu, AclSizeInformation) )
      v10 = HIDWORD(pAclInformation);
    v11 = v10 + GetLengthSid(pSid) + 8;
    if ( v11 > 0xFFFF )
      v11 = 0xFFFF;
    v12 = (struct _ACL *)operator new(v11);
    v9 = v12;
    if ( v12 )
    {
      if ( InitializeAcl(v12, v11, 2u) && AddAccessAllowedAceEx(v9, 2u, 3u, 1u, pSid) && GetAce(v9, 0, &pAce) )
      {
        LastError = 0;
        *(_BYTE *)pAce = 17;
        if ( !pAcl )
          goto LABEL_22;
        v13 = 0;
        if ( !(_DWORD)pAclInformation )
          goto LABEL_22;
        while ( !GetAce(pAcl, v13, &pAceList)
             || *(_BYTE *)pAceList == 17
             || AddAce(v9, 2u, 0xFFFFFFFF, pAceList, *((unsigned __int16 *)pAceList + 1)) )
        {
          if ( ++v13 >= (unsigned int)pAclInformation )
            goto LABEL_22;
        }
      }
      LastError = GetLastError();
    }
    if ( !LastError )
    {
LABEL_22:
      *a3 = v9;
      *a4 = v11;
      return LastError;
    }
  }
  operator delete(v9);
  if ( (int)LastError > 0 )
    v14 = (unsigned __int16)LastError | 0x80070000;
  else
    v14 = LastError;
  AudSrvTraceLoggingErrorHelper("SetSidOnSACL", 279, v14);
  return LastError;
}

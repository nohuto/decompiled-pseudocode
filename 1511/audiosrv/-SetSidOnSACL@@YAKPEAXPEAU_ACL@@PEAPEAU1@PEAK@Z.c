/*
 * XREFs of ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x18003476C
 * Callers:
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800348E4 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 */

__int64 __fastcall SetSidOnSACL(PSID pSid, PACL pAcl, struct _ACL **a3, unsigned int *a4)
{
  DWORD LastError; // ebx
  struct _ACL *v9; // rdi
  int v10; // edi
  DWORD v11; // r15d
  struct _ACL *v12; // rax
  DWORD v13; // esi
  LPVOID pAceList; // [rsp+30h] [rbp-38h] BYREF
  LPVOID pAce; // [rsp+38h] [rbp-30h] BYREF
  __int64 pAclInformation; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h]

  pAceList = 0LL;
  pAclInformation = 0LL;
  v18 = 0;
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
          goto LABEL_18;
        v13 = 0;
        if ( !(_DWORD)pAclInformation )
          goto LABEL_18;
        while ( !GetAce(pAcl, v13, &pAceList)
             || *(_BYTE *)pAceList == 17
             || AddAce(v9, 2u, 0xFFFFFFFF, pAceList, *((unsigned __int16 *)pAceList + 1)) )
        {
          if ( ++v13 >= (unsigned int)pAclInformation )
            goto LABEL_18;
        }
      }
      LastError = GetLastError();
    }
    if ( LastError )
      goto LABEL_23;
LABEL_18:
    *a3 = v9;
    *a4 = v11;
    return LastError;
  }
LABEL_23:
  operator delete(v9);
  if ( (LastError & 0x80000000) != 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, LastError);
  }
  return LastError;
}

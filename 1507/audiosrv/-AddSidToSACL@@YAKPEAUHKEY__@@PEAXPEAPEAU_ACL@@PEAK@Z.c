/*
 * XREFs of ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x180036018
 * Callers:
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180035F44 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800890B4 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x18003612C (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 */

__int64 __fastcall AddSidToSACL(HKEY hKey, PSID pSid, struct _ACL **a3, unsigned int *a4)
{
  int KeySecurity; // ebx
  void *v9; // rax
  void *v10; // rdi
  unsigned int v12; // [rsp+20h] [rbp-20h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+24h] [rbp-1Ch] BYREF
  WINBOOL bSaclPresent; // [rsp+28h] [rbp-18h] BYREF
  PACL pSacl; // [rsp+30h] [rbp-10h] BYREF
  struct _ACL *v16; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+80h] [rbp+40h] BYREF

  pSacl = 0LL;
  v16 = 0LL;
  cbSecurityDescriptor = 0;
  KeySecurity = 87;
  if ( a3 && a4 && pSid )
  {
    *a3 = 0LL;
    *a4 = 0;
    KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
    if ( KeySecurity == 122 )
    {
      v9 = operator new(cbSecurityDescriptor);
      v10 = v9;
      if ( v9 )
      {
        KeySecurity = RegGetKeySecurity(hKey, 0x10u, v9, &cbSecurityDescriptor);
        if ( !KeySecurity )
        {
          if ( GetSecurityDescriptorSacl(v10, &bSaclPresent, &pSacl, &bSaclDefaulted) )
          {
            v12 = 0;
            KeySecurity = SetSidOnSACL(pSid, pSacl, &v16, &v12);
            if ( !KeySecurity )
            {
              *a3 = v16;
              *a4 = v12;
            }
          }
          else
          {
            KeySecurity = GetLastError();
          }
        }
        operator delete(v10);
      }
      else
      {
        KeySecurity = 122;
      }
    }
    if ( KeySecurity < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xCu,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        KeySecurity);
    }
  }
  return (unsigned int)KeySecurity;
}

/*
 * XREFs of ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800348E4
 * Callers:
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180034A2C (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180085EE4 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x18003476C (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
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
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        (unsigned int)KeySecurity);
    }
  }
  return (unsigned int)KeySecurity;
}

/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180034A2C
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180034D24 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800348E4 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, void *a2)
{
  signed int v3; // ebx
  int v4; // eax
  signed int LastError; // eax
  _BYTE pSecurityDescriptor[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+10h] BYREF
  PACL pSacl; // [rsp+70h] [rbp+18h] BYREF

  v3 = -2147024809;
  if ( !a2 )
    goto LABEL_16;
  pSacl = 0LL;
  v8 = 0;
  v4 = AddSidToSACL(hKey, a2, &pSacl, &v8);
  v3 = v4;
  if ( v4 > 0 )
    v3 = (unsigned __int16)v4 | 0x80070000;
  if ( v3 < 0 )
    goto LABEL_16;
  if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
    || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, pSacl, 0)
    || RegSetKeySecurity(hKey, 0x10u, pSecurityDescriptor) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( pSacl )
    operator delete(pSacl);
  if ( v3 < 0 )
  {
LABEL_16:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        (unsigned int)v3);
    }
  }
  return (unsigned int)v3;
}

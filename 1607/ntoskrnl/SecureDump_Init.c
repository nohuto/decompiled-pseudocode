/*
 * XREFs of SecureDump_Init @ 0x1401CB980
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x14013C724 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB45C (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x140219340 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, ULONG a2)
{
  int v2; // eax
  int v3; // ebx

  v2 = SecureDmpEncryptionContext;
  v3 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( dword_1403234AC )
    {
      byte_1403234D0 = SecureDmpEncryptionContext;
      v3 = SecureDump_SymmetricEncryptionSetup();
      if ( v3 < 0 || (v3 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v3 < 0) )
      {
        v2 = SecureDmpEncryptionContext;
        goto LABEL_9;
      }
      a2 = (dword_1403234C8 + pcbResult + 8279) & 0xFFFFF000;
      dword_140323504 = a2;
    }
    else
    {
      byte_1403234D0 = 0;
    }
    v2 = 2;
    SecureDmpEncryptionContext = 2;
  }
LABEL_9:
  switch ( v2 )
  {
    case 3:
      v3 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v3 < 0 )
      {
        byte_1403234D0 = 0;
        if ( hAlgorithm )
        {
          BCryptCloseAlgorithmProvider(hAlgorithm, a2);
          hAlgorithm = 0LL;
        }
        if ( hObject )
        {
          BCryptDestroyKey(hObject);
          hObject = 0LL;
        }
        if ( qword_1403234D8 )
        {
          ExFreePoolWithTag(qword_1403234D8, 0);
          qword_1403234D8 = 0LL;
        }
        if ( qword_1403234C0 )
        {
          ExFreePoolWithTag(qword_1403234C0, 0);
          qword_1403234C0 = 0LL;
        }
        if ( pbInput )
        {
          ExFreePoolWithTag(pbInput, 0);
          pbInput = 0LL;
        }
        SecureDmpEncryptionContext = 3;
      }
      break;
  }
  return (unsigned int)v3;
}

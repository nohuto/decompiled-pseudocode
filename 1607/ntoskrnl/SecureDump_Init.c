/*
 * XREFs of SecureDump_Init @ 0x1401CBA9C
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x14013C1B4 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptDestroyKey @ 0x140219514 (BCryptDestroyKey.c)
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
    if ( dword_14032346C )
    {
      byte_140323490 = SecureDmpEncryptionContext;
      v3 = SecureDump_SymmetricEncryptionSetup();
      if ( v3 < 0 || (v3 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v3 < 0) )
      {
        v2 = SecureDmpEncryptionContext;
        goto LABEL_9;
      }
      a2 = (dword_140323488 + pcbResult + 8279) & 0xFFFFF000;
      dword_1403234C4 = a2;
    }
    else
    {
      byte_140323490 = 0;
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
        byte_140323490 = 0;
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
        if ( qword_140323498 )
        {
          ExFreePoolWithTag(qword_140323498, 0);
          qword_140323498 = 0LL;
        }
        if ( qword_140323480 )
        {
          ExFreePoolWithTag(qword_140323480, 0);
          qword_140323480 = 0LL;
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

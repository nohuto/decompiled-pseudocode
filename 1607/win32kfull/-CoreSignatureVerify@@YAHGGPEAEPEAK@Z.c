/*
 * XREFs of ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1C01C5060
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01C5E38 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     _VerifyTHQBlob @ 0x1C01CCE70 (_VerifyTHQBlob.c)
 */

__int64 __fastcall CoreSignatureVerify(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int *a4)
{
  unsigned __int16 v6; // si
  unsigned __int16 v7; // bp
  unsigned int v8; // r10d

  v6 = a2;
  v7 = a1;
  v8 = VerifyTHQBlob(a1, a2, a3, gTHQAPublicKey);
  if ( v8 )
  {
    *a4 = 1;
  }
  else
  {
    v8 = VerifyTHQBlob(v7, v6, a3, gTHQAExceptionPublicKey);
    *a4 = v8 != 0 ? 2 : 0;
  }
  return v8;
}

/*
 * XREFs of PopFxValidateReturnedUnicodeString @ 0x14066D798
 * Callers:
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14066DA20 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DC78 (PopPluginQuerySocSubsystemMetadata.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 */

char __fastcall PopFxValidateReturnedUnicodeString(unsigned __int16 *a1, const wchar_t *a2, unsigned int a3)
{
  unsigned int v3; // r10d
  char v4; // di
  const wchar_t *v5; // r11
  int v8; // r9d
  bool v9; // r8
  bool v10; // cl
  bool v11; // r8
  bool v12; // dl
  char v13; // bp
  char v14; // dl
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  pcbLength = 0LL;
  v8 = a1[1];
  v9 = (_WORD)v3 != 0 && *v5 != 0 && v5 == a2;
  if ( v8 != a3 )
    v9 = 0;
  v10 = v9;
  if ( (int)v3 % 2 )
    v10 = 0;
  v11 = v10;
  if ( v8 % 2 )
    v11 = 0;
  v12 = v11;
  if ( v5[(unsigned __int64)v3 >> 1] )
    v12 = 0;
  v13 = (unsigned __int16)v3 < (unsigned __int16)v8 && v12;
  if ( RtlStringCbLengthW(v5, a3, &pcbLength) >= 0 )
  {
    v14 = v13;
    if ( *a1 != pcbLength )
      return 0;
    return v14;
  }
  return v4;
}

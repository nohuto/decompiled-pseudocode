/*
 * XREFs of SepIsMinTCB @ 0x14045BB18
 * Callers:
 *     SeQuerySigningPolicy @ 0x14045B8FC (SeQuerySigningPolicy.c)
 * Callees:
 *     SepIsImageInMinTcbList @ 0x14045CC9C (SepIsImageInMinTcbList.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     SepSetSystemPaths @ 0x14057A5A8 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(PCUNICODE_STRING String2, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  const UNICODE_STRING *v9; // rsi
  int v10; // eax
  unsigned __int16 Length; // di
  int v12; // ebp
  wchar_t *Buffer; // r14
  int v14; // r8d
  int v16; // [rsp+20h] [rbp-58h]
  _WORD v17[4]; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *v18; // [rsp+48h] [rbp-30h]

  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_14033E268, 0LL, 0LL) )
  {
    v14 = SepSetSystemPaths();
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v9 = qword_14033E268;
  v10 = 42;
  Length = qword_14033E268->Length;
  if ( qword_14033E268->Length < 0x2Au )
    v10 = Length;
  v12 = String2->Length;
  if ( v12 <= v10 )
    return (unsigned int)-1073741275;
  Buffer = String2->Buffer;
  if ( Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(qword_14033E268, String2, 1u) && !RtlPrefixUnicodeString(v9 + 1, String2, 1u) )
      return (unsigned int)-1073741275;
  }
  else
  {
    if ( !RtlPrefixUnicodeString(&stru_1402572B0, String2, 1u) && !RtlPrefixUnicodeString(&stru_14025D210, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  v17[0] = v12 - Length;
  v17[1] = v12 - Length;
  v18 = &Buffer[(unsigned __int64)(v12 - (unsigned __int16)(v12 - Length)) >> 1];
  v14 = ((__int64 (__fastcall *)(__int64 *, __int64, _WORD *, _QWORD, char, __int64, __int64, __int64))SepIsImageInMinTcbList)(
          &SeMsMinTCBList,
          11LL,
          v17,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v14 < 0 && (SeCiDebugOptions & 1) == 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
  {
    LOBYTE(v16) = a3;
    return (unsigned int)((__int64 (__fastcall *)(const wchar_t *, __int64, _WORD *, _QWORD, int, __int64, __int64, __int64))SepIsImageInMinTcbList)(
                           L" \"",
                           9LL,
                           v17,
                           a2,
                           v16,
                           a4,
                           a5,
                           a6);
  }
  return (unsigned int)v14;
}

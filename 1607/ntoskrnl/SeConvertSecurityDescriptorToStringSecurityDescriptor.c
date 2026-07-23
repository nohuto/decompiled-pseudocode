/*
 * XREFs of SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140235884
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 */

__int64 __fastcall SeConvertSecurityDescriptorToStringSecurityDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  _WORD *v7; // rax
  __int64 result; // rax

  v5 = 0;
  if ( a1 && (_DWORD)a3 || !a4 )
  {
    if ( a1 && a4 && (_DWORD)a3 )
      result = LocalConvertSDToStringSD_Rev1(a1, a2, a3, a1, a3, a4, a5);
    else
      result = 87LL;
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0xC0070000;
  }
  else
  {
    v7 = (_WORD *)SddlpAlloc(2uLL);
    *a4 = v7;
    if ( v7 )
    {
      *v7 = 0;
      if ( a5 )
        *a5 = 0;
    }
    else
    {
      return (unsigned int)-1073283064;
    }
    return v5;
  }
  return result;
}

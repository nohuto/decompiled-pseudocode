/*
 * XREFs of CmpNameFromAttributes @ 0x1404A4444
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryObject @ 0x14015A3F0 (ZwQueryObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpNameFromAttributes(_OWORD *a1, char a2, UNICODE_STRING *a3)
{
  unsigned int v4; // ebx
  _OWORD *v5; // rax
  unsigned __int16 v6; // si
  char *v7; // r8
  wchar_t *PoolWithQuotaTag; // rax
  __int64 result; // rax
  NTSTATUS v10; // r12d
  __m128i v11; // xmm0
  unsigned int v12; // ecx
  wchar_t *v13; // rax
  _WORD *v14; // r8
  void *Src[2]; // [rsp+38h] [rbp-2A0h] BYREF
  ULONG ReturnLength[2]; // [rsp+48h] [rbp-290h] BYREF
  UNICODE_STRING *v17; // [rsp+50h] [rbp-288h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-280h] BYREF
  __int128 v19; // [rsp+68h] [rbp-270h]
  __int128 v20; // [rsp+78h] [rbp-260h]
  __int64 v21; // [rsp+88h] [rbp-250h]
  UNICODE_STRING Source; // [rsp+90h] [rbp-248h] BYREF
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-238h] BYREF

  v17 = a3;
  v4 = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)Handle = *a1;
  v19 = a1[1];
  v20 = a1[2];
  v5 = (_OWORD *)v19;
  v21 = v19;
  if ( a2 == 1 )
    v5 = (_OWORD *)v19;
  *(_OWORD *)Src = *v5;
  v6 = (unsigned __int16)Src[0];
  if ( a2 == 1 && LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)Src[1] + LOWORD(Src[0]);
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < Src[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ((__int64)Src[0] & 1) != 0 )
    return 3221225531LL;
  if ( !Handle[1] )
  {
    if ( !LOWORD(Src[0]) )
      return 3221225531LL;
    a3->Length = (unsigned __int16)Src[0];
    a3->MaximumLength = v6;
    PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v6, 0x6E664D43u);
    a3->Buffer = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
      memmove(PoolWithQuotaTag, Src[1], v6);
    else
      return (unsigned int)-1073741670;
    return v4;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return 3221225480LL;
  if ( Src[1] && LOWORD(Src[0]) >= 2u && *(_WORD *)Src[1] == 92 )
    return 3221225531LL;
  result = IoConvertFileHandleToKernelHandle((int)Handle[1], &Handle[1]);
  if ( (int)result >= 0 )
  {
    v10 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, ReturnLength);
    ZwClose(Handle[1]);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v11 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v12 = v6 + (unsigned __int16)_mm_cvtsi128_si32(v11) + 2;
    ReturnLength[1] = v12;
    if ( v12 > 0xFFFF )
      return 3221225529LL;
    a3->MaximumLength = v12;
    v13 = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned __int16)v12, 0x6E664D43u);
    a3->Buffer = v13;
    if ( !v13 )
      return 3221225626LL;
    RtlAppendUnicodeStringToString(a3, &Source);
    if ( a3->Length )
    {
      v14 = (wchar_t *)((char *)a3->Buffer + a3->Length);
      if ( *(v14 - 1) != 92 )
      {
        *v14 = 92;
        a3->Length += 2;
      }
    }
    return (unsigned int)RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}

/*
 * XREFs of CmpNameFromAttributes @ 0x1403DBE88
 * Callers:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryObject @ 0x140150820 (ZwQueryObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpNameFromAttributes(_OWORD *a1, char a2, UNICODE_STRING *a3)
{
  unsigned int v4; // ebx
  __int128 v5; // xmm1
  _OWORD *v6; // rcx
  unsigned __int16 v7; // si
  char *v8; // r8
  wchar_t *PoolWithQuotaTag; // rax
  __int64 result; // rax
  NTSTATUS v11; // r12d
  __m128i v12; // xmm0
  unsigned int v13; // ecx
  wchar_t *v14; // rax
  _WORD *v15; // r8
  void *Src[2]; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-290h]
  ULONG ReturnLength; // [rsp+4Ch] [rbp-28Ch] BYREF
  UNICODE_STRING *v19; // [rsp+50h] [rbp-288h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-280h] BYREF
  __int128 v21; // [rsp+68h] [rbp-270h]
  __int128 v22; // [rsp+78h] [rbp-260h]
  __int64 v23; // [rsp+88h] [rbp-250h]
  UNICODE_STRING Source; // [rsp+90h] [rbp-248h] BYREF
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-238h] BYREF

  v19 = a3;
  v4 = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)Handle = *a1;
  v5 = a1[1];
  v21 = v5;
  v22 = a1[2];
  v6 = (_OWORD *)v5;
  v23 = v5;
  if ( a2 == 1 )
    v6 = (_OWORD *)v21;
  *(_OWORD *)Src = *v6;
  v7 = (unsigned __int16)Src[0];
  if ( a2 == 1 && LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)Src[1] + LOWORD(Src[0]);
    if ( (unsigned __int64)v8 > MmUserProbeAddress || v8 < Src[1] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (v7 & 1) != 0 )
    return 3221225531LL;
  if ( !Handle[1] )
  {
    if ( !v7 )
      return 3221225531LL;
    a3->Length = v7;
    a3->MaximumLength = v7;
    PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x6E664D43u);
    a3->Buffer = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
      memmove(PoolWithQuotaTag, Src[1], v7);
    else
      return (unsigned int)-1073741670;
    return v4;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return 3221225480LL;
  if ( Src[1] && v7 >= 2u && *(_WORD *)Src[1] == 92 )
    return 3221225531LL;
  result = IoConvertFileHandleToKernelHandle((int)Handle[1], &Handle[1]);
  if ( (int)result >= 0 )
  {
    v11 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, &ReturnLength);
    ZwClose(Handle[1]);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v13 = v7 + (unsigned __int16)_mm_cvtsi128_si32(v12) + 2;
    v17 = v13;
    if ( v13 > 0xFFFF )
      return 3221225529LL;
    a3->MaximumLength = v13;
    v14 = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned __int16)v13, 0x6E664D43u);
    a3->Buffer = v14;
    if ( !v14 )
      return 3221225626LL;
    RtlAppendUnicodeStringToString(a3, &Source);
    if ( a3->Length )
    {
      v15 = (wchar_t *)((char *)a3->Buffer + a3->Length);
      if ( *(v15 - 1) != 92 )
      {
        *v15 = 92;
        a3->Length += 2;
      }
    }
    return (unsigned int)RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}

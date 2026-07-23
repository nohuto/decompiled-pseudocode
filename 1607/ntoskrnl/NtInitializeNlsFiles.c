/*
 * XREFs of NtInitializeNlsFiles @ 0x1404B66CC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x14015A490 (ZwQueryDefaultLocale.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
 *     ExpGetGlobalLocaleSection @ 0x1404B6830 (ExpGetGlobalLocaleSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  PVOID *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  void *v13; // [rsp+68h] [rbp-20h] BYREF
  size_t v14[2]; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleIda; // [rsp+A8h] [rbp+20h] BYREF

  v6 = BaseAddress;
  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
    BaseAddress = (PVOID *)0x7FFFFFFF0000LL;
  *BaseAddress = *BaseAddress;
  v7 = (__int64)DefaultLocaleId;
  if ( (unsigned __int64)DefaultLocaleId >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  if ( ((unsigned __int8)DefaultCasingTableSize & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (__int64)DefaultCasingTableSize;
  if ( (unsigned __int64)DefaultCasingTableSize >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v8 = *(_BYTE *)v8;
  *(_BYTE *)(v8 + 7) = *(_BYTE *)(v8 + 7);
  result = ZwQueryDefaultLocale(0, &DefaultLocaleIda);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v13 = 0LL;
      v11 = 0LL;
      v14[0] = 0LL;
      v10 = MmMapViewOfSection(
              (__int64)Object,
              KeGetCurrentThread()->ApcState.Process,
              &v13,
              0LL,
              0LL,
              &v11,
              v14,
              1,
              0x400000u,
              2u);
      ObfDereferenceObject(Object);
      if ( v10 >= 0 )
      {
        *v6 = v13;
        *DefaultLocaleId = DefaultLocaleIda;
        DefaultCasingTableSize->QuadPart = NlsDefaultCasingTableSize;
      }
      return v10;
    }
  }
  return result;
}

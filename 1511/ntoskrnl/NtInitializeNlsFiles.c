/*
 * XREFs of NtInitializeNlsFiles @ 0x1404625A4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x1401508C0 (ZwQueryDefaultLocale.c)
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 *     ExpGetGlobalLocaleSection @ 0x140464988 (ExpGetGlobalLocaleSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  PVOID *v6; // rsi
  _DWORD *v7; // rcx
  _BYTE *v8; // rcx
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  _DWORD v11[2]; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  void *v13; // [rsp+68h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleIda; // [rsp+A8h] [rbp+20h] BYREF

  v6 = BaseAddress;
  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
    BaseAddress = (PVOID *)MmUserProbeAddress;
  *BaseAddress = *BaseAddress;
  v7 = DefaultLocaleId;
  if ( (unsigned __int64)DefaultLocaleId >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  if ( ((unsigned __int8)DefaultCasingTableSize & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = DefaultCasingTableSize;
  if ( (unsigned __int64)DefaultCasingTableSize >= MmUserProbeAddress )
    v8 = (_BYTE *)MmUserProbeAddress;
  *v8 = *v8;
  v8[7] = v8[7];
  result = ZwQueryDefaultLocale(0, &DefaultLocaleIda);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v13 = 0LL;
      v11[0] = 0;
      v11[1] = 0;
      v14 = 0LL;
      v10 = MmMapViewOfSection(
              (_DWORD)Object,
              KeGetCurrentThread()->ApcState.Process,
              (unsigned int)&v13,
              0,
              0LL,
              (__int64)v11,
              (__int64)&v14,
              1,
              0x400000,
              2);
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

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

NTSTATUS __fastcall NtInitializeNlsFiles(_QWORD *a1, DWORD *a2, ULONG64 a3)
{
  _QWORD *v5; // rsi
  _DWORD *v6; // rcx
  _BYTE *v7; // rcx
  NTSTATUS result; // eax
  int v9; // ebx
  _DWORD v10[2]; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a1;
  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_QWORD *)MmUserProbeAddress;
  *a1 = *a1;
  v6 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  if ( (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (_BYTE *)a3;
  if ( a3 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[7] = v7[7];
  result = ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v12 = 0LL;
      v10[0] = 0;
      v10[1] = 0;
      v13 = 0LL;
      v9 = MmMapViewOfSection(
             (_DWORD)Object,
             KeGetCurrentThread()->ApcState.Process,
             (unsigned int)&v12,
             0,
             0LL,
             (__int64)v10,
             (__int64)&v13,
             1,
             0x400000,
             2);
      ObfDereferenceObject(Object);
      if ( v9 >= 0 )
      {
        *v5 = v12;
        *a2 = DefaultLocaleId;
        *(_QWORD *)a3 = NlsDefaultCasingTableSize;
      }
      return v9;
    }
  }
  return result;
}

/*
 * XREFs of NtInitializeNlsFiles @ 0x1404D2C2C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x140159F20 (ZwQueryDefaultLocale.c)
 *     MmMapViewOfSection @ 0x14046BFE8 (MmMapViewOfSection.c)
 *     ExpGetGlobalLocaleSection @ 0x1404D2D90 (ExpGetGlobalLocaleSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtInitializeNlsFiles(unsigned __int64 a1, DWORD *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  int v9; // ebx
  __int64 v10; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  void *v12; // [rsp+68h] [rbp-20h] BYREF
  size_t v13[2]; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+A8h] [rbp+20h] BYREF

  v5 = (_QWORD *)a1;
  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  v6 = (__int64)a2;
  if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  if ( (a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = a3;
  if ( a3 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v7 = *(_BYTE *)v7;
  *(_BYTE *)(v7 + 7) = *(_BYTE *)(v7 + 7);
  result = ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v12 = 0LL;
      v10 = 0LL;
      v13[0] = 0LL;
      v9 = MmMapViewOfSection(
             (__int64)Object,
             KeGetCurrentThread()->ApcState.Process,
             &v12,
             0LL,
             0LL,
             &v10,
             v13,
             1,
             0x400000u,
             2u);
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

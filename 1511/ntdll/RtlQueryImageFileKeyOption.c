/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x18007D1E0
 * Callers:
 *     LdrpMapViewOfSection @ 0x18000EA30 (LdrpMapViewOfSection.c)
 *     LdrpQueryIllegalCWDDevices @ 0x18007CDAC (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007CE90 (RtlQueryImageFileExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D13C (RtlQueryApplicationKeyOption.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC (LdrpInitializeApplicationVerifierPackage.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180075D40 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        unsigned int *a6)
{
  NTSTATUS result; // eax
  _BYTE *v10; // rsi
  NTSTATUS v11; // ebx
  void *v12; // r12
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  size_t v19; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v22; // [rsp+48h] [rbp-B8h]
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v22 = a6;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  if ( a5 >= 0x3F4 )
  {
    Length = a5 + 12;
    goto LABEL_9;
  }
  v10 = KeyValueInformation;
  result = NtQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v11 = result;
  if ( result >= 0 )
  {
    v12 = 0LL;
LABEL_14:
    v17 = *((_DWORD *)v10 + 1);
    if ( ((v17 - 3) & 0xFFFFFFFB) != 0 )
    {
      v18 = 4;
      if ( v17 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( a5 == 4 && *((_DWORD *)v10 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)v10 + 3);
LABEL_38:
              if ( v22 && ((int)(v11 + 0x80000000) < 0 || v11 == -2147483643) )
                *v22 = v18;
              goto LABEL_42;
            }
            goto LABEL_37;
          }
          goto LABEL_21;
        }
LABEL_52:
        v11 = -1073741788;
        goto LABEL_42;
      }
      if ( v17 == 11 )
      {
        if ( a3 == 11 )
        {
          v18 = 8;
          if ( a5 == 8 && *((_DWORD *)v10 + 2) == 8 )
          {
            ResultLength = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v10 + 12);
              goto LABEL_38;
            }
LABEL_37:
            v11 = -2147483643;
            goto LABEL_38;
          }
          goto LABEL_21;
        }
        goto LABEL_52;
      }
      if ( v17 != 1 )
      {
        v11 = -1073741788;
        goto LABEL_31;
      }
      if ( a3 == 4 )
      {
        if ( a5 != 4 )
        {
LABEL_21:
          v11 = -1073741820;
LABEL_42:
          if ( v12 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
          return v11;
        }
        if ( ((unsigned __int8)a4 & 3) != 0 )
        {
          v11 = -2147483646;
          goto LABEL_42;
        }
        ResultLength = 4;
        if ( !a4 )
          goto LABEL_37;
        DestinationString.Buffer = (unsigned __int16 *)(v10 + 12);
        DestinationString.Length = *((_WORD *)v10 + 4);
        DestinationString.MaximumLength = *((_WORD *)v10 + 4);
        v11 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
LABEL_31:
        v18 = ResultLength;
        goto LABEL_38;
      }
      v18 = *((_DWORD *)v10 + 2);
      ResultLength = v18;
      if ( v18 > a5 )
        goto LABEL_37;
      v19 = v18;
    }
    else
    {
      if ( a3 != v17 )
        goto LABEL_52;
      v18 = *((_DWORD *)v10 + 2);
      ResultLength = v18;
      if ( !a4 || *((_DWORD *)v10 + 2) > a5 )
        goto LABEL_37;
      v19 = *((unsigned int *)v10 + 2);
    }
    memmove(a4, v10 + 12, v19);
    goto LABEL_38;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
      v12 = Heap;
      if ( !Heap )
        return -1073741801;
      v10 = Heap;
      v16 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v11 = v16;
      if ( v16 >= 0 )
        goto LABEL_14;
      if ( v16 != -2147483643 )
        goto LABEL_42;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return result;
}

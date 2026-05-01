/*
 * XREFs of QuerySecurityDescriptorValue @ 0x18001E64C
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18001E9F8 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18001EAE4 (RtlStringCbCatW.c)
 *     RtlStringCbLengthW @ 0x18001EB5C (RtlStringCbLengthW.c)
 *     RtlStringCopyWorkerW @ 0x18001EC10 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall QuerySecurityDescriptorValue(__int64 a1, _QWORD *a2)
{
  PVOID Heap; // rdi
  NTSTATUS v5; // ebx
  SIZE_T v6; // rsi
  __int64 v7; // rcx
  SIZE_T v8; // rdx
  NTSTATUS v10; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-51h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  int KeyValueInformation; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+9Ch] [rbp+13h]
  int v19; // [rsp+A4h] [rbp+1Bh]

  memset(v12, 0, sizeof(v12));
  Heap = 0LL;
  KeyHandle = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  KeyValueInformation = 0;
  v18 = 0LL;
  v19 = 0;
  v5 = RtlStringCbLengthW(a1, 0x7FFFFFFFLL, &Size);
  if ( v5 < 0 )
    goto LABEL_11;
  Size += 142LL;
  v6 = Size;
  v12[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
  v7 = v12[1];
  if ( !v12[1] )
    goto LABEL_19;
  WORD1(v12[0]) = v6;
  v8 = v6 >> 1;
  LOWORD(v12[0]) = v6 - 2;
  v5 = 0;
  if ( (v6 >> 1) - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = RtlStringCopyWorkerW(
           v12[1],
           v8,
           0LL,
           L"\\REGISTRY\\MACHINE\\Software\\Microsoft\\SecurityManager\\TransientObjects\\");
LABEL_7:
    v7 = v12[1];
    goto LABEL_8;
  }
  if ( v8 )
  {
    *(_WORD *)v12[1] = 0;
    goto LABEL_7;
  }
LABEL_8:
  if ( v5 >= 0 )
  {
    v5 = RtlStringCbCatW(v7, v6, a1);
    if ( v5 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v5 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"SecurityDescriptor");
        v10 = NtQueryValueKey(
                KeyHandle,
                &DestinationString,
                KeyValuePartialInformation,
                &KeyValueInformation,
                0x10u,
                &ResultLength);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v5 = -1073739509;
          goto LABEL_11;
        }
        if ( v10 == -2147483643 || v10 == -1073741789 )
        {
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
          if ( Heap )
          {
            v5 = NtQueryValueKey(
                   KeyHandle,
                   &DestinationString,
                   KeyValuePartialInformation,
                   Heap,
                   ResultLength,
                   &ResultLength);
            if ( v5 >= 0 )
            {
              *a2 = Heap;
              Heap = 0LL;
            }
            goto LABEL_11;
          }
LABEL_19:
          v5 = -1073741801;
        }
      }
    }
  }
LABEL_11:
  AccessHlprFree(Heap);
  if ( KeyHandle )
    NtClose(KeyHandle);
  AccessHlprFree(v12[1]);
  return (unsigned int)v5;
}

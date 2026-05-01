/*
 * XREFs of QuerySecurityDescriptorValue @ 0x180019E50
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001A034 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18001A148 (AccessHlprFree.c)
 *     RtlStringCbCatW @ 0x18001A224 (RtlStringCbCatW.c)
 *     RtlStringCbLengthW @ 0x18001A4B0 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall QuerySecurityDescriptorValue(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rsi
  NTSTATUS v5; // ebx
  SIZE_T v6; // rdi
  _WORD *v7; // r9
  SIZE_T v8; // rcx
  const wchar_t *v9; // rdx
  SIZE_T v10; // r8
  NTSTATUS v12; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-41h] BYREF
  __int64 v15; // [rsp+48h] [rbp-39h] BYREF
  _WORD *Heap; // [rsp+50h] [rbp-31h]
  SIZE_T Size; // [rsp+58h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  _QWORD KeyValueInformation[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v15 = 0LL;
  Heap = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation[0] = 0LL;
  KeyValueInformation[1] = 0LL;
  v5 = RtlStringCbLengthW(a1, 0x7FFFFFFFLL, &Size);
  if ( v5 < 0 )
    goto LABEL_16;
  Size += 142LL;
  v6 = Size;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
  v7 = Heap;
  if ( !Heap )
  {
    v5 = -1073741801;
    goto LABEL_16;
  }
  WORD1(v15) = v6;
  LOWORD(v15) = v6 - 2;
  v8 = v6 >> 1;
  v5 = 0;
  if ( (v6 >> 1) - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( !v8 )
      goto LABEL_13;
  }
  else
  {
    v9 = L"\\REGISTRY\\MACHINE\\Software\\Microsoft\\SecurityManager\\TransientObjects\\";
    v5 = 0;
    if ( v8 )
    {
      v10 = 2147483646 - v8;
      while ( v10 + v8 && *v9 )
      {
        *v7++ = *v9++;
        if ( !--v8 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      --v7;
      v5 = -2147483643;
    }
  }
  *v7 = 0;
  v7 = Heap;
LABEL_13:
  if ( v5 >= 0 )
  {
    v5 = RtlStringCbCatW(v7, v6, a1);
    if ( v5 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v5 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"SecurityDescriptor");
        v12 = NtQueryValueKey(
                KeyHandle,
                &DestinationString,
                KeyValuePartialInformation,
                KeyValueInformation,
                0x10u,
                &ResultLength);
        v5 = v12;
        if ( v12 < 0 )
        {
          if ( v12 == -2147483643 || v12 == -1073741789 )
          {
            v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
            if ( v4 )
            {
              v5 = NtQueryValueKey(
                     KeyHandle,
                     &DestinationString,
                     KeyValuePartialInformation,
                     v4,
                     ResultLength,
                     &ResultLength);
              if ( v5 >= 0 )
              {
                *a2 = v4;
                v4 = 0LL;
              }
            }
            else
            {
              v5 = -1073741801;
            }
          }
        }
        else
        {
          v5 = -1073739509;
        }
      }
    }
  }
LABEL_16:
  AccessHlprFree(v4);
  if ( KeyHandle )
    NtClose(KeyHandle);
  AccessHlprFree(Heap);
  return (unsigned int)v5;
}

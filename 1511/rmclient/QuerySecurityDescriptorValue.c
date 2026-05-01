/*
 * XREFs of QuerySecurityDescriptorValue @ 0x180006390
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1800068A0 (RtlStringLengthWorkerW.c)
 *     RtlStringCbLengthW @ 0x1800068F0 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 */

__int64 __fastcall QuerySecurityDescriptorValue(_WORD *a1, _QWORD *a2)
{
  _WORD *v3; // rbx
  NTSTATUS v4; // esi
  SIZE_T v5; // rdi
  __int16 v6; // ax
  SIZE_T v7; // rdi
  _WORD *v8; // r8
  const wchar_t *v9; // rdx
  SIZE_T v10; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  _WORD *v13; // r8
  SIZE_T v14; // rcx
  __int64 v15; // rdx
  NTSTATUS v16; // eax
  PVOID Heap; // rbx
  ULONG ResultLength; // [rsp+38h] [rbp-59h] BYREF
  PVOID v20[2]; // [rsp+40h] [rbp-51h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  int KeyValueInformation; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v27; // [rsp+ACh] [rbp+1Bh]
  int v28; // [rsp+B4h] [rbp+23h]

  memset(v20, 0, sizeof(v20));
  KeyHandle = 0LL;
  v3 = a1;
  DestinationString.Length = 0;
  KeyValueInformation = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v27 = 0LL;
  v28 = 0;
  v4 = RtlStringCbLengthW(a1, 0x7FFFFFFFLL, &Size);
  if ( v4 >= 0 )
  {
    Size += 142LL;
    v5 = Size;
    v20[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
    if ( v20[1] )
    {
      v6 = v5 - 2;
      WORD1(v20[0]) = v5;
      v7 = v5 >> 1;
      v4 = 0;
      LOWORD(v20[0]) = v6;
      if ( v7 - 1 > 0x7FFFFFFE )
        v4 = -1073741811;
      if ( v4 < 0 )
      {
        if ( v7 )
          *(_WORD *)v20[1] = 0;
      }
      else
      {
        v8 = v20[1];
        v9 = L"\\REGISTRY\\MACHINE\\Software\\Microsoft\\SecurityManager\\TransientObjects\\";
        v10 = v7;
        v4 = 0;
        if ( !v7 )
          goto LABEL_39;
        while ( 2147483646 - v7 + v10 && *v9 )
        {
          *v8++ = *v9++;
          if ( !--v10 )
            goto LABEL_39;
        }
        if ( !v10 )
        {
LABEL_39:
          --v8;
          v4 = -2147483643;
        }
        *v8 = 0;
      }
      if ( v4 >= 0 )
      {
        v4 = 0;
        if ( v7 - 1 > 0x7FFFFFFE )
          v4 = -1073741811;
        if ( v4 < 0 )
        {
          v12 = 0LL;
        }
        else
        {
          v11 = RtlStringLengthWorkerW(v20[1], v7, &v24);
          v12 = v24;
          v4 = v11;
        }
        if ( v4 >= 0 )
        {
          v4 = 0;
          v13 = (char *)v20[1] + 2 * v12;
          v14 = v7 - v12;
          if ( v7 == v12 )
            goto LABEL_43;
          v15 = 2147483646LL;
          while ( v15 && *v3 )
          {
            *v13++ = *v3++;
            --v15;
            if ( !--v14 )
              goto LABEL_43;
          }
          if ( !v14 )
          {
LABEL_43:
            --v13;
            v4 = -2147483643;
          }
          *v13 = 0;
          if ( v4 >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v4 = NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
            if ( v4 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"SecurityDescriptor");
              v16 = NtQueryValueKey(
                      KeyHandle,
                      &DestinationString,
                      KeyValuePartialInformation,
                      &KeyValueInformation,
                      0x10u,
                      &ResultLength);
              v4 = v16;
              if ( v16 >= 0 )
              {
                v4 = -1073739509;
              }
              else if ( v16 == -2147483643 || v16 == -1073741789 )
              {
                Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
                if ( Heap )
                {
                  v4 = NtQueryValueKey(
                         KeyHandle,
                         &DestinationString,
                         KeyValuePartialInformation,
                         Heap,
                         ResultLength,
                         &ResultLength);
                  if ( v4 < 0 )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
                  else
                    *a2 = Heap;
                }
                else
                {
                  v4 = -1073741801;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v20[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20[1]);
  return (unsigned int)v4;
}

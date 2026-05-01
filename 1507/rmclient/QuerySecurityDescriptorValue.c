/*
 * XREFs of QuerySecurityDescriptorValue @ 0x1800019E0
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180001850 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

__int64 __fastcall QuerySecurityDescriptorValue(_WORD *a1, _QWORD *a2)
{
  _WORD *v2; // rbx
  _WORD *v4; // rax
  __int64 v5; // rcx
  NTSTATUS v6; // esi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int16 v9; // ax
  unsigned __int64 v10; // rdi
  _WORD *v11; // r8
  const wchar_t *v12; // rdx
  unsigned __int64 v13; // rcx
  _WORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  _WORD *v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  PVOID Heap; // rbx
  __int64 v23; // rdx
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  PVOID v25[2]; // [rsp+40h] [rbp-31h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  SIZE_T Size; // [rsp+68h] [rbp-9h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  int KeyValueInformation; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v31; // [rsp+A4h] [rbp+33h]
  int v32; // [rsp+ACh] [rbp+3Bh]

  v2 = a1;
  memset(v25, 0, sizeof(v25));
  KeyHandle = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  KeyValueInformation = 0;
  v31 = 0LL;
  v32 = 0;
  if ( a1 )
  {
    v4 = a1;
    v5 = 0x3FFFFFFFLL;
    v6 = 0;
    while ( *v4 )
    {
      ++v4;
      if ( !--v5 )
      {
        v6 = -1073741811;
        v23 = 0LL;
        goto LABEL_7;
      }
    }
    v23 = 0x3FFFFFFF - v5;
LABEL_7:
    if ( v6 >= 0 )
    {
      v7 = 2 * v23;
      goto LABEL_9;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  v7 = 0LL;
LABEL_9:
  if ( v6 < 0 )
    goto LABEL_48;
  Size = v7 + 142;
  v8 = v7 + 142;
  v25[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7 + 142);
  if ( v25[1] )
  {
    v9 = v8 - 2;
    WORD1(v25[0]) = v8;
    v10 = v8 >> 1;
    v6 = 0;
    LOWORD(v25[0]) = v9;
    if ( v10 - 1 > 0x7FFFFFFE )
      v6 = -1073741811;
    if ( v6 < 0 )
    {
      if ( v10 )
        *(_WORD *)v25[1] = 0;
    }
    else
    {
      v11 = v25[1];
      v12 = L"\\REGISTRY\\MACHINE\\Software\\Microsoft\\SecurityManager\\TransientObjects\\";
      v13 = v10;
      v6 = 0;
      if ( !v10 )
        goto LABEL_54;
      while ( 2147483646 - v10 + v13 && *v12 )
      {
        *v11++ = *v12++;
        if ( !--v13 )
          goto LABEL_54;
      }
      if ( !v13 )
      {
LABEL_54:
        --v11;
        v6 = -2147483643;
      }
      *v11 = 0;
    }
    if ( v6 < 0 )
      goto LABEL_46;
    v6 = 0;
    if ( v10 - 1 > 0x7FFFFFFE )
      v6 = -1073741811;
    if ( v6 >= 0 )
    {
      v14 = v25[1];
      v15 = v10;
      v6 = 0;
      if ( v10 )
      {
        while ( *v14 )
        {
          ++v14;
          if ( !--v15 )
            goto LABEL_57;
        }
        if ( v15 )
        {
          v16 = v10 - v15;
          goto LABEL_31;
        }
      }
LABEL_57:
      v6 = -1073741811;
    }
    v16 = 0LL;
LABEL_31:
    if ( v6 >= 0 )
    {
      v6 = 0;
      v17 = (char *)v25[1] + 2 * v16;
      v18 = v10 - v16;
      if ( v10 == v16 )
        goto LABEL_59;
      v19 = 2147483646LL;
      while ( v19 && *v2 )
      {
        *v17++ = *v2++;
        --v19;
        if ( !--v18 )
          goto LABEL_59;
      }
      if ( !v18 )
      {
LABEL_59:
        --v17;
        v6 = -2147483643;
      }
      *v17 = 0;
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v25;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
        if ( v6 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"SecurityDescriptor");
          v20 = NtQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  KeyValuePartialInformation,
                  &KeyValueInformation,
                  0x10u,
                  &ResultLength);
          v6 = v20;
          if ( v20 >= 0 )
          {
            v6 = -1073739509;
          }
          else if ( v20 == -2147483643 || v20 == -1073741789 )
          {
            Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, ResultLength);
            if ( Heap )
            {
              v6 = NtQueryValueKey(
                     KeyHandle,
                     &DestinationString,
                     KeyValuePartialInformation,
                     Heap,
                     ResultLength,
                     &ResultLength);
              if ( v6 < 0 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
              else
                *a2 = Heap;
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
      }
    }
    goto LABEL_46;
  }
  v6 = -1073741801;
LABEL_46:
  if ( KeyHandle )
    NtClose(KeyHandle);
LABEL_48:
  if ( v25[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25[1]);
  return (unsigned int)v6;
}

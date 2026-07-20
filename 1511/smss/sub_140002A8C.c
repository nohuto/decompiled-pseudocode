/*
 * XREFs of sub_140002A8C @ 0x140002A8C
 * Callers:
 *     sub_140001914 @ 0x140001914 (sub_140001914.c)
 * Callees:
 *     sub_140002D0C @ 0x140002D0C (sub_140002D0C.c)
 *     sub_140002D38 @ 0x140002D38 (sub_140002D38.c)
 *     sub_140013070 @ 0x140013070 (sub_140013070.c)
 */

__int64 __fastcall sub_140002A8C(unsigned int a1, __int64 a2, int *a3, struct _UNICODE_STRING *a4)
{
  UNICODE_STRING *v4; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 result; // rax
  bool v12; // dl
  ULONG v13; // ecx
  int v14; // eax
  int Length; // ecx
  WCHAR *Heap; // rax
  NTSTATUS v17; // eax
  const UNICODE_STRING *v18; // rdx
  struct _UNICODE_STRING *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rbx
  PCWSTR *v24; // rsi
  __int64 v25; // r14
  ULONG BufferSize; // ebx
  unsigned __int64 v27; // rcx
  WCHAR *v28; // rax
  int v29; // eax
  int v30; // eax
  ULONG v31; // r8d
  int SystemInformation[4]; // [rsp+30h] [rbp-10h] BYREF
  ULONG RetunedLength; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( a1 <= 2 )
    return 3221225711LL;
  *a3 = 0;
  v9 = wcstoul(*(const wchar_t **)(a2 + 8), 0LL, 16);
  v10 = wcstoul(*(const wchar_t **)(a2 + 16), 0LL, 16);
  result = sub_140002D38(v10, v9);
  if ( (int)result >= 0 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL) == (unsigned int)sub_140002D0C();
    *a3 &= ~8u;
    *a3 |= 8 * v12;
    *a3 ^= (*a3 ^ (4 * *(_DWORD *)BaseAddress)) & 4;
    v13 = 0;
    RetunedLength = 0;
    if ( a1 > 3 )
    {
      v20 = (_QWORD *)(a2 + 24);
      v21 = a1 - 3;
      do
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(*v20 + 2 * v22) );
        ++v20;
        v13 += 2 * v22 + 2;
        RetunedLength = v13;
        --v21;
      }
      while ( v21 );
      if ( v13 )
      {
LABEL_9:
        Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags + 786432, v13);
        a4->Buffer = Heap;
        if ( Heap )
        {
          a4->MaximumLength = RetunedLength;
          a4->Length = 0;
          *Heap = 0;
          if ( (*(_BYTE *)a3 & 2) == 0 )
          {
            v23 = a1 - 1;
            if ( (unsigned int)v23 > 3 )
            {
              v24 = (PCWSTR *)(a2 + 24);
              v25 = a1 - 4;
              do
              {
                RtlAppendUnicodeToString(a4, *v24);
                RtlAppendUnicodeToString(a4, L" ");
                ++v24;
                --v25;
              }
              while ( v25 );
            }
            RtlAppendUnicodeToString(a4, *(PCWSTR *)(a2 + 8 * v23));
            return 0LL;
          }
          if ( (*(_BYTE *)a3 & 1) == 0 )
          {
            v18 = &String1;
            v19 = a4;
            if ( (*(_BYTE *)a3 & 8) == 0 )
              v18 = (const UNICODE_STRING *)&word_14001FBE0;
            goto LABEL_16;
          }
          v17 = LdrQueryImageFileExecutionOptions(v4, L"Debugger", 1u, a4->Buffer, 0x30u, &RetunedLength);
          if ( v17 != -2147483643 )
          {
LABEL_13:
            if ( v17 >= 0 )
            {
              v31 = RetunedLength & 0xFFFFFFFE;
              RetunedLength = v31;
              if ( v31 > 2 && !a4->Buffer[((unsigned __int64)v31 >> 1) - 1] )
              {
                v31 -= 2;
                RetunedLength = v31;
              }
              a4->Length = v31;
              RtlAppendUnicodeToString(a4, L" ");
              goto LABEL_15;
            }
LABEL_14:
            if ( (*(_BYTE *)a3 & 8) != 0
              && NtQuerySystemInformation(SystemFlagsInformation, SystemInformation, 4u, 0LL) >= 0
              && (SystemInformation[0] & 0x4000004) != 0 )
            {
              v29 = sub_140013070();
              if ( v29 >= 0 )
              {
                RtlAppendUnicodeStringToString(a4, &Source);
                v30 = SystemInformation[0];
                if ( (SystemInformation[0] & 0x20000) != 0 )
                {
                  RtlAppendUnicodeStringToString(a4, &stru_14001B5D8);
                  v30 = SystemInformation[0];
                }
                if ( (v30 & 0x4000000) != 0 )
                  RtlAppendUnicodeStringToString(a4, &stru_14001B5C8);
              }
            }
LABEL_15:
            v18 = v4;
            v19 = a4;
LABEL_16:
            RtlAppendUnicodeStringToString(v19, v18);
            return 0LL;
          }
          BufferSize = RetunedLength;
          v27 = RetunedLength + v4->MaximumLength + 2LL;
          if ( v27 <= RetunedLength || v27 > 0xFFFE )
            goto LABEL_14;
          RetunedLength += v4->MaximumLength + 2;
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, a4->Buffer);
          v28 = (WCHAR *)RtlAllocateHeap(
                           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                           Flags + 786432,
                           RetunedLength);
          a4->Buffer = v28;
          if ( v28 )
          {
            a4->MaximumLength = RetunedLength;
            v17 = LdrQueryImageFileExecutionOptions(v4, L"Debugger", 1u, v28, BufferSize, &RetunedLength);
            goto LABEL_13;
          }
        }
        return 3221225495LL;
      }
    }
    v14 = *a3;
    if ( (*a3 & 8) != 0 )
    {
      Length = String1.Length;
      if ( (v14 & 4) != 0 )
        goto LABEL_8;
      Length = String1.Length + 50;
      v4 = &String1;
    }
    else
    {
      if ( word_14001FBE0 )
      {
        Length = (unsigned __int16)word_14001FBE0;
        goto LABEL_8;
      }
      Length = 74;
      v4 = (UNICODE_STRING *)&SubKey;
    }
    *a3 = v14 | 1;
LABEL_8:
    *a3 |= 2u;
    v13 = Length + 2;
    RetunedLength = v13;
    goto LABEL_9;
  }
  return result;
}

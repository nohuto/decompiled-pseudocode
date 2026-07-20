/*
 * XREFs of sub_1400089B0 @ 0x1400089B0
 * Callers:
 *     sub_1400084D8 @ 0x1400084D8 (sub_1400084D8.c)
 *     sub_140008550 @ 0x140008550 (sub_140008550.c)
 *     sub_1400085F0 @ 0x1400085F0 (sub_1400085F0.c)
 * Callees:
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 *     memcpy @ 0x14000C480 (memcpy.c)
 */

__int64 __fastcall sub_1400089B0(
        struct _UNICODE_STRING **a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        char a4,
        struct _UNICODE_STRING **a5)
{
  int v5; // r15d
  struct _UNICODE_STRING *v10; // rbx
  struct _UNICODE_STRING *Heap; // rax
  WCHAR *v12; // rax
  struct _UNICODE_STRING *v13; // rax
  PWSTR Buffer; // r8
  void *v16; // r8
  CHAR *v17; // rax
  USHORT v18; // ax
  struct _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v5 = 1;
  if ( (a4 & 1) != 0 )
  {
    v10 = *a1;
    if ( *a1 != (struct _UNICODE_STRING *)a1 )
    {
      while ( RtlCompareUnicodeString(v10 + 1, a2, 1u) )
      {
        v10 = *(struct _UNICODE_STRING **)&v10->Length;
        if ( v10 == (struct _UNICODE_STRING *)a1 )
          goto LABEL_5;
      }
      if ( v10[2].Buffer )
      {
        if ( !a3 )
        {
LABEL_23:
          Buffer = v10[2].Buffer;
          v5 = 0;
          if ( Buffer )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
            v16 = *(void **)&v10[3].Length;
            if ( v16 )
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v16);
          }
          goto LABEL_7;
        }
      }
      else if ( !a3 )
      {
        return 0x40000000LL;
      }
      if ( !RtlCompareUnicodeString(v10 + 2, a3, 1u) )
        return 0x40000000LL;
      goto LABEL_23;
    }
  }
LABEL_5:
  Heap = (struct _UNICODE_STRING *)RtlAllocateHeap(
                                     *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                     Flags,
                                     a2->MaximumLength + 56LL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap->Buffer = &Heap->Length;
  *(_QWORD *)&Heap->Length = Heap;
  Heap[1].Buffer = (PWSTR)&Heap[3].Buffer;
  Heap[1].Length = a2->Length;
  Heap[1].MaximumLength = a2->MaximumLength;
  *(_QWORD *)&Heap[3].Length = 0LL;
  memcpy(&Heap[3].Buffer, a2->Buffer, a2->MaximumLength);
  v10[2].Buffer = 0LL;
LABEL_7:
  if ( !a3 )
  {
    RtlInitUnicodeString(v10 + 2, 0LL);
    goto LABEL_10;
  }
  v12 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags, a3->MaximumLength);
  v10[2].Buffer = v12;
  if ( !v12 )
    goto LABEL_26;
  v10[2].Length = a3->Length;
  v10[2].MaximumLength = a3->MaximumLength;
  memcpy(v12, a3->Buffer, a3->MaximumLength);
  if ( (a4 & 2) != 0 )
  {
    v17 = (CHAR *)RtlAllocateHeap(
                    *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                    Flags,
                    ((unsigned __int64)a3->Length >> 1) + 1);
    *(_QWORD *)&v10[3].Length = v17;
    if ( v17 )
    {
      DestinationString.Buffer = v17;
      v18 = (a3->Length >> 1) + 1;
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v18;
      RtlUnicodeStringToAnsiString(&DestinationString, a3, 0);
      goto LABEL_10;
    }
LABEL_26:
    sub_140008D78(v10);
    return 3221225495LL;
  }
LABEL_10:
  if ( v5 )
  {
    v13 = a1[1];
    *(_QWORD *)&v10->Length = a1;
    v10->Buffer = &v13->Length;
    if ( *(struct _UNICODE_STRING ***)&v13->Length != a1 )
      __fastfail(3u);
    *(_QWORD *)&v13->Length = v10;
    a1[1] = v10;
  }
  if ( a5 )
    *a5 = v10;
  return 0LL;
}

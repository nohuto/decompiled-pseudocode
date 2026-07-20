/*
 * XREFs of CreateRegistryLinksForMachine @ 0x140005C50
 * Callers:
 *     InitializeWow64OnBoot @ 0x14000A7A8 (InitializeWow64OnBoot.c)
 * Callees:
 *     CreateMergeLink @ 0x140005CF0 (CreateMergeLink.c)
 *     PathReplaceGreedy @ 0x140013D18 (PathReplaceGreedy.c)
 *     Wow64SelectWowNodePathInternal @ 0x140013FBC (Wow64SelectWowNodePathInternal.c)
 */

__int64 __fastcall CreateRegistryLinksForMachine(__int16 a1)
{
  unsigned __int16 *v1; // r12
  char v2; // r15
  unsigned int v3; // ebp
  const UNICODE_STRING *v4; // rbx
  struct _UNICODE_STRING *v5; // r14
  struct _UNICODE_STRING *p_DestinationString; // rsi
  int MergeLink; // edi
  __int16 v9; // si
  USHORT v10; // di
  USHORT v11; // si
  WCHAR *Heap; // rax
  WCHAR *v13; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING v15; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0LL;
  if ( a1 == 332 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    v1 = (unsigned __int16 *)Wow64SelectWowNodePathInternal();
  }
  v3 = 0;
  v4 = &RegistrySymbolicLinks;
  while ( 1 )
  {
    v5 = (struct _UNICODE_STRING *)&v4[1];
    p_DestinationString = (struct _UNICODE_STRING *)v4;
    if ( v2 )
      break;
LABEL_5:
    MergeLink = CreateMergeLink(p_DestinationString, v5);
    if ( v2 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, p_DestinationString->Buffer);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5->Buffer);
    }
    if ( MergeLink >= 0 )
    {
      ++v3;
      v4 += 2;
      if ( v3 < 0x49 )
        continue;
    }
    return (unsigned int)MergeLink;
  }
  v9 = 2 * abs32(24 - *v1);
  v10 = v9 + v4->MaximumLength;
  v11 = v4[1].MaximumLength + v9;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
  DestinationString.Length = 0;
  DestinationString.Buffer = Heap;
  DestinationString.MaximumLength = v10;
  v13 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v11);
  v15.Buffer = v13;
  v15.Length = 0;
  v15.MaximumLength = v11;
  if ( !DestinationString.Buffer )
    return 3221225495LL;
  if ( v13 )
  {
    RtlCopyUnicodeString(&DestinationString, v4);
    RtlCopyUnicodeString(&v15, v4 + 1);
    PathReplaceGreedy(&Wowx86NodeString, v1, &DestinationString);
    PathReplaceGreedy(&Wowx86NodeString, v1, &v15);
    p_DestinationString = &DestinationString;
    v5 = &v15;
    goto LABEL_5;
  }
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return 3221225495LL;
}

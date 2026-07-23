/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x14004E530
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400CF2BC (RtlStringCbCatW.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepGetCurrentLogLevel @ 0x1402502F4 (SepGetCurrentLogLevel.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  void *v2; // rcx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  _OBJECT_NAME_INFORMATION *v4; // rdi
  NTSTATUS v5; // eax
  _OBJECT_NAME_INFORMATION *v6; // rax
  unsigned int v7; // ebp
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  __int64 v10; // rcx
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  if ( byte_140356AA4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    v2 = *(void **)(a1 + 32);
    if ( !v2 || ObReferenceObjectByHandle(v2, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0 )
      goto LABEL_16;
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x210uLL, 0x4F526553u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameString(Object, PoolWithTag, 0x210u, &ReturnLength);
      if ( v5 != -1073741820 )
        goto LABEL_8;
      ExFreePoolWithTag(v4, 0);
      v6 = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x4F526553u);
      v4 = v6;
      if ( v6 )
      {
        v5 = ObQueryNameString(Object, v6, ReturnLength, &ReturnLength);
LABEL_8:
        if ( v5 >= 0 )
        {
          if ( v4->Name.Buffer )
          {
            v7 = v4->Name.MaximumLength + *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2;
            v8 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x4F526553u);
            v9 = v8;
            if ( v8 )
            {
              memset(v8, 0, v7);
              RtlStringCbCopyW(v9, v7, v4->Name.Buffer);
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
              {
                RtlStringCbCatW(v9, v7, L"\\");
                RtlStringCbCatW(v9, v7, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
              }
              RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v9);
            }
          }
        }
        ExFreePoolWithTag(v4, 0);
      }
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
LABEL_16:
    *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel(KeGetCurrentThread());
    *(_QWORD *)a1 = *(_QWORD *)(v10 + 1864);
    *(_QWORD *)(v10 + 1864) = a1;
  }
}

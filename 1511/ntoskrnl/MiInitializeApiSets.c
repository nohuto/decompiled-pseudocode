/*
 * XREFs of MiInitializeApiSets @ 0x14074CE5C
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MmMapViewInSystemSpace @ 0x1403B5C20 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x14044E98C (MmCreateSection.c)
 */

int __fastcall MiInitializeApiSets(__int64 a1)
{
  int result; // eax
  PVOID v3; // rdi
  NTSTATUS v4; // ebx
  PVOID v5; // rbx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID Section; // [rsp+68h] [rbp+10h] BYREF
  PVOID MappedBase; // [rsp+70h] [rbp+18h] BYREF

  ViewSize = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2344LL);
  result = MmCreateSection(&Section, 983071LL, 0, (__int64)&ViewSize, 4u, 0x8000000u, 0LL, 0LL);
  if ( result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
      return v4;
    }
    else
    {
      v5 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2336LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2344LL));
      qword_1402FE498 = (__int64)v3;
      qword_1402FE4A0 = (__int64)v5;
      result = 0;
      qword_1402FE4A8 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2344LL);
    }
  }
  return result;
}

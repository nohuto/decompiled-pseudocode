/*
 * XREFs of MiInitializeApiSets @ 0x1407A426C
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MmCreateSection @ 0x14042BAE0 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rdi
  NTSTATUS v4; // ebx
  PVOID v5; // rbx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID Section; // [rsp+68h] [rbp+10h] BYREF
  PVOID MappedBase; // [rsp+70h] [rbp+18h] BYREF

  ViewSize = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2344LL);
  result = MmCreateSection((int)&Section, 983071LL, 0, (int)&ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
      return (unsigned int)v4;
    }
    else
    {
      v5 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2336LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2344LL));
      qword_1403267A0 = (__int64)v3;
      qword_1403267A8 = (__int64)v5;
      result = 0LL;
      qword_1403267B0 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2344LL);
    }
  }
  return result;
}

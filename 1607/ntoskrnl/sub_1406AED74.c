/*
 * XREFs of sub_1406AED74 @ 0x1406AED74
 * Callers:
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall sub_1406AED74(unsigned int a1, _QWORD *a2, _QWORD *a3)
{
  PVOID v3; // rdi
  NTSTATUS v6; // esi
  PVOID v7; // rbx
  PVOID v8; // rax
  LARGE_INTEGER MaximumSize; // [rsp+48h] [rbp-9h] BYREF
  HANDLE SectionHandle; // [rsp+50h] [rbp-1h] BYREF
  PVOID Object; // [rsp+58h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  PVOID MappedBase; // [rsp+D0h] [rbp+7Fh] BYREF

  v3 = 0LL;
  MaximumSize.QuadPart = a1;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  MappedBase = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 544;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v6 >= 0 )
  {
    v6 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
    v7 = Object;
    ZwClose(SectionHandle);
    if ( v6 >= 0 )
    {
      Object = 0LL;
      v6 = MmMapViewInSystemSpace(v7, &MappedBase, (PSIZE_T)&Object);
      if ( v6 < 0 )
      {
        v3 = MappedBase;
      }
      else
      {
        v8 = MappedBase;
        *a2 = v7;
        v7 = 0LL;
        *a3 = v8;
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( v3 )
      MmUnmapViewInSystemSpace(v3);
  }
  return (unsigned int)v6;
}

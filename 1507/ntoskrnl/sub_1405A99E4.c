/*
 * XREFs of sub_1405A99E4 @ 0x1405A99E4
 * Callers:
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14017F930 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x14051B270 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall sub_1405A99E4(unsigned int a1, _QWORD *a2, _QWORD *a3)
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

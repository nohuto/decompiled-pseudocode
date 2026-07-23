/*
 * XREFs of NtQuerySection @ 0x140541E3C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 */

NTSTATUS __stdcall NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  _QWORD *v9; // rcx
  SIZE_T v10; // rbx
  NTSTATUS v11; // edi
  SECTION_INFORMATION_CLASS v12; // edx
  PVOID v13; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, Length, 4u);
    v9 = ResultLength;
    if ( ResultLength )
    {
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v9 = (_QWORD *)MmUserProbeAddress;
      *v9 = *v9;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v10 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation )
        return -1073741821;
      v10 = 8LL;
    }
  }
  else
  {
    v10 = 24LL;
  }
  if ( Length < v10 )
    return -1073741820;
  v11 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = SectionInformationClass;
    v13 = Object;
    v11 = MmGetSectionInformation((__int64)Object, v12);
    if ( v11 >= 0 )
    {
      if ( ResultLength )
        *ResultLength = v10;
    }
    ObfDereferenceObject(v13);
  }
  return v11;
}

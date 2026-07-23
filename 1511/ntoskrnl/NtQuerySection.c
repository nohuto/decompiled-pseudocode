/*
 * XREFs of NtQuerySection @ 0x14044F0C8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 */

NTSTATUS __stdcall NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  _QWORD *v10; // rcx
  SIZE_T v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  PVOID v14; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, Length, 4u);
    v10 = ResultLength;
    if ( ResultLength )
    {
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = *v10;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v11 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation )
        return -1073741821;
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 24LL;
  }
  if ( Length < v11 )
    return -1073741820;
  v12 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = (unsigned int)SectionInformationClass;
    v14 = Object;
    v12 = MmGetSectionInformation(Object, v13, SectionInformation);
    if ( v12 >= 0 )
    {
      if ( ResultLength )
        *ResultLength = v11;
    }
    ObfDereferenceObject(v14);
  }
  return v12;
}

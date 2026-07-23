/*
 * XREFs of NtQueryMutant @ 0x1404BEC28
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x1400A9D04 (KeQueryOwnerMutant.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG Length,
        PULONG ResultLength)
{
  bool v8; // zf
  KPROCESSOR_MODE PreviousMode; // r14
  PULONG v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  int v14; // eax
  char v15; // r8
  bool v16; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  if ( MutantInformationClass )
  {
    if ( MutantInformationClass != MutantOwnerInformation )
      return -1073741821;
    v8 = Length == 16;
  }
  else
  {
    v8 = Length == 8;
  }
  if ( !v8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(MutantInformation, Length, 4u);
    v10 = ResultLength;
    if ( ResultLength )
    {
      v11 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v10 = ResultLength;
  }
  v12 = ObReferenceObjectByHandle(MutantHandle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( MutantInformationClass )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v10 )
          *v10 = 16;
      }
      else
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v10 )
          *v10 = 16;
      }
    }
    else
    {
      v14 = *((_DWORD *)Object + 1);
      v15 = *((_BYTE *)Object + 48);
      v16 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        *(_DWORD *)MutantInformation = v14;
        *((_BYTE *)MutantInformation + 4) = v16;
        *((_BYTE *)MutantInformation + 5) = v15;
        if ( v10 )
          *v10 = 8;
      }
      else
      {
        *(_DWORD *)MutantInformation = v14;
        *((_BYTE *)MutantInformation + 4) = v16;
        *((_BYTE *)MutantInformation + 5) = v15;
        if ( v10 )
          *v10 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return v12;
}

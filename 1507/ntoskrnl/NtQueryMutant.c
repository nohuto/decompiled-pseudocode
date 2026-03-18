/*
 * XREFs of NtQueryMutant @ 0x140408154
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryOwnerMutant @ 0x140005614 (KeQueryOwnerMutant.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
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
  _DWORD *v11; // rcx
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
      v11 = ResultLength;
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = *v11;
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

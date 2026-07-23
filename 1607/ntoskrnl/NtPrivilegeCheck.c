/*
 * XREFs of NtPrivilegeCheck @ 0x14045E7B8
 * Callers:
 *     <none>
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F130 (SepPrivilegeCheck.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14045F228 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  PVOID v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  const void *v11; // rbx
  BOOLEAN v12; // di
  __int64 v13; // rdx
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v16; // [rsp+30h] [rbp-78h]
  NTSTATUS v17; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-54h]
  ULONG Control; // [rsp+58h] [rbp-50h]
  size_t Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  PVOID v21; // [rsp+68h] [rbp-40h] BYREF
  void *Src[7]; // [rsp+70h] [rbp-38h] BYREF

  Src[0] = 0LL;
  Size = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v21, 0LL);
  v7 = v21;
  Src[1] = v21;
  v17 = result;
  if ( result >= 0 )
  {
    if ( *((_DWORD *)v21 + 48) == 2 && *((int *)v21 + 49) < 1 )
    {
      v10 = -1073741659;
LABEL_17:
      ObfDereferenceObject(v7);
      return v10;
    }
    if ( ((unsigned __int8)RequiredPrivileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (__int64)RequiredPrivileges;
    if ( (unsigned __int64)RequiredPrivileges >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 19) = *(_BYTE *)(v8 + 19);
    PrivilegeCount = RequiredPrivileges->PrivilegeCount;
    HIDWORD(Size) = 12 * (RequiredPrivileges->PrivilegeCount - 1) + 20;
    ProbeForWrite(RequiredPrivileges, HIDWORD(Size), 4u);
    v9 = (__int64)Result;
    if ( (unsigned __int64)Result >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    Control = RequiredPrivileges->Control;
    v10 = v17;
    if ( v17 < 0
      || (v10 = SeCaptureLuidAndAttributesArray(
                  RequiredPrivileges->Privilege,
                  Object,
                  HandleInformation,
                  v16,
                  (__int64)Src,
                  (__int64)&Size),
          v10 < 0) )
    {
      v7 = v21;
      goto LABEL_17;
    }
    v11 = Src[0];
    v12 = SepPrivilegeCheck((__int64)v21, (__int64)Src[0], PrivilegeCount, Control, PreviousMode);
    ObfDereferenceObject(v21);
    memmove(RequiredPrivileges->Privilege, v11, (unsigned int)Size);
    *Result = v12;
    LOBYTE(v13) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v11, v13);
    return 0;
  }
  return result;
}

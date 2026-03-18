/*
 * XREFs of NtPrivilegeCheck @ 0x1403C312C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1403C3368 (SeCaptureLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  PVOID v7; // rcx
  _BYTE *v8; // rcx
  ULONG v9; // r14d
  _BYTE *v10; // rcx
  NTSTATUS v11; // ebx
  const void *v12; // rbx
  BOOLEAN v13; // di
  __int64 v14; // rdx
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v17; // [rsp+30h] [rbp-78h]
  NTSTATUS v18; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-54h]
  ULONG Control; // [rsp+58h] [rbp-50h]
  size_t Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  PVOID v22; // [rsp+68h] [rbp-40h] BYREF
  void *Src[7]; // [rsp+70h] [rbp-38h] BYREF

  Src[0] = 0LL;
  Size = 0LL;
  LOBYTE(Control) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v22, 0LL);
  v7 = v22;
  Src[1] = v22;
  v18 = result;
  if ( result >= 0 )
  {
    if ( *((_DWORD *)v22 + 48) == 2 && *((int *)v22 + 49) < 1 )
    {
      v11 = -1073741659;
    }
    else
    {
      if ( ((unsigned __int8)RequiredPrivileges & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = RequiredPrivileges;
      if ( (unsigned __int64)RequiredPrivileges >= MmUserProbeAddress )
        v8 = (_BYTE *)MmUserProbeAddress;
      *v8 = *v8;
      v8[19] = v8[19];
      PrivilegeCount = RequiredPrivileges->PrivilegeCount;
      v9 = RequiredPrivileges->PrivilegeCount;
      if ( RequiredPrivileges->PrivilegeCount >= -(__int64)MmSystemRangeStart / 0xCuLL )
      {
        v11 = -1073741811;
      }
      else
      {
        HIDWORD(Size) = 12 * (PrivilegeCount - 1) + 20;
        ProbeForWrite(RequiredPrivileges, HIDWORD(Size), 4u);
        v10 = Result;
        if ( (unsigned __int64)Result >= MmUserProbeAddress )
          v10 = (_BYTE *)MmUserProbeAddress;
        *v10 = *v10;
        Control = RequiredPrivileges->Control;
        v9 = PrivilegeCount;
        v11 = v18;
      }
      if ( v11 >= 0 )
      {
        v11 = SeCaptureLuidAndAttributesArray(
                RequiredPrivileges->Privilege,
                Object,
                HandleInformation,
                v17,
                (__int64)Src,
                (__int64)&Size);
        if ( v11 >= 0 )
        {
          v12 = Src[0];
          v13 = SepPrivilegeCheck((__int64)v22, (__int64)Src[0], v9, Control, PreviousMode);
          ObfDereferenceObject(v22);
          memmove(RequiredPrivileges->Privilege, v12, (unsigned int)Size);
          *Result = v13;
          LOBYTE(v14) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v12, v14);
          return 0;
        }
      }
      v7 = v22;
    }
    ObfDereferenceObject(v7);
    return v11;
  }
  return result;
}

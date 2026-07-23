/*
 * XREFs of NtSetInformationSymbolicLink @ 0x140665F44
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v8; // ebx
  _DWORD *v9; // rsi
  __int32 v10; // r14d
  int v11; // eax
  int v12; // ecx
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObReferenceObjectByHandle(LinkHandle, 2u, ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  v9 = Object[0];
  Object[1] = Object[0];
  if ( v8 >= 0 )
  {
    v10 = SymbolicLinkInformationClass - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        v8 = -1073741821;
LABEL_30:
        ObfDereferenceObject(v9);
        return v8;
      }
      if ( SymbolicLinkInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
              || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            v11 = *(_DWORD *)SymbolicLinkInformation;
          }
          else
          {
            v11 = *(_DWORD *)SymbolicLinkInformation;
          }
          v9[7] |= 8u;
          v9[8] = v11;
          v8 = 0;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    else if ( SymbolicLinkInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)SymbolicLinkInformation + 4 > 0x7FFFFFFF0000LL
            || (char *)SymbolicLinkInformation + 4 < SymbolicLinkInformation )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        else
        {
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        v9[7] |= 1u;
        if ( v12 )
          v9[7] |= 4u;
        goto LABEL_30;
      }
LABEL_29:
      v8 = -1073741727;
      goto LABEL_30;
    }
    v8 = -1073741820;
    goto LABEL_30;
  }
  return v8;
}

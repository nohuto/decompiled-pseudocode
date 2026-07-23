/*
 * XREFs of VrpPreLoadKey @ 0x140615DBC
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwLoadKey3 @ 0x14015DA30 (ZwLoadKey3.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140614980 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x140617D80 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x140617E24 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpPreLoadKey(__int64 a1, GUID *a2)
{
  const UNICODE_STRING *v4; // rcx
  char v5; // r12
  int v6; // r13d
  __int64 v7; // rsi
  int NamespaceNodePlaceholderKey; // ebx
  PVOID *v9; // rcx
  const UNICODE_STRING *v10; // r14
  int v11; // r9d
  wchar_t *Buffer; // rcx
  int v13; // eax
  bool v14; // zf
  void *v15; // rcx
  void *v16; // rcx
  PVOID *v17; // rcx
  UNICODE_STRING *p_Destination; // rdx
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v28; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+B0h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+E0h] [rbp-20h] BYREF
  _CM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+110h] [rbp+10h] BYREF
  char v32; // [rsp+120h] [rbp+20h]
  HANDLE v33; // [rsp+128h] [rbp+28h]
  GUID ActivityId; // [rsp+130h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v36; // [rsp+160h] [rbp+60h]
  __int64 v37; // [rsp+168h] [rbp+68h]
  PVOID v38; // [rsp+170h] [rbp+70h]
  int v39; // [rsp+178h] [rbp+78h] BYREF
  int v40; // [rsp+17Ch] [rbp+7Ch]
  _DWORD *v41; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  wchar_t *v43; // [rsp+190h] [rbp+90h]
  _DWORD v44[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v45; // [rsp+1A0h] [rbp+A0h]
  __int64 v46; // [rsp+1A8h] [rbp+A8h]
  char v47; // [rsp+1B0h] [rbp+B0h] BYREF

  *(PVOID *)((char *)P + 2) = 0LL;
  *(_DWORD *)((char *)&P[1] + 2) = 0;
  LOWORD(P[0]) = 0;
  HIWORD(P[1]) = 0;
  SourceFile.Length = 0;
  memset(&SourceFile.RootDirectory, 0, 0x28uLL);
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  TargetKey.Length = 0;
  memset(&TargetKey.RootDirectory, 0, 0x28uLL);
  Source.Length = 0;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  *(_QWORD *)&String1.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String1.Buffer + 2) = 0;
  HIWORD(String1.Buffer) = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  String1.Length = 0;
  ActivityId.Data1 = 0;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(const UNICODE_STRING **)(a1 + 72);
  GuidString.Buffer = (wchar_t *)&v47;
  v5 = 0;
  *(_DWORD *)&GuidString.Length = 5111808;
  v6 = 0;
  v26 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  if ( v4 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v4 + 1, *(PCUNICODE_STRING *)(a1 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_39;
    v5 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(a1 + 8);
  }
  if ( stru_1402F3520.LevelPlus1 > 5 )
  {
    v9 = P;
    v37 = 2LL;
    if ( !P[1] )
      v9 = (PVOID *)&EmptyUnicodeString;
    v40 = 0;
    v36 = (__int64 *)&v39;
    v38 = v9[1];
    v39 = *(unsigned __int16 *)v9;
    TlgWrite(&stru_1402F3520, &unk_14027B76D, &ActivityId, 0LL, 4u, &pData);
  }
  VrpGetNextToken(P, &v21, &String1);
  if ( !RtlEqualUnicodeString(&String1, &gRegistryString, 1u) )
  {
LABEL_10:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_46;
  }
  VrpGetNextToken(P, &v21, &String1);
  if ( RtlEqualUnicodeString(&String1, &gAppString, 1u) == 1 || (*(_DWORD *)(a1 + 24) & 0x10) != 0 )
  {
    NamespaceNodePlaceholderKey = 0;
    goto LABEL_48;
  }
  v10 = &gMachineString;
  if ( RtlEqualUnicodeString(&String1, &gMachineString, 1u) != 1 )
  {
    v10 = &gUserString;
    if ( RtlEqualUnicodeString(&String1, &gUserString, 1u) != 1 )
    {
      NamespaceNodePlaceholderKey = -1073741790;
      goto LABEL_39;
    }
  }
  Source.Buffer = (wchar_t *)((char *)P[1] + 2 * v21);
  Source.Length = LOWORD(P[0]) - 2 * v21;
  Source.MaximumLength = Source.Length;
  VrpStripTrailingCharacters(&Source);
  v11 = 0;
  if ( Source.Length )
  {
    Buffer = Source.Buffer;
    while ( *Buffer != 92 )
    {
      ++v11;
      ++Buffer;
      if ( 2LL * v11 >= (unsigned __int64)Source.Length )
        goto LABEL_20;
    }
    goto LABEL_10;
  }
LABEL_20:
  NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(a2, &GuidString, 0);
  if ( NamespaceNodePlaceholderKey < 0 )
  {
LABEL_39:
    if ( NamespaceNodePlaceholderKey != -1073740541 && v7 )
      VrpDestroyNamespaceNode((ULONGLONG *)&a2->Data1, v7);
    if ( !v6 )
    {
LABEL_44:
      if ( (int)(NamespaceNodePlaceholderKey + 0x80000000) < 0 || NamespaceNodePlaceholderKey == -1073740541 )
        goto LABEL_48;
      goto LABEL_46;
    }
LABEL_43:
    VrpUnlockJobContextExclusive((__int64)a2);
    goto LABEL_44;
  }
  GuidString.MaximumLength -= 4;
  ++GuidString.Buffer;
  GuidString.Length -= 4;
  Destination.Length = 0;
  Destination.MaximumLength = v10->Length + Source.Length + GuidString.Length + 40;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &gRootHivePath);
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeToString(&Destination, L"Silo");
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, v10);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    VrpLockJobContextExclusive((__int64)a2);
    v6 = 1;
    v13 = VrpCreateNamespaceNode((__int64)a2, (const void **)P, (const void **)&Destination, 1, &v26);
    v7 = v26;
    NamespaceNodePlaceholderKey = v13;
    if ( v13 >= 0 )
    {
      NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((ULONGLONG *)&a2->Data1, v26);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v7);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          v14 = *(_QWORD *)(a1 + 80) == 2LL;
          SourceFile.ObjectName = *(PUNICODE_STRING *)(a1 + 16);
          SourceFile.Length = 48;
          TargetKey.ObjectName = &Destination;
          SourceFile.RootDirectory = 0LL;
          SourceFile.Attributes = 576;
          *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
          TargetKey.Length = 48;
          TargetKey.RootDirectory = 0LL;
          TargetKey.Attributes = 576;
          *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
          if ( !v14
            || (v15 = *(void **)(a1 + 88)) == 0LL
            || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                v15,
                                                0x200u,
                                                0LL,
                                                0,
                                                (POBJECT_TYPE)SeTokenObjectType,
                                                0,
                                                &Handle),
                NamespaceNodePlaceholderKey >= 0) )
          {
            v16 = *(void **)(a1 + 32);
            *(_BYTE *)&ExtendedParameters.0 = 3;
            ExtendedParameters.ULong64 = (ULONG64)Handle;
            if ( !v16
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v16,
                                                  0x200u,
                                                  0LL,
                                                  0,
                                                  (POBJECT_TYPE)CmKeyObjectType,
                                                  0,
                                                  &v28),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v32 = 1;
              v33 = v28;
              NamespaceNodePlaceholderKey = ZwLoadKey3(&TargetKey, &SourceFile, 0, &ExtendedParameters, 2u, 0, 0LL, 0LL);
              if ( NamespaceNodePlaceholderKey >= 0 )
              {
                NamespaceNodePlaceholderKey = -1073740541;
                if ( stru_1402F3520.LevelPlus1 > 5 )
                {
                  v17 = P;
                  LODWORD(v21) = -1073740541;
                  if ( !P[1] )
                    v17 = (PVOID *)&EmptyUnicodeString;
                  v37 = 2LL;
                  p_Destination = &Destination;
                  v40 = 0;
                  if ( !Destination.Buffer )
                    p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                  v42 = 2LL;
                  v44[1] = 0;
                  v36 = (__int64 *)&v39;
                  v38 = v17[1];
                  v39 = *(unsigned __int16 *)v17;
                  v41 = v44;
                  v43 = p_Destination->Buffer;
                  v44[0] = p_Destination->Length;
                  v45 = &v21;
                  v46 = 4LL;
                  TlgWrite(&stru_1402F3520, &unk_14027B6A9, &ActivityId, 0LL, 7u, &pData);
                }
                goto LABEL_43;
              }
            }
          }
        }
      }
    }
    goto LABEL_39;
  }
  NamespaceNodePlaceholderKey = -1073741670;
LABEL_46:
  if ( stru_1402F3520.LevelPlus1 > 2 )
  {
    LODWORD(v21) = NamespaceNodePlaceholderKey;
    v36 = &v21;
    v37 = 4LL;
    TlgWrite(&stru_1402F3520, &unk_14027B968, &ActivityId, 0LL, 3u, &pData);
  }
LABEL_48:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v28 )
    ObCloseHandle(v28, 0);
  if ( v5 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}

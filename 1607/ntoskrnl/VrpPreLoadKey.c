/*
 * XREFs of VrpPreLoadKey @ 0x140615D08
 * Callers:
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x140464700 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     RtlAppendUnicodeStringToString @ 0x140087614 (RtlAppendUnicodeStringToString.c)
 *     EtwActivityIdControl @ 0x1400A0BF4 (EtwActivityIdControl.c)
 *     RtlAppendUnicodeToString @ 0x1400C3920 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwLoadKey3 @ 0x14015D4C0 (ZwLoadKey3.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     VrpLockJobContextExclusive @ 0x140612F24 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613060 (VrpUnlockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x140614330 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140614648 (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1406148CC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x140617AE4 (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x140617CCC (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x140617D70 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpPreLoadKey(__int64 a1, unsigned int *a2)
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
  UNICODE_STRING v23; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v28; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v29[3]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v30[3]; // [rsp+E0h] [rbp-20h] BYREF
  char v31; // [rsp+110h] [rbp+10h]
  HANDLE v32; // [rsp+118h] [rbp+18h]
  char v33; // [rsp+120h] [rbp+20h]
  HANDLE v34; // [rsp+128h] [rbp+28h]
  GUID ActivityId; // [rsp+130h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  PVOID v39; // [rsp+170h] [rbp+70h]
  int v40; // [rsp+178h] [rbp+78h] BYREF
  int v41; // [rsp+17Ch] [rbp+7Ch]
  _DWORD *v42; // [rsp+180h] [rbp+80h]
  __int64 v43; // [rsp+188h] [rbp+88h]
  wchar_t *v44; // [rsp+190h] [rbp+90h]
  _DWORD v45[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  char v48; // [rsp+1B0h] [rbp+B0h] BYREF

  *(PVOID *)((char *)P + 2) = 0LL;
  *(_DWORD *)((char *)&P[1] + 2) = 0;
  LOWORD(P[0]) = 0;
  HIWORD(P[1]) = 0;
  LODWORD(v29[0]) = 0;
  memset((char *)v29 + 8, 0, 0x28uLL);
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  LODWORD(v30[0]) = 0;
  memset((char *)v30 + 8, 0, 0x28uLL);
  v23.Length = 0;
  *(_QWORD *)&v23.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v23.Buffer + 2) = 0;
  HIWORD(v23.Buffer) = 0;
  *(_QWORD *)&String1.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String1.Buffer + 2) = 0;
  HIWORD(String1.Buffer) = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  String1.Length = 0;
  ActivityId.Data1 = 0;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(const UNICODE_STRING **)(a1 + 72);
  Source.Buffer = (wchar_t *)&v48;
  v5 = 0;
  *(_DWORD *)&Source.Length = 5111808;
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
    v38 = 2LL;
    if ( !P[1] )
      v9 = (PVOID *)&EmptyUnicodeString;
    v41 = 0;
    v37 = (__int64 *)&v40;
    v39 = v9[1];
    v40 = *(unsigned __int16 *)v9;
    TlgWrite(&stru_1402F3520, &unk_14027B66D, &ActivityId, 0LL, 4u, &pData);
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
  v23.Buffer = (wchar_t *)((char *)P[1] + 2 * v21);
  v23.Length = LOWORD(P[0]) - 2 * v21;
  v23.MaximumLength = v23.Length;
  VrpStripTrailingCharacters(&v23);
  v11 = 0;
  if ( v23.Length )
  {
    Buffer = v23.Buffer;
    while ( *Buffer != 92 )
    {
      ++v11;
      ++Buffer;
      if ( 2LL * v11 >= (unsigned __int64)v23.Length )
        goto LABEL_20;
    }
    goto LABEL_10;
  }
LABEL_20:
  NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(a2, (__int64)&Source, 0);
  if ( NamespaceNodePlaceholderKey < 0 )
  {
LABEL_39:
    if ( NamespaceNodePlaceholderKey != -1073740541 && v7 )
      VrpDestroyNamespaceNode((ULONGLONG *)a2, v7);
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
  Source.MaximumLength -= 4;
  ++Source.Buffer;
  Source.Length -= 4;
  Destination.Length = 0;
  Destination.MaximumLength = v10->Length + v23.Length + Source.Length + 40;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &gRootHivePath);
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeToString(&Destination, L"Silo");
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, v10);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &v23);
    VrpLockJobContextExclusive((__int64)a2);
    v6 = 1;
    v13 = VrpCreateNamespaceNode((__int64)a2, (const void **)P, (const void **)&Destination, 1, &v26);
    v7 = v26;
    NamespaceNodePlaceholderKey = v13;
    if ( v13 >= 0 )
    {
      NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList((ULONGLONG *)a2, v26);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v7);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          v14 = *(_QWORD *)(a1 + 80) == 2LL;
          *(_QWORD *)&v29[1] = *(_QWORD *)(a1 + 16);
          LODWORD(v29[0]) = 48;
          *(_QWORD *)&v30[1] = &Destination;
          *((_QWORD *)&v29[0] + 1) = 0LL;
          DWORD2(v29[1]) = 576;
          v29[2] = 0LL;
          LODWORD(v30[0]) = 48;
          *((_QWORD *)&v30[0] + 1) = 0LL;
          DWORD2(v30[1]) = 576;
          v30[2] = 0LL;
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
            v31 = 3;
            v32 = Handle;
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
              v33 = 1;
              v34 = v28;
              NamespaceNodePlaceholderKey = ZwLoadKey3((__int64)v30, (__int64)v29, 0LL);
              if ( NamespaceNodePlaceholderKey >= 0 )
              {
                NamespaceNodePlaceholderKey = -1073740541;
                if ( stru_1402F3520.LevelPlus1 > 5 )
                {
                  v17 = P;
                  LODWORD(v21) = -1073740541;
                  if ( !P[1] )
                    v17 = (PVOID *)&EmptyUnicodeString;
                  v38 = 2LL;
                  p_Destination = &Destination;
                  v41 = 0;
                  if ( !Destination.Buffer )
                    p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                  v43 = 2LL;
                  v45[1] = 0;
                  v37 = (__int64 *)&v40;
                  v39 = v17[1];
                  v40 = *(unsigned __int16 *)v17;
                  v42 = v45;
                  v44 = p_Destination->Buffer;
                  v45[0] = p_Destination->Length;
                  v46 = &v21;
                  v47 = 4LL;
                  TlgWrite(&stru_1402F3520, &unk_14027B5A9, &ActivityId, 0LL, 7u, &pData);
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
    v37 = &v21;
    v38 = 4LL;
    TlgWrite(&stru_1402F3520, &unk_14027B868, &ActivityId, 0LL, 3u, &pData);
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

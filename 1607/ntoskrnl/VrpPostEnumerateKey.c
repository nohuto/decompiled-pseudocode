/*
 * XREFs of VrpPostEnumerateKey @ 0x140614E44
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ExGetPreviousMode @ 0x140092240 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     VrpCleanupBufferParameter @ 0x140612F4C (VrpCleanupBufferParameter.c)
 *     VrpLockJobContextShared @ 0x140613034 (VrpLockJobContextShared.c)
 *     VrpOutputBufferParameter @ 0x140613098 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1406130C4 (VrpProcessBufferParameter.c)
 *     VrpUnlockJobContextShared @ 0x140613150 (VrpUnlockJobContextShared.c)
 *     VrpFindExactNamespaceNode @ 0x140614D50 (VrpFindExactNamespaceNode.c)
 *     VrpUpdateKeyInformation @ 0x140616C78 (VrpUpdateKeyInformation.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, void *a2)
{
  const UNICODE_STRING *v3; // r14
  PVOID *v4; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  int v6; // edi
  const UNICODE_STRING *v7; // rax
  int Length; // ecx
  wchar_t *Buffer; // rax
  unsigned __int16 *v10; // r14
  int v11; // eax
  bool v12; // cc
  int v13; // eax
  unsigned __int16 *PoolWithTag; // rax
  int v15; // eax
  wchar_t *v16; // rax
  UNICODE_STRING *ExactNamespaceNode; // rax
  unsigned int v18; // eax
  PVOID v19; // rax
  void *v20; // r14
  NTSTATUS Key; // eax
  __int64 v22; // rcx
  int updated; // eax
  int v24; // eax
  const UNICODE_STRING *v25; // r15
  const UNICODE_STRING *v26; // rcx
  UNICODE_STRING *p_Destination; // rdx
  PVOID KeyInformation; // [rsp+48h] [rbp-190h]
  int v30; // [rsp+50h] [rbp-188h] BYREF
  const UNICODE_STRING *v31; // [rsp+58h] [rbp-180h]
  __int64 v32; // [rsp+60h] [rbp-178h]
  ULONG ResultLength; // [rsp+68h] [rbp-170h] BYREF
  int v34; // [rsp+6Ch] [rbp-16Ch] BYREF
  PULONG v35; // [rsp+70h] [rbp-168h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-160h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-150h] BYREF
  UNICODE_STRING Destination; // [rsp+90h] [rbp-148h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-138h]
  HANDLE v40; // [rsp+A8h] [rbp-130h] BYREF
  PVOID P; // [rsp+B0h] [rbp-128h]
  PVOID v42[4]; // [rsp+B8h] [rbp-120h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-100h] BYREF
  GUID ActivityId; // [rsp+108h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp-B8h] BYREF
  int *v46; // [rsp+140h] [rbp-98h]
  __int64 v47; // [rsp+148h] [rbp-90h]
  int *v48; // [rsp+150h] [rbp-88h]
  __int64 v49; // [rsp+158h] [rbp-80h]
  wchar_t *v50; // [rsp+160h] [rbp-78h]
  int v51; // [rsp+168h] [rbp-70h] BYREF
  int v52; // [rsp+16Ch] [rbp-6Ch]
  _DWORD *v53; // [rsp+170h] [rbp-68h]
  __int64 v54; // [rsp+178h] [rbp-60h]
  wchar_t *v55; // [rsp+180h] [rbp-58h]
  _DWORD v56[2]; // [rsp+188h] [rbp-50h] BYREF
  int *v57; // [rsp+190h] [rbp-48h]
  __int64 v58; // [rsp+198h] [rbp-40h]

  v32 = (__int64)a2;
  v39 = a1;
  v42[3] = a2;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Source.Length = 0;
  *(_QWORD *)&Source.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Source.Buffer + 2) = 0;
  HIWORD(Source.Buffer) = 0;
  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  EtwActivityIdControl(3u, &ActivityId);
  P = 0LL;
  v30 = 0;
  v3 = *(const UNICODE_STRING **)(a1 + 40);
  v31 = v3;
  v42[1] = (PVOID)v3;
  KeyHandle = 0LL;
  v4 = *(PVOID **)(a1 + 16);
  v42[2] = v4;
  v42[0] = 0LL;
  KeyInformation = 0LL;
  PreviousMode = ExGetPreviousMode();
  ResultLength = 0;
  v35 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v40 = 0LL;
  if ( stru_1402F3520.LevelPlus1 > 5 )
  {
    v34 = *((_DWORD *)v4 + 3);
    v7 = v3 + 1;
    if ( !v3[1].Buffer )
      v7 = (const UNICODE_STRING *)&EmptyUnicodeString;
    v46 = &v34;
    v47 = 4LL;
    Length = v7->Length;
    Buffer = v7->Buffer;
    v48 = &v51;
    v49 = 2LL;
    v50 = Buffer;
    v51 = Length;
    v52 = 0;
    TlgWrite(&stru_1402F3520, &unk_14027B796, &ActivityId, 0LL, 5u, &pData);
  }
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
    goto LABEL_59;
  v6 = VrpProcessBufferParameter(PreviousMode, (__int64)v4[2], *((_DWORD *)v4 + 6), v42);
  if ( v6 < 0 )
    goto LABEL_59;
  v10 = (unsigned __int16 *)v42[0];
  v6 = VrpOutputBufferParameter(PreviousMode, v42[0], *((_DWORD *)v4 + 6), (const void **)v4 + 2);
  if ( v6 < 0 )
    goto LABEL_59;
  v6 = VrpProcessBufferParameter(PreviousMode, (__int64)v4[4], 4u, &v35);
  if ( v6 < 0 )
    goto LABEL_59;
  v6 = VrpOutputBufferParameter(PreviousMode, v35, 4u, (const void **)v4 + 4);
  if ( v6 < 0 )
    goto LABEL_59;
  if ( PreviousMode == 1 && *(int *)(v39 + 8) >= 0 )
  {
    v11 = *((_DWORD *)v4 + 3);
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_19;
      v12 = *((_DWORD *)v10 + 5) <= (unsigned int)(*((_DWORD *)v4 + 6) - 24);
    }
    else
    {
      v12 = *((_DWORD *)v10 + 3) <= (unsigned int)(*((_DWORD *)v4 + 6) - 16);
    }
    if ( !v12 )
    {
LABEL_59:
      v20 = 0LL;
      goto LABEL_60;
    }
  }
LABEL_19:
  v13 = *(_DWORD *)(v39 + 8);
  if ( v13 == -1073741789 || v13 == -2147483643 || *((_DWORD *)v4 + 3) == 2 )
  {
    v6 = ObOpenObjectByPointer(*v4, 0x240u, 0LL, 0xF003Fu, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &KeyHandle);
    if ( v6 < 0 )
      goto LABEL_59;
    v6 = ZwEnumerateKey(KeyHandle, *((_DWORD *)v4 + 2), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
      goto LABEL_59;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x67655256u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_59;
    }
    memset(PoolWithTag, 0, ResultLength);
    P = v10;
    v6 = ZwEnumerateKey(KeyHandle, *((_DWORD *)v4 + 2), KeyBasicInformation, v10, ResultLength, &ResultLength);
    if ( v6 < 0 )
      goto LABEL_48;
  }
  v15 = *((_DWORD *)v4 + 3);
  if ( !v15 || P )
  {
    Source.MaximumLength = v10[6];
    Source.Length = Source.MaximumLength;
    v16 = v10 + 8;
  }
  else
  {
    if ( v15 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_59;
    }
    Source.MaximumLength = v10[10];
    Source.Length = Source.MaximumLength;
    v16 = v10 + 12;
  }
  Source.Buffer = v16;
  v6 = VrpBuildKeyPath(v31 + 1, &Source, &Destination);
  if ( v6 < 0 )
    goto LABEL_48;
  VrpLockJobContextShared(v32);
  v30 = 1;
  ExactNamespaceNode = (UNICODE_STRING *)VrpFindExactNamespaceNode(v32, (int)&Destination, 0);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = ExactNamespaceNode + 1,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v40, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v6 = 0;
    goto LABEL_59;
  }
  VrpUnlockJobContextShared(v32);
  v30 = 0;
  v18 = *((_DWORD *)v4 + 6);
  if ( v18 )
  {
    v19 = ExAllocatePoolWithTag(PagedPool, v18, 0x67655256u);
    v20 = v19;
    KeyInformation = v19;
    if ( !v19 )
    {
      v6 = -1073741670;
LABEL_60:
      v25 = v31;
      goto LABEL_61;
    }
    memset(v19, 0, *((unsigned int *)v4 + 6));
  }
  else
  {
    v20 = 0LL;
  }
  Key = ZwQueryKey(v40, *((KEY_INFORMATION_CLASS *)v4 + 3), KeyInformation, *((_DWORD *)v4 + 6), v35);
  v6 = Key;
  if ( Key == -1073741789 )
  {
    v20 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v6 = 0;
LABEL_48:
    v20 = KeyInformation;
    goto LABEL_60;
  }
  v22 = *((unsigned int *)v4 + 3);
  if ( (_DWORD)v22 != 2 )
  {
    updated = VrpUpdateKeyInformation(v22, v20, *((unsigned int *)v4 + 6), v35, &Destination, 0);
    v6 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_48;
  }
  if ( v6 != -2147483643 && v6 != -1073741789 )
    memmove(v4[2], v20, *((unsigned int *)v4 + 6));
  v24 = VrpOutputBufferParameter(PreviousMode, v4[4], 4u, (const void **)&v35);
  v20 = KeyInformation;
  v25 = v31;
  if ( v24 >= 0 )
  {
    *(_DWORD *)(v39 + 24) = v6;
    v6 = -1073740541;
  }
  else
  {
    v6 = v24;
  }
LABEL_61:
  if ( v30 )
    VrpUnlockJobContextShared(v32);
  if ( v6 < 0 && stru_1402F3520.LevelPlus1 > 2 )
  {
    v34 = *((_DWORD *)v4 + 3);
    v26 = v25 + 1;
    if ( !v25[1].Buffer )
      v26 = (const UNICODE_STRING *)&EmptyUnicodeString;
    p_Destination = &Destination;
    if ( !Destination.Buffer )
      p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
    v30 = v6;
    v46 = &v34;
    v47 = 4LL;
    v48 = &v51;
    v49 = 2LL;
    v50 = v26->Buffer;
    v51 = v26->Length;
    v52 = 0;
    v53 = v56;
    v54 = 2LL;
    v55 = p_Destination->Buffer;
    v56[0] = p_Destination->Length;
    v56[1] = 0;
    v57 = &v30;
    v58 = 4LL;
    TlgWrite(&stru_1402F3520, &unk_14027B8E8, &ActivityId, 0LL, 8u, &pData);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v40 )
    ZwClose(v40);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x67655256u);
  if ( P )
    ExFreePoolWithTag(P, 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  VrpCleanupBufferParameter(PreviousMode, v42);
  VrpCleanupBufferParameter(PreviousMode, (PVOID *)&v35);
  return (unsigned int)v6;
}

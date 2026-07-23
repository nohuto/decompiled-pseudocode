/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x140404DA0
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009844 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     ObpDereferenceNamedObject @ 0x14000BBF4 (ObpDereferenceNamedObject.c)
 *     ObpReferenceNamedObject @ 0x14000BC40 (ObpReferenceNamedObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObpGrantAccess @ 0x140404638 (ObpGrantAccess.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     ObpAssignSecurity @ 0x14041E8D0 (ObpAssignSecurity.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ObpDeleteDirectoryEntry @ 0x1404B3390 (ObpDeleteDirectoryEntry.c)
 *     RtlGetControlSecurityDescriptor @ 0x1404CCE04 (RtlGetControlSecurityDescriptor.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR a1,
        char *a2,
        ACCESS_MASK *a3,
        __int64 a4,
        unsigned __int8 a5,
        _DWORD *a6,
        char **a7)
{
  char v10; // al
  char *v11; // rsi
  char v12; // di
  __int64 CurrentSilo; // rax
  int v14; // edx
  int v15; // edi
  char *v16; // rdi
  char *v17; // rsi
  int v18; // ebx
  __int64 v20; // rcx
  int ObjectSecurity; // r12d
  __int64 v22; // rax
  _OWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  NTSTATUS DaclSecurityDescriptor; // esi
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  PVOID v35; // rcx
  int v36; // [rsp+28h] [rbp-D8h]
  BOOLEAN v37[4]; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[2]; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+84h] [rbp-7Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+90h] [rbp-70h]
  ULONG Revision[2]; // [rsp+98h] [rbp-68h] BYREF
  PACL Dacl; // [rsp+A0h] [rbp-60h] BYREF
  char **v46; // [rsp+A8h] [rbp-58h]
  _BYTE v47[48]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v48[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+120h] [rbp+20h]
  __int128 v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int128 v52; // [rsp+150h] [rbp+50h]
  __int128 v53; // [rsp+160h] [rbp+60h]
  __int128 v54; // [rsp+170h] [rbp+70h]

  BugCheckParameter1 = a1;
  v46 = a7;
  *a7 = 0LL;
  v10 = *(a2 - 22);
  *(_QWORD *)Revision = a3;
  Object = 0LL;
  Dacl = 0LL;
  if ( (v10 & 2) != 0 )
    v11 = &a2[-ObpInfoMaskToOffset[v10 & 3] - 48];
  else
    v11 = 0LL;
  v12 = (*(a2 - 21) & 2) == 0;
  CurrentSilo = PsGetCurrentSilo(0LL, 0x140000000uLL);
  v15 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          v12,
          0LL,
          *((_QWORD *)a6 + 5),
          a2,
          CurrentSilo,
          a4,
          (__int64)v47,
          0LL,
          (__int64)&Object);
  if ( v15 < 0 )
  {
    ObpDecrementHandleCount(BugCheckParameter1);
    return (unsigned int)v15;
  }
  v16 = (char *)Object;
  if ( Object == a2 )
  {
    v20 = *(_QWORD *)v11;
    Object = 0LL;
    v37[0] = 0;
    v41 = 0;
    if ( v20 )
    {
      if ( (*(_DWORD *)(v20 + 344) & 8) != 0 || ObpObjectSecurityInheritance )
        v41 = 3;
      ObjectSecurity = ObpGetObjectSecurity(v20, &Object, v37, a5);
      if ( ObjectSecurity < 0 )
        goto LABEL_53;
    }
    v22 = *(_QWORD *)v11;
    LOBYTE(v14) = 0;
    v43 = v14;
    v23 = (_OWORD *)a4;
    if ( !v22 || (*(_DWORD *)(v22 + 344) & 8) == 0 && !ObpObjectSecurityInheritance || !*(_QWORD *)(a4 + 64) )
    {
LABEL_19:
      if ( !*((_QWORD *)v23 + 8) && v41 )
        LOBYTE(v14) = 1;
      LOBYTE(v36) = v14;
      v24 = ObpAssignSecurity(
              v23,
              Object,
              a2,
              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *(a2 - 24) ^ ((unsigned __int16)((_WORD)a2 - 48) >> 8))],
              v41,
              v36);
      ObjectSecurity = v24;
      if ( Object )
      {
        ObReleaseObjectSecurity(Object, v37[0]);
      }
      else
      {
        if ( v24 < 0 )
          goto LABEL_53;
        LOBYTE(v25) = 1;
        SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), *((unsigned __int8 *)a6 + 16), v25);
        *((_QWORD *)a6 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
      }
      if ( ObjectSecurity >= 0 )
      {
        ObpReleaseLookupContext((__int64)v47);
        goto LABEL_24;
      }
LABEL_53:
      ObpDeleteDirectoryEntry(v47);
      ObpReleaseLookupContext((__int64)v47);
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)ObjectSecurity;
    }
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                               *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                               DaclPresent,
                               &Dacl,
                               DaclDefaulted);
    if ( DaclSecurityDescriptor < 0 )
    {
      v35 = Object;
      if ( Object )
LABEL_49:
        ObReleaseObjectSecurity(v35, v37[0]);
    }
    else
    {
      DaclSecurityDescriptor = RtlGetControlSecurityDescriptor(
                                 *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                                 (PSECURITY_DESCRIPTOR_CONTROL)DaclPresent,
                                 Revision);
      if ( DaclSecurityDescriptor >= 0 )
      {
        if ( Dacl || (*(_WORD *)DaclPresent & 0x1000) != 0 )
        {
          LOBYTE(v14) = v43;
          v23 = (_OWORD *)a4;
        }
        else
        {
          LOBYTE(v14) = v43;
          v27 = *(_OWORD *)(a4 + 16);
          v48[0] = *(_OWORD *)a4;
          v28 = *(_OWORD *)(a4 + 32);
          v48[1] = v27;
          v29 = *(_OWORD *)(a4 + 48);
          v48[2] = v28;
          v30 = *(_OWORD *)(a4 + 64);
          v48[3] = v29;
          v31 = *(_OWORD *)(a4 + 80);
          v49 = v30;
          v32 = *(_OWORD *)(a4 + 96);
          v50 = v31;
          v33 = *(_OWORD *)(a4 + 128);
          v51 = v32;
          v52 = *(_OWORD *)(a4 + 112);
          v34 = *(_OWORD *)(a4 + 144);
          v53 = v33;
          v54 = v34;
          *(_QWORD *)&v49 = 0LL;
          v23 = v48;
        }
        goto LABEL_19;
      }
      v35 = Object;
      if ( Object )
        goto LABEL_49;
    }
    ObpDeleteDirectoryEntry(v47);
    ObpReleaseLookupContext((__int64)v47);
    ObpDecrementHandleCount(BugCheckParameter1);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v17 = 0LL;
  if ( v47[30] )
  {
    v17 = (char *)Object - 48;
    ObpReferenceNamedObject((__int64)Object - 48);
  }
  ObpReleaseLookupContext((__int64)v47);
  ObpDecrementHandleCount(BugCheckParameter1);
  if ( (*a6 & 0x80u) != 0 )
  {
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(a4 + 20) = 0;
    v18 = ObpGrantAccess(1, v16, (struct _ACCESS_STATE *)a4, a5, *a6, a3);
    if ( v18 < 0 )
    {
      if ( v17 )
        ObpDereferenceNamedObject((__int64)v17);
      ObfDereferenceObject(v16);
      return (unsigned int)v18;
    }
    ObjectSecurity = ObpIncrementHandleCountEx(1, Revision[0], BugCheckParameter1, (_DWORD)v16, a5, *a6, 0LL);
    if ( v17 )
      ObpDereferenceNamedObject((__int64)v17);
    if ( ObjectSecurity < 0 )
    {
      ObfDereferenceObject(v16);
      return (unsigned int)ObjectSecurity;
    }
LABEL_24:
    *v46 = v16;
    return (unsigned int)ObjectSecurity;
  }
  if ( v17 )
    ObpDereferenceNamedObject((__int64)v17);
  ObfDereferenceObject(v16);
  return 3221225525LL;
}

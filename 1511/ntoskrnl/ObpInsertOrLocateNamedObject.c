/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x14046FBC0
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14001B408 (RtlGetDaclSecurityDescriptor.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     ObpDereferenceNamedObject @ 0x14009C3BC (ObpDereferenceNamedObject.c)
 *     ObpReferenceNamedObject @ 0x14009C400 (ObpReferenceNamedObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObReleaseObjectSecurity @ 0x140420AB8 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     ObpAssignSecurity @ 0x14046E22C (ObpAssignSecurity.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1404705B8 (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x1404ABE68 (ObpDeleteDirectoryEntry.c)
 *     RtlGetControlSecurityDescriptor @ 0x1404BF950 (RtlGetControlSecurityDescriptor.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _DWORD *a6,
        _QWORD *a7)
{
  char v9; // al
  __int64 *v10; // rsi
  unsigned __int8 v11; // di
  _QWORD *CurrentServerSilo; // r15
  int v13; // edx
  NTSTATUS v14; // edi
  PVOID v15; // rdi
  char *v16; // rsi
  int v17; // ebx
  __int64 v19; // rcx
  PVOID v20; // r15
  int ObjectSecurity; // r15d
  __int64 v22; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v23; // rcx
  int v24; // eax
  NTSTATUS DaclSecurityDescriptor; // esi
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // [rsp+28h] [rbp-D8h]
  BOOLEAN v35[4]; // [rsp+60h] [rbp-A0h] BYREF
  BOOLEAN DaclPresent[2]; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  BOOLEAN DaclDefaulted[4]; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-88h]
  ULONG Revision[2]; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+88h] [rbp-78h]
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v44; // [rsp+98h] [rbp-68h]
  __int64 v45[3]; // [rsp+A0h] [rbp-60h] BYREF
  char v46; // [rsp+BEh] [rbp-42h]
  _OWORD v47[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+110h] [rbp+10h]
  __int128 v49; // [rsp+120h] [rbp+20h]
  __int128 v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int128 v52; // [rsp+150h] [rbp+50h]
  __int128 v53; // [rsp+160h] [rbp+60h]

  BugCheckParameter1 = a1;
  v44 = a7;
  *a7 = 0LL;
  v9 = *(a2 - 22);
  *(_QWORD *)Revision = a3;
  Object = 0LL;
  Dacl = 0LL;
  if ( (v9 & 2) != 0 )
    v10 = (__int64 *)&a2[-ObpInfoMaskToOffset[v9 & 3] - 48];
  else
    v10 = 0LL;
  v11 = (*(a2 - 21) & 2) == 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v14 = ObpLookupObjectName(
          *((HANDLE *)a6 + 1),
          (__int64)(v10 + 1),
          *a6,
          (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *(a2 - 24) ^ ((unsigned __int16)((_WORD)a2 - 48) >> 8))],
          v11,
          0LL,
          *((_SECURITY_QUALITY_OF_SERVICE **)a6 + 5),
          a2,
          (__int64)CurrentServerSilo,
          (_ACCESS_STATE *)a4,
          (__int64)v45,
          &Object);
  if ( CurrentServerSilo )
    ObfDereferenceObject(CurrentServerSilo);
  if ( v14 < 0 )
  {
    ObpDecrementHandleCount(BugCheckParameter1);
    return (unsigned int)v14;
  }
  v15 = Object;
  if ( Object == a2 )
  {
    v19 = *v10;
    v20 = 0LL;
    Object = 0LL;
    v35[0] = 0;
    v37 = 0;
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 344) & 8) != 0 || ObpObjectSecurityInheritance )
        v37 = 3;
      ObjectSecurity = ObpGetObjectSecurity(v19, &Object, v35, a5);
      if ( ObjectSecurity < 0 )
        goto LABEL_50;
      v20 = Object;
    }
    v22 = *v10;
    LOBYTE(v13) = 0;
    v42 = v13;
    v23 = (struct _SECURITY_SUBJECT_CONTEXT *)a4;
    if ( v22 && ((*(_DWORD *)(v22 + 344) & 8) != 0 || ObpObjectSecurityInheritance) && *(_QWORD *)(a4 + 64) )
    {
      DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                 *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                                 DaclPresent,
                                 &Dacl,
                                 DaclDefaulted);
      if ( DaclSecurityDescriptor < 0 )
      {
        if ( v20 )
          ObReleaseObjectSecurity(v20, v35[0]);
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
            LOBYTE(v13) = v42;
            v23 = (struct _SECURITY_SUBJECT_CONTEXT *)a4;
          }
          else
          {
            LOBYTE(v13) = v42;
            v26 = *(_OWORD *)(a4 + 16);
            v47[0] = *(_OWORD *)a4;
            v27 = *(_OWORD *)(a4 + 32);
            v47[1] = v26;
            v28 = *(_OWORD *)(a4 + 48);
            v47[2] = v27;
            v29 = *(_OWORD *)(a4 + 64);
            v47[3] = v28;
            v30 = *(_OWORD *)(a4 + 80);
            v48 = v29;
            v31 = *(_OWORD *)(a4 + 96);
            v49 = v30;
            v32 = *(_OWORD *)(a4 + 128);
            v50 = v31;
            v51 = *(_OWORD *)(a4 + 112);
            v33 = *(_OWORD *)(a4 + 144);
            v52 = v32;
            v53 = v33;
            *(_QWORD *)&v48 = 0LL;
            v23 = (struct _SECURITY_SUBJECT_CONTEXT *)v47;
          }
          goto LABEL_22;
        }
        if ( v20 )
          ObReleaseObjectSecurity(v20, v35[0]);
      }
      ObpDeleteDirectoryEntry(v45);
      ObpReleaseLookupContext((__int64)v45);
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)DaclSecurityDescriptor;
    }
LABEL_22:
    if ( !v23[2].ClientToken && v37 )
      LOBYTE(v13) = 1;
    v24 = ObpAssignSecurity(
            v23,
            (__int64)v20,
            a2,
            (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *(a2 - 24) ^ ((unsigned __int16)((_WORD)a2 - 48) >> 8))],
            v37,
            v13);
    ObjectSecurity = v24;
    if ( Object )
    {
      ObReleaseObjectSecurity(Object, v35[0]);
    }
    else
    {
      if ( v24 < 0 )
        goto LABEL_50;
      SeReleaseSecurityDescriptor(*((void **)a6 + 4), *((_BYTE *)a6 + 16), 1);
      *((_QWORD *)a6 + 4) = 0LL;
      *(_QWORD *)(a4 + 64) = 0LL;
    }
    if ( ObjectSecurity >= 0 )
    {
      ObpReleaseLookupContext((__int64)v45);
      goto LABEL_27;
    }
LABEL_50:
    ObpDeleteDirectoryEntry(v45);
    ObpReleaseLookupContext((__int64)v45);
    ObpDecrementHandleCount(BugCheckParameter1);
    return (unsigned int)ObjectSecurity;
  }
  v16 = 0LL;
  if ( v46 )
  {
    v16 = (char *)Object - 48;
    ObpReferenceNamedObject((__int64)Object - 48);
  }
  ObpReleaseLookupContext((__int64)v45);
  ObpDecrementHandleCount(BugCheckParameter1);
  if ( (*a6 & 0x80u) != 0 )
  {
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 24);
    v34 = *(_QWORD *)Revision;
    *(_DWORD *)(a4 + 20) = 0;
    v17 = ObpGrantAccess(1LL, v15, a4, a5, *a6, v34);
    if ( v17 < 0 )
    {
      if ( v16 )
        ObpDereferenceNamedObject((__int64)v16);
      ObfDereferenceObject(v15);
      return (unsigned int)v17;
    }
    ObjectSecurity = ObpIncrementHandleCountEx(1u, *(__int64 *)Revision, BugCheckParameter1, (__int64)v15, a5, *a6, 0LL);
    if ( v16 )
      ObpDereferenceNamedObject((__int64)v16);
    if ( ObjectSecurity < 0 )
    {
      ObfDereferenceObject(v15);
      return (unsigned int)ObjectSecurity;
    }
LABEL_27:
    *v44 = v15;
    return (unsigned int)ObjectSecurity;
  }
  if ( v16 )
    ObpDereferenceNamedObject((__int64)v16);
  ObfDereferenceObject(v15);
  return 3221225525LL;
}

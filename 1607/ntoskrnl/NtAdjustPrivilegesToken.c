/*
 * XREFs of NtAdjustPrivilegesToken @ 0x14045E9C4
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x140688E7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SepAdjustPrivileges @ 0x14045ED98 (SepAdjustPrivileges.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14045F228 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  char *v11; // rcx
  PTOKEN_PRIVILEGES v12; // rbx
  __int64 v13; // rcx
  NTSTATUS result; // eax
  __int64 v15; // rdx
  int v16; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v18; // r14
  __int64 v19; // r12
  int v20; // r8d
  _QWORD *v21; // rdi
  int v22; // edx
  int v23; // r8d
  ULONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  signed __int32 v33[8]; // [rsp+0h] [rbp-B8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-98h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-90h]
  __int64 v36; // [rsp+30h] [rbp-88h]
  KPROCESSOR_MODE v37; // [rsp+50h] [rbp-68h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-64h]
  ULONG v39; // [rsp+58h] [rbp-60h] BYREF
  PVOID v40; // [rsp+60h] [rbp-58h] BYREF
  ULONG v41; // [rsp+68h] [rbp-50h] BYREF
  __int64 v42; // [rsp+70h] [rbp-48h] BYREF
  NTSTATUS v43; // [rsp+78h] [rbp-40h]
  int v44; // [rsp+7Ch] [rbp-3Ch]
  __int64 v45; // [rsp+80h] [rbp-38h] BYREF
  char v46; // [rsp+C8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v42 = 0LL;
  LODWORD(v45) = 0;
  v39 = 0;
  v41 = 0;
  v46 = 0;
  v44 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( PreviousMode )
  {
    if ( !DisableAllPrivileges )
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      PrivilegeCount = NewState->PrivilegeCount;
      v44 = 12 * (PrivilegeCount - 1) + 16;
      if ( 12 * (PrivilegeCount - 1) != -16 )
      {
        v11 = (char *)&NewState->Privileges[PrivilegeCount];
        if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < (char *)NewState )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      v13 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
LABEL_16:
    if ( !DisableAllPrivileges )
    {
      result = SeCaptureLuidAndAttributesArray(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v36,
                 (__int64)&v42,
                 (__int64)&v45);
      v43 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_18;
  }
  v12 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_16;
  }
LABEL_18:
  v16 = ObReferenceObjectByHandle(
          TokenHandle,
          v12 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v40,
          0LL);
  if ( v16 < 0 )
  {
    if ( v42 )
    {
      LOBYTE(v15) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v42, v15);
    }
    return v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (PERESOURCE *)v40;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v40 + 6), 1u);
    _InterlockedOr(v33, 0);
    v19 = v42;
    LOBYTE(v20) = DisableAllPrivileges;
    v21 = v40;
    SepAdjustPrivileges(
      (_DWORD)v40,
      0,
      v20,
      PrivilegeCount,
      v42,
      (__int64)v12,
      (__int64)&v39,
      (__int64)&v41,
      (__int64)&v46);
    if ( v12 && (*ReturnLength = v39, v39 > BufferLength) )
    {
      _InterlockedOr(v33, 0);
      ExReleaseResourceLite(v18[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
      ObfDereferenceObject(v40);
      if ( v42 )
      {
        LOBYTE(v32) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v42, v32);
      }
      return -1073741789;
    }
    else
    {
      LOBYTE(v23) = DisableAllPrivileges;
      LOBYTE(v22) = 1;
      v43 = SepAdjustPrivileges(
              (_DWORD)v21,
              v22,
              v23,
              PrivilegeCount,
              v19,
              (__int64)v12,
              (__int64)&v39,
              (__int64)&v41,
              (__int64)&v46);
      if ( v12 )
      {
        v24 = v41;
        v12->PrivilegeCount = v41;
        if ( !v24 )
        {
          v12->Privileges[0].Luid = 0LL;
          v12->Privileges[0].Attributes = 0;
        }
      }
      if ( v46 )
        v21[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v33, 0);
      ExReleaseResourceLite(v18[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
      ObfDereferenceObject(v40);
      if ( v42 )
      {
        LOBYTE(v28) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v42, v28);
      }
      return v43;
    }
  }
}

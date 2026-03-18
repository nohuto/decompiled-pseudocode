/*
 * XREFs of ObReferenceObjectByName @ 0x14046F95C
 * Callers:
 *     IopGetDriverPathInformation @ 0x1401B72B8 (IopGetDriverPathInformation.c)
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     IopGetLegacyVetoListDrivers @ 0x14046F6CC (IopGetLegacyVetoListDrivers.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     ObShutdownSystem @ 0x14062D4D0 (ObShutdownSystem.c)
 * Callees:
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140043230 (SeClearLearningModeObjectInformation.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x140410A10 (ObpCaptureObjectName.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x14046FB4C (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1404707E4 (ObpCheckObjectReference.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        ULONG64 a1,
        int a2,
        _ACCESS_STATE *a3,
        unsigned int a4,
        struct _OBJECT_TYPE *a5,
        char a6,
        __int64 a7,
        __int64 *a8)
{
  int AccessState; // ebx
  _QWORD *CurrentServerSilo; // rsi
  unsigned __int64 v13; // rdx
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  _WORD v17[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h]
  _WORD *v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  __int64 v22[5]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v23[160]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v24[224]; // [rsp+180h] [rbp+80h] BYREF

  v16 = a7;
  if ( a1 )
  {
    AccessState = ObpCaptureObjectName(a6, a1, (__int64)v17, 1);
    if ( AccessState < 0 )
      return (unsigned int)AccessState;
    if ( v17[0] )
    {
      if ( a3
        || (a3 = (_ACCESS_STATE *)v23,
            AccessState = SeCreateAccessState(v23, v24, a4, &a5->TypeInfo.GenericMapping),
            AccessState >= 0) )
      {
        CurrentServerSilo = PsGetCurrentServerSilo();
        LODWORD(v16) = ObpLookupObjectName(
                         0LL,
                         (__int64)v17,
                         a2,
                         a5,
                         a6,
                         (void *)v16,
                         0LL,
                         0LL,
                         (__int64)CurrentServerSilo,
                         a3,
                         (__int64)v22,
                         (PVOID *)&v15);
        AccessState = v16;
        if ( CurrentServerSilo )
          ObDereferenceObject(CurrentServerSilo);
        ObpReleaseLookupContext((__int64)v22);
        *a8 = 0LL;
        if ( AccessState >= 0 )
        {
          v13 = *(unsigned __int8 *)(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8);
          v21 = 0LL;
          v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v13] + 16;
          v20 = v17;
          SeSetLearningModeObjectInformation((__int64)v18);
          if ( (unsigned __int8)ObpCheckObjectReference(v15, (PNTSTATUS)&v16) )
            *a8 = v15;
          else
            ObDereferenceObject((void *)v15);
          SeClearLearningModeObjectInformation();
          AccessState = v16;
        }
        if ( a3 == (_ACCESS_STATE *)v23 )
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)a3);
      }
      ObpFreeObjectNameBuffer(v17);
      return (unsigned int)AccessState;
    }
  }
  return 3221225523LL;
}

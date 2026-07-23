/*
 * XREFs of ObReferenceObjectByName @ 0x140404AA0
 * Callers:
 *     IopGetDriverPathInformation @ 0x1401C4CDC (IopGetDriverPathInformation.c)
 *     IopGetLegacyVetoListDrivers @ 0x140404424 (IopGetLegacyVetoListDrivers.c)
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     ObShutdownSystem @ 0x1406656C0 (ObShutdownSystem.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     SeClearLearningModeObjectInformation @ 0x14000F1C0 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObpFreeObjectNameBuffer @ 0x140404C80 (ObpFreeObjectNameBuffer.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     ObpCheckObjectReference @ 0x1404057B0 (ObpCheckObjectReference.c)
 *     ObpCaptureObjectName @ 0x1404188B0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v10; // rdx
  int AccessState; // ebx
  __int64 CurrentSilo; // rax
  void *v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  _WORD v17[8]; // [rsp+78h] [rbp-88h] BYREF
  char *v18; // [rsp+88h] [rbp-78h] BYREF
  char v19[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  _WORD *v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  _BYTE v23[40]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v24[160]; // [rsp+F0h] [rbp-10h] BYREF
  char v25[224]; // [rsp+190h] [rbp+90h] BYREF

  v16 = a7;
  if ( a1 )
  {
    v10 = a1;
    LOBYTE(a1) = a6;
    AccessState = ObpCaptureObjectName(a1, v10, v17, 1LL);
    if ( AccessState < 0 )
      return (unsigned int)AccessState;
    if ( v17[0] )
    {
      if ( a3 || (a3 = v24, AccessState = SeCreateAccessState(v24, v25, a4, a5 + 76), AccessState >= 0) )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v16) = ObpLookupObjectName(
                         0LL,
                         a6,
                         v16,
                         0LL,
                         0LL,
                         CurrentSilo,
                         (__int64)a3,
                         (__int64)v23,
                         0LL,
                         (__int64)&v18);
        AccessState = v16;
        ObpReleaseLookupContext((__int64)v23);
        *a8 = 0LL;
        if ( AccessState >= 0 )
        {
          v13 = v18;
          v14 = (unsigned __int8)*(v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v18 - 48) >> 8);
          v22 = 0LL;
          v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
          v21 = v17;
          SeSetLearningModeObjectInformation((__int64)v19);
          if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)v13, (PNTSTATUS)&v16) )
            *a8 = v13;
          else
            PsDereferenceSiloContext(v13);
          SeClearLearningModeObjectInformation();
          AccessState = v16;
        }
        if ( a3 == v24 )
          SeDeleteAccessState(a3);
      }
      ObpFreeObjectNameBuffer(v17);
      return (unsigned int)AccessState;
    }
  }
  return 3221225523LL;
}

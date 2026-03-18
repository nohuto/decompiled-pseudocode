/*
 * XREFs of NtGdiStretchBlt @ 0x140016260
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiStretchBlt(
        Gre::Base *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  DC *v22; // [rsp+78h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  _OWORD v26[2]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v27[2]; // [rsp+B8h] [rbp-50h] BYREF
  char v28; // [rsp+D8h] [rbp-30h]
  DC *v29; // [rsp+E0h] [rbp-28h] BYREF
  int v30; // [rsp+E8h] [rbp-20h]
  struct Gre::Base::SESSION_GLOBALS *v31; // [rsp+F0h] [rbp-18h]
  __int64 v32; // [rsp+F8h] [rbp-10h]
  _BYTE v33[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v34[32]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v35; // [rsp+140h] [rbp+38h]
  __int16 v36; // [rsp+148h] [rbp+40h]

  v24 = Gre::Base::Globals(a1);
  memset(v26, 0, sizeof(v26));
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0;
  PushThreadGuardedObject(
    v26,
    &v22,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v16) = 1;
  v17 = HmgLock(v24, a1, v16, 0LL);
  v22 = (DC *)v17;
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v17 + 12));
      v22 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v22 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v22) )
    {
      if ( (*((_DWORD *)v22 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v22);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v22 + 6);
      v22 = 0LL;
    }
  }
  memset(v27, 0, sizeof(v27));
  PushThreadGuardedObject(v27, &v22, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v28 = 1;
  if ( v22 )
  {
    if ( *((_WORD *)v22 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    if ( *((_WORD *)v22 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v22);
  }
  v31 = v24;
  v32 = 0LL;
  v29 = 0LL;
  v30 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v33);
  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v34);
  v35 = a6;
  v36 = 1;
  if ( v22 && a6 == *(_QWORD *)v22 )
  {
    v36 = 256;
    v29 = v22;
  }
  v20 = GrepStretchBlt((struct XDCOBJ *)&v22, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)&v29, a7, a8, a9, a10, a11, a12, 0);
  if ( !(_BYTE)v36 )
    v29 = 0LL;
  PopThreadGuardedObject(v34);
  DCOBJ::~DCOBJ((DCOBJ *)&v29);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v22);
  return v20;
}

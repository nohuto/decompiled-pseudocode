/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1400AEFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x14006D6CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x1400AE100 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400BB96C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(Gre::Base *a1, HRGN a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  DC *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DC *v11; // rdi
  unsigned int v12; // ebx
  char *v13; // rsi
  struct REGION *v14; // rax
  ULONG v16; // ecx
  DC *v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h]
  struct Gre::Base::SESSION_GLOBALS *v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  _OWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v23; // [rsp+80h] [rbp-80h]
  struct REGION *v24; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[40]; // [rsp+98h] [rbp-68h] BYREF
  int v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  _BYTE v28[160]; // [rsp+E0h] [rbp-20h] BYREF
  struct REGION *v29; // [rsp+1C8h] [rbp+C8h] BYREF

  v20 = 0LL;
  v19 = Gre::Base::Globals(a1);
  v17 = 0LL;
  v18 = 0;
  memset(v21, 0, sizeof(v21));
  PushThreadGuardedObject(
    v21,
    &v17,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  LOBYTE(v6) = 1;
  v7 = HmgLock(v19, a1, v6, 0LL);
  v17 = (DC *)v7;
  v8 = (DC *)v7;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 12));
      v8 = 0LL;
      v17 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
      GrepAuditBehaviorRestrictionViolations(1LL);
    v8 = v17;
  }
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 11) & 2) == 0 )
    {
      if ( !DCOBJ::SaveAttributesHelper((DCOBJ *)&v17) )
      {
        _InterlockedDecrement16((volatile signed __int16 *)v17 + 6);
        v17 = 0LL;
        goto LABEL_10;
      }
      *((_DWORD *)v17 + 11) |= 2u;
      v8 = v17;
      v18 = 1;
    }
    if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v8);
  }
LABEL_10:
  memset(v22, 0, sizeof(v22));
  PushThreadGuardedObject(v22, &v17, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v23 = 1;
  if ( !v17 )
    goto LABEL_32;
  if ( *((_WORD *)v17 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  if ( *((_WORD *)v17 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v17);
  v11 = v17;
  if ( !v17 )
  {
LABEL_32:
    EngSetLastError(6u);
    v12 = 0;
    goto LABEL_33;
  }
  v12 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    v16 = 87;
LABEL_40:
    EngSetLastError(v16);
    goto LABEL_33;
  }
  if ( *(_QWORD *)v17 )
  {
    v13 = (char *)HmgPentryFromPobj(v19, v17);
  }
  else
  {
    v13 = (char *)v17 + 2152;
    *(_OWORD *)((char *)v17 + 2152) = 0LL;
    v27 = 0LL;
    *((_QWORD *)v11 + 271) = 0LL;
    *((_DWORD *)v11 + 540) = -2147483630;
    *((_QWORD *)v11 + 271) = GreEncodeUserModePointer(0LL);
  }
  if ( (*((_DWORD *)v13 + 2) & 0xFFFFFFFE) == 0 )
  {
    v16 = 6;
    goto LABEL_40;
  }
  if ( a2 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v24, a2, 1, 0);
    v14 = v24;
    if ( v24 )
    {
      v12 = DC::iSelect(v17, v24, a3);
      if ( v12 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28);
        v12 = 0;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v28, (struct XDCOBJ *)&v17, 1) )
        {
          v29 = XDCOBJ::prgnEffRao(&v17);
          v12 = RGNOBJ::iComplexity((RGNOBJ *)&v29);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v28);
      }
      v14 = v24;
    }
    if ( !v26 )
    {
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v24);
      v14 = v24;
    }
    if ( v14 )
      _InterlockedDecrement16((volatile signed __int16 *)v14 + 6);
    PopThreadGuardedObject(v25);
  }
  else if ( a3 == 5 )
  {
    v12 = DC::iSelect(v17, 0LL, 5);
    if ( v12 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28);
      v12 = 0;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v28, (struct XDCOBJ *)&v17, 1) )
      {
        v29 = DC::prgnVisSnap(v17);
        v12 = RGNOBJ::iComplexity((RGNOBJ *)&v29);
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v28);
    }
  }
LABEL_33:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v17);
  return v12;
}

/*
 * XREFs of NtGdiSelectBitmap @ 0x140156020
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiSelectBitmap(Gre::Base *a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int CurrentProcessId; // eax
  unsigned __int64 v9; // rbx
  unsigned int v10; // esi
  char *v11; // r14
  struct _DC_ATTR *UserAttr; // rax
  int v13; // edx
  unsigned __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned int v19; // esi
  char *v20; // rdi
  struct _DC_ATTR *v21; // rax
  unsigned int v22; // eax
  unsigned __int64 v23; // rbx
  unsigned int v24; // esi
  char *v25; // rdi
  struct _DC_ATTR *v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v29; // edx
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // [rsp+28h] [rbp-59h] BYREF
  int v34; // [rsp+30h] [rbp-51h]
  struct Gre::Base::SESSION_GLOBALS *v35; // [rsp+38h] [rbp-49h]
  __int64 v36; // [rsp+40h] [rbp-41h]
  _OWORD v37[2]; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v38[2]; // [rsp+68h] [rbp-19h] BYREF
  char v39; // [rsp+88h] [rbp+7h]
  __int64 v40; // [rsp+A8h] [rbp+27h]
  _BYTE v41[16]; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v42; // [rsp+C0h] [rbp+3Fh]

  v35 = Gre::Base::Globals(a1);
  memset(v37, 0, sizeof(v37));
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0;
  PushThreadGuardedObject(
    v37,
    &v33,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  v4 = 1;
  LOBYTE(v5) = 1;
  v6 = HmgLock(v35, a1, v5, 0LL);
  v33 = v6;
  v7 = v6;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v6 + 12));
      v7 = 0LL;
      v33 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(0LL) != 1 )
      GrepAuditBehaviorRestrictionViolations(1LL);
    v7 = v33;
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 44) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v9 = v33;
      v10 = CurrentProcessId & 0xFFFFFFFC;
      if ( *(_QWORD *)v33 )
      {
        v11 = (char *)HmgPentryFromPobj(v35, v33);
      }
      else
      {
        v11 = (char *)(v33 + 2152);
        *(_OWORD *)(v33 + 2152) = 0LL;
        v42 = 0LL;
        *(_QWORD *)(v9 + 2168) = 0LL;
        *(_DWORD *)(v9 + 2160) = -2147483630;
        *(_QWORD *)(v9 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v10 == (*((_DWORD *)v11 + 2) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr((DCOBJ *)&v33);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes((DC *)v33, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)(v33 + 12));
            v33 = 0LL;
            goto LABEL_13;
          }
        }
      }
      *(_DWORD *)(v33 + 44) |= 2u;
      v7 = v33;
      v34 = 1;
    }
    v13 = *(_DWORD *)(v7 + 520);
    if ( (v13 & 4) != 0 )
    {
      v29 = v13 & 0xFFFFFFFB;
      *(_DWORD *)(v7 + 520) = v29;
      v30 = *(_QWORD *)(v7 + 976);
      v31 = *(_DWORD *)(v30 + 340);
      if ( (v29 & 1) != 0 )
        v32 = v31 | 0x16090;
      else
        v32 = v31 | 0x6090;
      *(_DWORD *)(v30 + 340) = v32;
    }
  }
LABEL_13:
  memset(v38, 0, sizeof(v38));
  PushThreadGuardedObject(v38, &v33, UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v14 = v33;
  v39 = 1;
  if ( v33 )
  {
    if ( *(_WORD *)(v33 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_WORD *)(v33 + 12) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v33);
    v14 = v33;
    if ( v33 )
    {
      v15 = *(_QWORD *)GrepSelectBitmap(v41, &v33, a2, 0LL);
      v33 &= -(__int64)(v39 != 0);
      PopThreadGuardedObject(v38);
      v16 = v33;
      if ( v33 )
      {
        if ( v34 && (*(_DWORD *)(v33 + 44) & 2) != 0 )
        {
          v17 = (unsigned int)PsGetCurrentProcessId();
          v18 = v33;
          v19 = v17 & 0xFFFFFFFC;
          if ( *(_QWORD *)v33 )
          {
            v20 = (char *)HmgPentryFromPobj(v35, v33);
          }
          else
          {
            v20 = (char *)(v33 + 2152);
            *(_OWORD *)(v33 + 2152) = 0LL;
            v40 = 0LL;
            *(_QWORD *)(v18 + 2168) = 0LL;
            *(_DWORD *)(v18 + 2160) = -2147483630;
            *(_QWORD *)(v18 + 2168) = GreEncodeUserModePointer(0LL);
          }
          if ( v19 == (*((_DWORD *)v20 + 2) & 0xFFFFFFFE) )
          {
            v21 = DCOBJ::GetUserAttr((DCOBJ *)&v33);
            if ( v21 )
              DC::RestoreAttributes((DC *)v33, v21);
          }
          *(_DWORD *)(v33 + 44) &= ~2u;
          v16 = v33;
          v34 = 0;
        }
        _InterlockedDecrement16((volatile signed __int16 *)(v16 + 12));
        v33 = 0LL;
      }
      goto LABEL_39;
    }
    v4 = v39;
  }
  v33 = v14 & -(__int64)(v4 != 0);
  PopThreadGuardedObject(v38);
  v27 = v33;
  if ( v33 )
  {
    if ( v34 && (*(_DWORD *)(v33 + 44) & 2) != 0 )
    {
      v22 = (unsigned int)PsGetCurrentProcessId();
      v23 = v33;
      v24 = v22 & 0xFFFFFFFC;
      if ( *(_QWORD *)v33 )
      {
        v25 = (char *)HmgPentryFromPobj(v35, v33);
      }
      else
      {
        v25 = (char *)(v33 + 2152);
        *(_OWORD *)(v33 + 2152) = 0LL;
        v40 = 0LL;
        *(_QWORD *)(v23 + 2168) = 0LL;
        *(_DWORD *)(v23 + 2160) = -2147483630;
        *(_QWORD *)(v23 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v24 == (*((_DWORD *)v25 + 2) & 0xFFFFFFFE) )
      {
        v26 = DCOBJ::GetUserAttr((DCOBJ *)&v33);
        if ( v26 )
          DC::RestoreAttributes((DC *)v33, v26);
      }
      *(_DWORD *)(v33 + 44) &= ~2u;
      v27 = v33;
      v34 = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(v27 + 12));
    v33 = 0LL;
  }
  v15 = 0LL;
LABEL_39:
  PopThreadGuardedObject(v37);
  return v15;
}

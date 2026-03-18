/*
 * XREFs of NtUserGetDCEx @ 0x1402B3110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 DCEx; // rbx
  __int64 v14; // rcx
  bool HasUILimit; // al
  struct tagTHREADINFO *v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rdx

  v8 = EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2)
    || a2 == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 43088)
    || (a3 & 0xFFDAF800) != 0 )
  {
    v18 = 87;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v12 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v9) + 61) + 8LL) + 24LL);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v8 + 456), 1u);
    }
    else
    {
      v16 = PtiCurrent(v14);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v16 + 130, 0, 0) & 0x20000000) == 0 )
        goto LABEL_17;
      HasUILimit = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v16) + 57) + 752LL) + 32LL) & 1;
    }
    if ( !HasUILimit )
      goto LABEL_17;
    v17 = 0LL;
    if ( v12 )
      v17 = *v12;
    if ( ValidateHwnd(v17) )
      goto LABEL_17;
    v18 = 5;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v18);
    goto LABEL_23;
  }
  v12 = (__int64 *)ValidateHwnd(a1);
  if ( !v12 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (LOBYTE(v10) = 4, (int)GreReferenceObjectCheckOwner(a2, v10) >= 0) )
  {
    DCEx = _GetDCEx(v12, a2, a3);
    if ( a2 )
    {
      LOBYTE(v19) = 4;
      GreDecrementObjectReferenceCount(a2, v19);
    }
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v11);
  return DCEx;
}

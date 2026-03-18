/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1402AE8F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

HANDLE __fastcall EditionCreateDesktopEntryPoint(
        volatile void *Address,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rcx
  NTSTATUS Desktop; // eax
  __int64 v13; // rcx
  ULONG v14; // ecx
  struct tagTHREADINFO *v15; // rcx
  int v16; // ecx
  HANDLE v17; // rbx
  HANDLE v19[2]; // [rsp+40h] [rbp-28h] BYREF

  v19[0] = 0LL;
  v10 = EnterCrit(0LL, 0LL);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v10 + 456), 0x40u) )
      goto LABEL_3;
LABEL_12:
    v14 = 5;
    goto LABEL_14;
  }
  v15 = PtiCurrent(v11);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v15 + 130, 0, 0) & 0x20000000) != 0 )
    v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v15) + 57) + 752LL) + 32LL) & 0x40;
  else
    v16 = 0;
  if ( v16 )
    goto LABEL_12;
LABEL_3:
  if ( a4 > 1 || a2 || a3 )
  {
    v14 = 87;
    goto LABEL_14;
  }
  v19[1] = (HANDLE)1;
  ProbeForRead(Address, 1uLL, 4u);
  Desktop = xxxCreateDesktopEx((__int64)Address, a4, a5, a6, v19, 0);
  if ( Desktop < 0 )
  {
    v19[0] = 0LL;
    v14 = RtlNtStatusToDosError(Desktop);
LABEL_14:
    UserSetLastError(v14);
  }
  v17 = v19[0];
  UserSessionSwitchLeaveCrit(v13);
  return v17;
}

/*
 * XREFs of NtUserSetJobUILimits @ 0x1402BD090
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1402AF2FC (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetJobUILimits(HANDLE Handle, unsigned int a2)
{
  __int64 v4; // rcx
  ULONG v5; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  NTSTATUS v11; // eax
  ULONG v12; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  if ( !(unsigned int)Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = 50;
LABEL_3:
    UserSetLastError(v5);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v8 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  if ( !(unsigned int)IsImmersiveBroker(v8) && !(unsigned __int8)HasTcbPrivilege() )
  {
    v5 = 5;
    goto LABEL_3;
  }
  v9 = 1LL;
  Object = 0LL;
  v10 = ObReferenceObjectByHandleWithTag(Handle, 2u, (POBJECT_TYPE)PsJobType, 1, 0x47727355u, &Object, 0LL);
  if ( v10 < 0 )
  {
    v5 = RtlNtStatusToDosError(v10);
    goto LABEL_3;
  }
  v11 = KfSetJobUILimits(Object, a2);
  if ( v11 < 0 )
  {
    v9 = 0LL;
    v12 = RtlNtStatusToDosError(v11);
    UserSetLastError(v12);
  }
  ObfDereferenceObjectWithTag(Object, 0x47727355u);
  return v9;
}

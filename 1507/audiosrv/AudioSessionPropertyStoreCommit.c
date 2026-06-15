/*
 * XREFs of AudioSessionPropertyStoreCommit @ 0x18007E360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall AudioSessionPropertyStoreCommit(__int64 *a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *a1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Au,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0LL);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 432LL))(*(_QWORD *)(v1 + 72));
  v3 = v2;
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x57u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      v2);
  }
  return v3;
}

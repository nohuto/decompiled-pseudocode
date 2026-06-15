/*
 * XREFs of ?QueryInterface@CVolumeSoftware@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeSoftware::QueryInterface(CVolumeSoftware *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
      return v3;
    }
    *a3 = 0LL;
    v3 = -2147467262;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x43u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v3);
  }
  return v3;
}

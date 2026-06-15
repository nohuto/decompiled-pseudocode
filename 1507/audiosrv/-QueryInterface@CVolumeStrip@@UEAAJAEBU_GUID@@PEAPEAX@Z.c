/*
 * XREFs of ?QueryInterface@CVolumeStrip@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18001D330 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeStrip::QueryInterface(CVolumeStrip *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int (__fastcall *v10)(CVolumeStrip *__hidden); // rsi
  __int64 v11; // rdx

  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
    {
      return v7;
    }
    v11 = 17LL;
    goto LABEL_21;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4;
    if ( v6 )
    {
      *a3 = 0LL;
      v7 = -2147467262;
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        return v7;
      }
      v11 = 16LL;
LABEL_21:
      WPP_SF_D(*(_QWORD *)(v8 + 16), v11, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, v7);
      return v7;
    }
  }
  v10 = *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)this + 8LL);
  if ( v10 == CVolumeStrip::AddRef )
    CVolumeStrip::AddRef(this);
  else
    v10(this);
  *a3 = this;
  return 0LL;
}

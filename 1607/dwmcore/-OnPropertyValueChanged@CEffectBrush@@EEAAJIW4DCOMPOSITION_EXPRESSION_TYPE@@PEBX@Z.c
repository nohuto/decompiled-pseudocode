/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18013C440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x18013C134 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  CSpriteVisualContent *v4; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (CSpriteVisualContent *)(a1 - 128);
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 128)) )
  {
    if ( a2 < (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 128LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL)) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *))(**(_QWORD **)(a1 + 24) + 40LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              a3,
              a4,
              &v12);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x717u);
        return v9;
      }
      if ( v12 )
        CSpriteVisualContent::ReleasePrimitiveCaches(v4);
      CResource::NotifyOnChanged(v4, 0, 0LL);
    }
    return 0;
  }
  else
  {
    v9 = -2147483634;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483634, 0x70Au);
  }
  return v9;
}

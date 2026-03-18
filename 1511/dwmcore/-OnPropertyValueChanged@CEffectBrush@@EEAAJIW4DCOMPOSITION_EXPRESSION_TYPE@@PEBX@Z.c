/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180123220
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x180122F78 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v9; // ebx
  int v10; // eax

  v4 = a1 - 64;
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 64)) )
  {
    if ( a2 < (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 48LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL)) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 40LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              a3,
              a4);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2E0u);
        return v9;
      }
      if ( a3 == 104 )
      {
        *(_QWORD *)(v4 + 40) = 0LL;
        CResource::NotifyOnChanged((_DWORD *)v4, 5u, 0LL);
      }
      else
      {
        *(_BYTE *)(a1 + 112) = 1;
      }
      CResource::NotifyOnChanged((_DWORD *)v4, 0, 0LL);
    }
    return 0;
  }
  else
  {
    v9 = -2147483634;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483634, 0x2D4u);
  }
  return v9;
}

/*
 * XREFs of ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x18006CCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CMeterControlBase::GetMeteringChannelCount(CMeterControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 8);
    *a2 = v3;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xFu,
        (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
        this,
        v3);
    }
  }
  else
  {
    v2 = -2147467261;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x10u,
        (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
        -2147467261);
    }
  }
  return v2;
}

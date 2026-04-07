/*
 * XREFs of ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009B854
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009BF10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18003370C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x18009B778 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureVisualBrush(CIconicAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int Brush; // eax
  __int64 v6; // [rsp+20h] [rbp-28h]

  v2 = CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( !*((_QWORD *)this + 36) )
    {
      Brush = CSecondaryWindowRepresentation::GetBrush(
                *((_QWORD *)this + 34),
                (__int64)this + 288,
                (CBaseObject **)this + 37,
                (CBaseObject **)this + 38,
                v6,
                (CBaseObject **)this + 39,
                (CResource **)this + 40,
                (CBaseObject **)this + 36);
      v3 = Brush;
      if ( Brush < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Brush, 0x70u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x63u);
  }
  return v3;
}

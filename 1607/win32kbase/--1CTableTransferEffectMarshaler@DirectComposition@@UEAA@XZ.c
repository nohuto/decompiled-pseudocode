/*
 * XREFs of ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00EA81C
 * Callers:
 *     ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E4580 (--_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi

  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  v2 = (_QWORD *)((char *)this + 96);
  v3 = 4LL;
  do
  {
    if ( *v2 )
      Win32FreePool();
    v2 += 2;
    --v3;
  }
  while ( v3 );
  DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(this);
}

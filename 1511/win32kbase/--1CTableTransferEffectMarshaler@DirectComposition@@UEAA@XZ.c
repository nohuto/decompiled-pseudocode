/*
 * XREFs of ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00DB7AC
 * Callers:
 *     ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D6E90 (--_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(
        DirectComposition::CTableTransferEffectMarshaler *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi

  *(_QWORD *)this = &DirectComposition::CTableTransferEffectMarshaler::`vftable';
  v2 = (_QWORD *)((char *)this + 88);
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

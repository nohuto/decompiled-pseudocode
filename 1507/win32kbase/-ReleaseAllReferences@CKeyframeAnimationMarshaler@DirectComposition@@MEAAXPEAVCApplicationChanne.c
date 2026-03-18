/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D6A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  if ( *((_QWORD *)this + 14) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 14) + 8 * i));
    Win32FreePool();
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
}

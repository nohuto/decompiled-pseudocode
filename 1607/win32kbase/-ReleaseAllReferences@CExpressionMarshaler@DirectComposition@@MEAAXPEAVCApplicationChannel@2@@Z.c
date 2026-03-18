/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003D380
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003CB40 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C003EA80 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rsi
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  if ( this[22] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        *((struct DirectComposition::CWeakReferenceBase **)this[22] + i));
    Win32FreePool();
    this[22] = 0LL;
  }
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  if ( this[24] )
  {
    Win32FreePool();
    this[24] = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v5 = this[13];
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    this[13] = 0LL;
  }
  v6 = this[17];
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    this[17] = 0LL;
  }
}

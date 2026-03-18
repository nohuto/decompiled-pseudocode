/*
 * XREFs of ?SafeAddRef@CWeakReferenceBase@DirectComposition@@AEAAKXZ @ 0x1C00D54AC
 * Callers:
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C002D8E8 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWeakReferenceBase::SafeAddRef(DirectComposition::CWeakReferenceBase *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 2);
  v2 = v1 + 1;
  if ( v1 + 1 < v1 )
  {
    *((_DWORD *)this + 2) = -1;
    return 0LL;
  }
  else
  {
    *((_DWORD *)this + 2) = v2;
    return v2;
  }
}

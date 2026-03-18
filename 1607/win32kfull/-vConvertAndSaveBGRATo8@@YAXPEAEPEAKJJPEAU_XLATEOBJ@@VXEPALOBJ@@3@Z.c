/*
 * XREFs of ?vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BF940
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C0136620 (-XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

char __fastcall vConvertAndSaveBGRATo8(__int64 a1, unsigned int *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rbx
  __int64 v8; // rbp
  unsigned __int8 *Xlate555; // rax
  unsigned __int8 *v10; // r15
  _BYTE *v11; // rdi
  __int64 i; // rbx

  v6 = a4;
  v8 = a3;
  Xlate555 = XLATEOBJ_pGetXlate555(a5);
  v10 = Xlate555;
  if ( Xlate555 )
  {
    v11 = (_BYTE *)(v6 + a1);
    LOBYTE(Xlate555) = v6;
    if ( v6 + a1 > (unsigned __int64)(v6 + a1 + v8) )
      v8 = 0LL;
    if ( v8 )
    {
      for ( i = 0LL; i != v8; ++i )
      {
        LOBYTE(Xlate555) = XLATEOBJ_BGR32ToPalSurf(a5, v10, *a2);
        *v11 = (_BYTE)Xlate555;
        ++a2;
        ++v11;
      }
    }
  }
  return (char)Xlate555;
}

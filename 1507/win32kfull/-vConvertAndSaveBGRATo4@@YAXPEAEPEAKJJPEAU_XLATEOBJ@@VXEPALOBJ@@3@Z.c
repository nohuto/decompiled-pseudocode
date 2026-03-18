/*
 * XREFs of ?vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BD480
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0101EA8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C0106270 (-XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z.c)
 */

char __fastcall vConvertAndSaveBGRATo4(__int64 a1, unsigned int *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  char v5; // bl
  _BYTE *v8; // rsi
  unsigned __int8 *Xlate555; // rax
  unsigned __int8 *v10; // r12
  unsigned __int64 v11; // rbp
  unsigned __int8 v12; // bl

  v5 = a4;
  v8 = (_BYTE *)(a1 + ((__int64)a4 >> 1));
  Xlate555 = XLATEOBJ_pGetXlate555(a5);
  v10 = Xlate555;
  if ( Xlate555 && a3 )
  {
    if ( (v5 & 1) != 0 )
    {
      LOBYTE(Xlate555) = XLATEOBJ_BGR32ToPalSurf(a5, Xlate555, *a2++);
      LOBYTE(Xlate555) = *v8 & 0xF0 | (unsigned __int8)Xlate555;
      *v8++ = (_BYTE)Xlate555;
      --a3;
    }
    if ( a3 >= 2 )
    {
      v11 = (unsigned __int64)(unsigned int)a3 >> 1;
      a3 -= 2 * ((unsigned int)a3 >> 1);
      do
      {
        v12 = XLATEOBJ_BGR32ToPalSurf(a5, v10, a2[1]);
        LOBYTE(Xlate555) = 16 * XLATEOBJ_BGR32ToPalSurf(a5, v10, *a2);
        a2 += 2;
        *v8++ = (unsigned __int8)Xlate555 | v12;
        --v11;
      }
      while ( v11 );
    }
    if ( a3 )
    {
      LOBYTE(Xlate555) = *v8 & 0xF | (16 * XLATEOBJ_BGR32ToPalSurf(a5, v10, *a2));
      *v8 = (_BYTE)Xlate555;
    }
  }
  return (char)Xlate555;
}

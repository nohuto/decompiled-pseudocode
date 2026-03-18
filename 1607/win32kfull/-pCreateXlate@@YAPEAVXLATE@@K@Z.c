/*
 * XREFs of ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02BA2E4
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F12E4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B9D48 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

struct XLATE *__fastcall pCreateXlate(unsigned int a1)
{
  __int64 v2; // rdx

  if ( 4LL * a1 == -88 )
    v2 = 0LL;
  else
    v2 = AllocThreadBufferWithTag(4 * a1 + 88, 1953265735LL, 0LL);
  if ( v2 )
  {
    *(_DWORD *)v2 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
    if ( a1 )
    {
      *(_DWORD *)(v2 + 4) = 2;
      *(_QWORD *)(v2 + 16) = v2 + 80;
      *(_DWORD *)(v2 + 76) = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 4) = 0;
      *(_QWORD *)(v2 + 16) = 0LL;
      *(_DWORD *)(v2 + 76) = 512;
    }
    *(_DWORD *)(v2 + 36) = -1;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = a1;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return (struct XLATE *)v2;
}

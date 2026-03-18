/*
 * XREFs of GreSubtractRgnRectList @ 0x1C00EB534
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C005D8D0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00151F8 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall GreSubtractRgnRectList(HRGN a1, struct _RECTL *a2, struct _RECTL *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[8]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 0, 0);
  v5 = 0;
  if ( v7[0] )
  {
    if ( (unsigned int)RGNOBJAPI::bSubtract((RGNOBJAPI *)v7, a2, a3) )
    {
      v5 = RGNOBJ::iComplexity((RGNOBJ *)v7);
    }
    else if ( v7[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v7);
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}

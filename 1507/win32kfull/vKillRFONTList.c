/*
 * XREFs of vKillRFONTList @ 0x1C025E034
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0129BFC (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C012610C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *pvProducer; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _FONTOBJ *v8; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    pvProducer = a2;
    do
    {
      pvProducer = (struct _FONTOBJ *)pvProducer[7].pvProducer;
      memset(v7, 0, 32);
      v8 = a2;
      PushThreadGuardedObject(v7, a2, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v8, 0LL, 0LL, 1);
      PopThreadGuardedObject(v7, v4, v5, v6);
      PFFOBJ::vDeleteRFONTRef(this);
      v8 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
      a2 = pvProducer;
    }
    while ( pvProducer );
  }
}

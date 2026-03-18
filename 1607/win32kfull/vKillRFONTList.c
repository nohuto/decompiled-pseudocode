/*
 * XREFs of vKillRFONTList @ 0x1C025B08C
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0022D74 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0026C2C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *pvProducer; // rbx
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _FONTOBJ *v5; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    pvProducer = a2;
    do
    {
      pvProducer = (struct _FONTOBJ *)pvProducer[7].pvProducer;
      memset(v4, 0, 32);
      v5 = a2;
      PushThreadGuardedObject(v4, a2, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v5, 0LL, 0LL, 1);
      PopThreadGuardedObject(v4);
      PFFOBJ::vDeleteRFONTRef(this);
      v5 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
      a2 = pvProducer;
    }
    while ( pvProducer );
  }
}

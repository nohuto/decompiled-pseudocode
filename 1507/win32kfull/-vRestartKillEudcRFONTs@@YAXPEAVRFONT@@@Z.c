/*
 * XREFs of ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C025E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartKillEudcRFONTs(struct RFONT *a1)
{
  struct RFONT *v1; // rbx
  struct _FONTOBJ *v2; // rax
  PVOID v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v4; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = (struct _FONTOBJ *)a1;
    do
    {
      v1 = (struct RFONT *)*((_QWORD *)v1 + 63);
      v4 = v2;
      v3[0] = v2[1].pvProducer;
      RFONTOBJ::vDeleteRFONT(&v4, 0LL, (struct PFFOBJ *)v3, 0);
      v4 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
      v2 = (struct _FONTOBJ *)v1;
    }
    while ( v1 );
  }
}

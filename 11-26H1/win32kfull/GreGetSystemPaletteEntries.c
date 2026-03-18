/*
 * XREFs of GreGetSystemPaletteEntries @ 0x140331B20
 * Callers:
 *     CreateScreenPalette @ 0x1402EF664 (CreateScreenPalette.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x1401D6F9C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x14020CB40 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall GreGetSystemPaletteEntries(HDC a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int Entries; // edi
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-88h] BYREF
  __int64 v11; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v12[14]; // [rsp+40h] [rbp-78h] BYREF

  Entries = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v8 = *(_QWORD *)(v12[0] + 48LL);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v11);
    if ( (*(_DWORD *)(v8 + 2156) & 0x100) != 0 )
    {
      v10 = *(_QWORD *)(v8 + 1792);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v10, a2, a3, a4, 1);
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v11);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return Entries;
}

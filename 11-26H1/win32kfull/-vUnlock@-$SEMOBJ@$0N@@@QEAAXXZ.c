/*
 * XREFs of ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x140157684 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     GreSetPaletteEntries @ 0x14017E780 (GreSetPaletteEntries.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1401895FC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     GreRealizeDefaultPalette @ 0x14021B5C0 (GreRealizeDefaultPalette.c)
 *     NtGdiResizePalette @ 0x140256060 (NtGdiResizePalette.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     NtGdiUnrealizeObject @ 0x14032BF10 (NtGdiUnrealizeObject.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140331348 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x140334D0C (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x140347AD0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall SEMOBJ<13>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Palette", *a1);
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = v4 + 8;
    v7 = -v4;
    v8 = (_QWORD *)(v6 & -(__int64)(v7 != 0));
    if ( v8 )
    {
      if ( (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0x15))-- == 1 )
        *v8 &= ~0x2000uLL;
      if ( !*v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
    *a1 = 0LL;
  }
}

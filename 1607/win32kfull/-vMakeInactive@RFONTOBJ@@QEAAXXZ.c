/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454
 * Callers:
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00285A0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0124534 (GreGetGlyphOutlineInternal.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C01BF4A8 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C025A5E4 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  const struct SEMOBJSHARED *v2; // rdx
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // esi
  int InactiveHelper; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct RFONT *v9; // rcx
  int v10; // ebp
  __int64 v11; // rdi
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v13[112]; // [rsp+30h] [rbp-88h] BYREF

  if ( RFONTOBJ::bValid(this) )
  {
    SEMOBJ::SEMOBJ((SEMOBJ *)v12, ghsemRFONTList);
    if ( !RFONTOBJ::bActive(this, v2) )
    {
      SEMOBJ::~SEMOBJ((SEMOBJ *)v12);
      return;
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)v12);
    v3 = *(_DWORD *)(*(_QWORD *)this + 848LL);
    if ( v3 <= 0xA )
    {
      memset(v13, 0, sizeof(v13));
      v5 = 0;
      v4 = (struct RFONT **)v13;
    }
    else
    {
      v4 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32);
      if ( !v4 )
        return;
      v5 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v9 = *v4;
    v10 = InactiveHelper;
    if ( *v4 )
    {
      v11 = 0LL;
      do
      {
        v12[0] = v9;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v12, 0LL);
        v12[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v12);
        v9 = v4[++v11];
      }
      while ( v9 );
    }
    if ( v5 )
      Win32FreePool(v4, v7, v8);
    if ( v10 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}

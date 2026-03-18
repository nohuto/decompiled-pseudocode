/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00DD2C0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0105EA4 (GreGetGlyphOutlineInternal.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0022FFC (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(struct RFONT **this)
{
  struct RFONT *v1; // rax
  unsigned int v3; // ecx
  int v4; // edi
  struct RFONT **v5; // rbx
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rsi
  struct RFONT *v10[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v11[14]; // [rsp+30h] [rbp-88h] BYREF

  v1 = *this;
  if ( *this && *((_DWORD *)v1 + 123) )
  {
    v3 = *((_DWORD *)v1 + 212);
    if ( v3 > 0xA )
    {
      v5 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32, 1718382187LL, 1);
      if ( !v5 )
        return;
      v4 = 1;
    }
    else
    {
      memset(v11, 0, sizeof(v11));
      v4 = 0;
      v5 = v11;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
    v7 = *v5;
    v8 = InactiveHelper;
    if ( *v5 )
    {
      v9 = 0LL;
      do
      {
        v10[0] = v7;
        RFONTOBJ::bMakeInactiveHelper(v10, 0LL);
        v10[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
        v7 = v5[++v9];
      }
      while ( v7 );
    }
    if ( v4 )
      Win32FreePool(v5);
    if ( v8 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}

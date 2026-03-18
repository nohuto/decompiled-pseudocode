/*
 * XREFs of EngMarkBandingSurface @ 0x14031D840
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x14032D6F0 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14028F4C4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  BOOL v2; // edi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v9; // eax
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v10);
  v2 = 0;
  v11 = 0LL;
  v4 = Gre::Base::Globals(v3);
  LOBYTE(v5) = 5;
  v6 = HmgShareLock(v4, hsurf, v5, 16LL);
  v11 = v6;
  v7 = v6;
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 112);
    if ( (v9 & 0x200000) != 0 )
    {
      v2 = 1;
      *(_DWORD *)(v7 + 112) = v9 | 0x2000000;
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(2, v9, 0LL, 0LL, 0LL);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v10);
    return v2;
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v10);
    return 0;
  }
}

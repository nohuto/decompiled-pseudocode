/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02AF5E0
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C02B0320 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0286C64 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v6[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    if ( (*(_DWORD *)(v6[0] + 36LL) & 0x5000) == 0x1000 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      LOBYTE(v4) = 14;
      v7 = HmgShareLockCheck(a2, v4);
      if ( v7 )
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v7, (struct XDCOBJ *)v6, 0);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v6);
  }
  return v3;
}

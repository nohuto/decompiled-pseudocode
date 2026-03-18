/*
 * XREFs of ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C002A5E0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall hGetFreeHandle(unsigned __int8 a1)
{
  int v2; // r9d
  __int16 v3; // cx
  char *v4; // r8
  int v5; // eax
  int v7; // edx

  if ( ghFreeHmgr )
  {
    v2 = (unsigned __int16)ghFreeHmgr;
    v3 = *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)ghFreeHmgr + 6);
    v4 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)ghFreeHmgr;
    ghFreeHmgr = *(_QWORD *)v4;
    v5 = a1 | v3 & 0xFF00;
    *((_WORD *)v4 + 6) = v5;
    return (struct HOBJ__ *)(v2 | (unsigned __int64)(v5 << 16));
  }
  else if ( (unsigned int)gcMaxHmgr >= LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) )
  {
    return 0LL;
  }
  else
  {
    v7 = a1 | 0x100;
    *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned int)gcMaxHmgr + 6) = v7;
    return (struct HOBJ__ *)(gcMaxHmgr++ | (unsigned __int64)(v7 << 16));
  }
}

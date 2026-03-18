/*
 * XREFs of GreSelectVisRgn @ 0x1C0023950
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C0042DC0 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 * Callees:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall GreSelectVisRgn(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int16 v6; // edi^2
  struct _ENTRY *v7; // rsi
  unsigned int v8; // edi
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+3Ch] [rbp-2Ch]
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]

  v11 = 0;
  v3 = 0LL;
  v12 = 0;
  v6 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v7 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v13, v7, 0, (unsigned __int16)a1, 0);
    if ( v14 && v13 )
    {
      if ( *((_BYTE *)v7 + 14) == 1 && *((_WORD *)v7 + 6) == v6 )
      {
        v3 = *(_QWORD *)v7;
        ++*(_DWORD *)(*(_QWORD *)v7 + 8LL);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v13);
  }
  v10 = v3;
  v8 = GreSelectVisRgnInternal(&v10, a2, a3);
  if ( v3 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v10);
    HmgDecrementShareReferenceCount(v10);
  }
  return v8;
}

/*
 * XREFs of GreIntersectVisRect @ 0x1C00CBA80
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00877DC (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002731C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002F988 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // edi
  struct OBJECT *v9; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v13; // [rsp+30h] [rbp-D8h] BYREF
  __int16 *v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 *v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  struct OBJECT *v18[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v19[5]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v20[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v21[80]; // [rsp+C8h] [rbp-40h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v18, a1);
  if ( v18[0] )
  {
    v16 = *((_QWORD *)v18[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v16);
    AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v17, v18[0]);
    if ( (v20[24] & 1) != 0 )
    {
      v13.left = a2;
      v13.top = a3;
      v13.right = a4;
      v12 = *((_QWORD *)v18[0] + 192);
      v13.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14, *(_DWORD *)(v12 + 80));
      if ( v15[0] && v14[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v15, &v13);
        RGNOBJ::vCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)v15, (struct RGNOBJ *)v14, 1) )
        {
          *((_QWORD *)v18[0] + 192) = v12;
          *(_DWORD *)(v12 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          v9 = v18[0];
          *((_DWORD *)v18[0] + 9) |= 0x10u;
          EntryFromObject = GdiHandleManager::GetEntryFromObject(
                              (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                              v9);
          v5 = 1;
          *((_BYTE *)EntryFromObject + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v15);
    }
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v17);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
    DCOBJ::~DCOBJ((DCOBJ *)v21);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v19);
  return v5;
}

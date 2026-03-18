/*
 * XREFs of GreIntersectVisRect @ 0x1C00BE2A0
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C006E870 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0027814 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0039878 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003B168 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0049F18 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // edi
  struct DC *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v12; // [rsp+30h] [rbp-D8h] BYREF
  __int16 *v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 *v14[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  struct DC *v17[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v18[5]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v19[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v20[80]; // [rsp+C8h] [rbp-40h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v17, a1);
  if ( v17[0] )
  {
    v15 = *((_QWORD *)v17[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v15);
    AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v16, v17[0]);
    if ( (v19[24] & 1) != 0 )
    {
      v12.left = a2;
      v12.top = a3;
      v12.right = a4;
      v11 = *((_QWORD *)v17[0] + 192);
      v12.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v13, *(_DWORD *)(v11 + 80));
      if ( v14[0] && v13[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v14, &v12);
        RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v11);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v11, (struct RGNOBJ *)v14, (struct RGNOBJ *)v13, 1) )
        {
          *((_QWORD *)v17[0] + 192) = v11;
          v5 = 1;
          *(_DWORD *)(v11 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          v9 = v17[0];
          *((_DWORD *)v17[0] + 9) |= 0x10u;
          *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v9 + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v14);
    }
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v16);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    DCOBJ::~DCOBJ((DCOBJ *)v20);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v18);
  return v5;
}

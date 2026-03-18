/*
 * XREFs of GreIntersectVisRect @ 0x1C00BF800
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00864A0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C080 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // edi
  __int64 v9; // r14
  _DWORD *v10; // rax
  __int64 v12; // [rsp+28h] [rbp-71h] BYREF
  __int16 *v13[2]; // [rsp+30h] [rbp-69h] BYREF
  __int16 *v14[2]; // [rsp+40h] [rbp-59h] BYREF
  struct _RECTL v15; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v17; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v18[80]; // [rsp+78h] [rbp-21h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  MDCOBJA::MDCOBJA((MDCOBJA *)v16, a1);
  v9 = v16[0];
  if ( v16[0] )
  {
    v17 = *(_QWORD *)(v16[0] + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v17);
    if ( (v18[24] & 1) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 1512);
      v15.left = a2;
      v15.top = a3;
      v15.right = a4;
      v15.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v13, *(_DWORD *)(v12 + 80));
      if ( v14[0] && v13[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v14, &v15);
        RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v12);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)v14, (struct RGNOBJ *)v13, 1) )
        {
          *(_QWORD *)(v9 + 1512) = v12;
          v5 = 1;
          *(_DWORD *)(v12 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          v10 = (_DWORD *)v16[0];
          *(_DWORD *)(v16[0] + 36LL) |= 0x10u;
          *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*v10 + 15) |= 4u;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v14);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v16);
  return v5;
}

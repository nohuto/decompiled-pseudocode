/*
 * XREFs of NtGdiPtVisible @ 0x1C0291ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  struct EPOINTL *v7; // rax
  struct REGION *v9; // [rsp+20h] [rbp-79h] BYREF
  DC *v10[6]; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v11[24]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v12[112]; // [rsp+70h] [rbp-29h] BYREF
  struct _POINTL v13; // [rsp+118h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = 0;
  if ( v10[0] && (v6 = 1, *((_WORD *)v10[0] + 6) == 1) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
    if ( (v12[24] & 1) != 0 )
    {
      v9 = XDCOBJ::prgnEffRao((XDCOBJ *)v10);
      v13.x = a2;
      v13.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 0x204u);
      EXFORMOBJ::bXform((EXFORMOBJ *)v11, &v13, 1LL);
      v7 = DC::eptlOrigin(v10[0]);
      v13.x += *(_DWORD *)v7;
      v13.y += *((_DWORD *)v7 + 1);
      LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v9, &v13) == 2;
      v6 = v5;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v12);
  }
  else
  {
    EngSetLastError(6u);
    v6 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v6;
}

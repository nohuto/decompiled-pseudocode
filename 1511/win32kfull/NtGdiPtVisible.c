/*
 * XREFs of NtGdiPtVisible @ 0x1C0291A20
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  struct EPOINTL *v7; // rax
  struct REGION *v9; // [rsp+20h] [rbp-39h] BYREF
  DC *v10[2]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v12[80]; // [rsp+50h] [rbp-9h] BYREF
  struct _POINTL v13; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = 0;
  if ( v10[0] )
  {
    v6 = 1;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
    if ( (v12[24] & 1) != 0 )
    {
      v9 = XDCOBJ::prgnEffRao((XDCOBJ *)v10);
      v13.x = a2;
      v13.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 0x204u);
      EXFORMOBJ::bXform((EXFORMOBJ *)v11, &v13);
      v7 = DC::eptlOrigin(v10[0]);
      v13.x += *(_DWORD *)v7;
      v13.y += *((_DWORD *)v7 + 1);
      LOBYTE(v5) = RGNOBJ::bInside((RGNOBJ *)&v9, &v13) == 2;
      v6 = v5;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
  }
  else
  {
    EngSetLastError(6u);
    v6 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v6;
}

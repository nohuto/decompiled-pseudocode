/*
 * XREFs of EngAssociateSurface @ 0x1C00148A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00B3B10 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( hdev )
  {
    SURFREF::SURFREF((SURFREF *)v8);
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v8, hsurf);
    if ( v9 && (*(_DWORD *)(v9 + 112) & 0x200000) != 0 )
    {
      *(_QWORD *)(v9 + 128) = 0LL;
      v3 = 1;
      *(_QWORD *)(v9 + 48) = hdev;
      *(_QWORD *)(v9 + 40) = *((_QWORD *)hdev + 228);
      *(_DWORD *)(v9 + 112) |= v4;
    }
    SURFREF::~SURFREF((SURFREF *)v8);
  }
  return v3;
}

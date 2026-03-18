/*
 * XREFs of ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00262F4
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C00CEB64 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ??1DXGDODPRESENT@@QEAA@XZ @ 0x1C0183128 (--1DXGDODPRESENT@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C01830D0 (--1BLTQUEUE@@QEAA@XZ.c)
 */

BLTQUEUE *__fastcall BLTQUEUE::`scalar deleting destructor'(BLTQUEUE *this, char a2)
{
  BLTQUEUE::~BLTQUEUE(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

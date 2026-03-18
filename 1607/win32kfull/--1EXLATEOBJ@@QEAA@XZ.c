/*
 * XREFs of ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01BF500
 * Callers:
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C005EC64 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00F12E4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EXLATEOBJ::~EXLATEOBJ(EXLATEOBJ *this)
{
  EXLATEOBJ::vAltUnlock(this);
}

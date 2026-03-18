/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1C009EDFC
 * Callers:
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this)
{
  int v1; // eax
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 55);
  if ( (v1 & 0x20007) != 0 )
  {
    if ( (v1 & 0x20000) != 0 )
    {
      v3 = *((_QWORD *)this + 10);
      if ( v3 )
        DEC_SHARE_REF_CNT(v3);
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( (*((_DWORD *)this + 55) & 2) != 0 )
      EXLATEOBJ::vAltUnlock((BLTRECORD *)((char *)this + 88));
    if ( (*((_DWORD *)this + 55) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 104));
  }
}

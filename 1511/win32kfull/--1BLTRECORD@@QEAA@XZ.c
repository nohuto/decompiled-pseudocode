/*
 * XREFs of ??1BLTRECORD@@QEAA@XZ @ 0x1C0047D50
 * Callers:
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FC4C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall BLTRECORD::~BLTRECORD(BLTRECORD *this, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rcx

  v2 = *((_DWORD *)this + 55);
  if ( (v2 & 0x20007) != 0 )
  {
    if ( (v2 & 0x20000) != 0 )
    {
      v4 = *((_QWORD *)this + 10);
      if ( v4 )
        DEC_SHARE_REF_CNT(v4);
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( (*((_DWORD *)this + 55) & 2) != 0 )
      EXLATEOBJ::vAltUnlock((BLTRECORD *)((char *)this + 88), a2);
    if ( (*((_DWORD *)this + 55) & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 104));
  }
}

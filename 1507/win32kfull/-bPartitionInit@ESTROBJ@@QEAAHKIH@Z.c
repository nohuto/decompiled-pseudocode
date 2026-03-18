/*
 * XREFs of ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0023A6C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C002EEAC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall ESTROBJ::bPartitionInit(ESTROBJ *this, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rdi
  size_t v7; // r8
  char *v8; // rcx
  __int64 result; // rax

  *((_DWORD *)this + 1) &= 0xFFFFFFCF;
  v6 = a3;
  if ( (*((_DWORD *)this + 16) & 0x1000) == 0 )
  {
    v7 = 4LL * a2;
    v8 = (char *)(*((_QWORD *)this + 9) + 24LL * a2);
    *((_QWORD *)this + 27) = v8;
    *((_QWORD *)this + 26) = &v8[v7];
    memset(v8, 0, v7);
    *((_QWORD *)this + 34) = 0LL;
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 65) = 0;
    *((_DWORD *)this + 63) = 0;
    *((_DWORD *)this + 16) |= 0x1000u;
  }
  if ( !a4 )
    return 1LL;
  if ( (unsigned int)v6 < 0xA )
  {
    *((_QWORD *)this + 34) = (char *)this + 280;
    memset((char *)this + 280, 0, 4 * v6);
LABEL_6:
    *((_DWORD *)this + 16) |= 0x400u;
    return 1LL;
  }
  result = PALLOCMEM2((unsigned int)(4 * v6));
  *((_QWORD *)this + 34) = result;
  if ( result )
  {
    *((_DWORD *)this + 16) |= 0x800u;
    goto LABEL_6;
  }
  return result;
}

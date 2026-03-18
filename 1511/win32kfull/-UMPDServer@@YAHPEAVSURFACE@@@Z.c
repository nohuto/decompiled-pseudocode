/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C02A1798
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0146B94 (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  char *v3; // rbx
  struct UMPDOBJ *v5; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v3 = 0LL;
  if ( v5 && *((_DWORD *)v5 + 109) )
  {
    if ( a1 )
      v3 = (char *)a1 + 24;
    UMPDOBJ::vServer(v2, v3);
    LODWORD(v3) = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
  return (unsigned int)v3;
}

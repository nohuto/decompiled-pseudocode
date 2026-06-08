/*
 * XREFs of SetPerfStateIOHidden @ 0x1C0006850
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrHidden @ 0x1C0004568 (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C0004670 (WriteGenAddrHidden.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) && a4 && (unsigned int)ReadGenAddrHidden(a1, (char *)(a2 + 12)) != (_DWORD)a4 )
    return (unsigned int)-1073741823;
  return v7;
}

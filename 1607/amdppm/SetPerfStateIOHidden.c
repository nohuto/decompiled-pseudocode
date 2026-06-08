/*
 * XREFs of SetPerfStateIOHidden @ 0x1C00045F0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrHidden @ 0x1C0005FEC (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C00060E0 (WriteGenAddrHidden.c)
 */

__int64 __fastcall SetPerfStateIOHidden(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // ebx

  v6 = a1;
  v7 = 0;
  WriteGenAddrHidden(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 16) && a4 && (unsigned int)ReadGenAddrHidden(v6, a2 + 12) != (_DWORD)a4 )
    return (unsigned int)-1073741823;
  return v7;
}

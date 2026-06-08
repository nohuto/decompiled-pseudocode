/*
 * XREFs of SetPerfStateIO @ 0x1C0002360
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001388 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013DC (WriteGenAddr.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  WriteGenAddr((_BYTE *)a1, a2);
  if ( *(_QWORD *)(a1 + 16) && a3 && (unsigned int)ReadGenAddr(a1 + 12) != (_DWORD)a3 )
    return (unsigned int)-1073741823;
  return v5;
}

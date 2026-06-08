/*
 * XREFs of SetPerfStateIO @ 0x1C0004420
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0004A60 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0004AB4 (WriteGenAddr.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx

  v5 = 0;
  WriteGenAddr(a1, a2);
  if ( *(_QWORD *)(a1 + 16) && a3 && (unsigned int)ReadGenAddr(a1 + 12, v6) != (_DWORD)a3 )
    return (unsigned int)-1073741823;
  return v5;
}

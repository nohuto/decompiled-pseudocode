/*
 * XREFs of DecodeAcpiTStates @ 0x1C001E0B8
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001C910 (RegisterHvPerfStates.c)
 * Callees:
 *     DecodeControlStatusRegisterIo @ 0x1C001E1E4 (DecodeControlStatusRegisterIo.c)
 */

__int64 __fastcall DecodeAcpiTStates(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // r10d
  int v9; // edx
  int v11; // r14d
  char v12; // cl
  unsigned int v13; // esi

  v7 = a1 + 424;
  *a2 = 0LL;
  v9 = (int)a6;
  *a3 = 0LL;
  v11 = (int)a3;
  v12 = *(_BYTE *)(a1 + 424);
  v13 = -1073741811;
  *a4 = 0LL;
  *a6 = 0;
  *a5 = 0LL;
  *a7 = 0;
  if ( v12 == 127 && (*(_DWORD *)(a1 + 248) & 0x2000000) != 0 && dword_1C000DB90 )
  {
    *a2 = *a2 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
    *(_DWORD *)a2 = dword_1C000DB90;
    *a4 = qword_1C000DB98;
  }
  else if ( v12 == 1 && (*(_DWORD *)(a1 + 248) & 0x1100000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 428) )
    {
      LOBYTE(v9) = 1;
      DecodeControlStatusRegisterIo(v7, v9, (_DWORD)a2, (_DWORD)a4, (__int64)a6);
      if ( *(_BYTE *)(a1 + 436) == 1 )
      {
        if ( *(_DWORD *)(a1 + 440) )
          DecodeControlStatusRegisterIo(a1 + 436, 0, v11, (_DWORD)a5, (__int64)a7);
      }
    }
  }
  if ( *a2 )
    return 0;
  return v13;
}

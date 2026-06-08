/*
 * XREFs of DecodeAcpiPStates @ 0x1C0021B9C
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001DE00 (RegisterHvPerfStates.c)
 * Callees:
 *     DecodeControlStatusRegisterIo @ 0x1C0021E6C (DecodeControlStatusRegisterIo.c)
 */

__int64 __fastcall DecodeAcpiPStates(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // r10d
  int v8; // esi
  unsigned int v11; // ebp
  int v12; // edx
  char v13; // cl
  __int64 v14; // rax

  v7 = a1 + 376;
  *a2 = 0LL;
  v8 = (int)a3;
  *a3 = 0LL;
  *a4 = 0LL;
  *a2 &= 0xFFFFFFFFFFFFFuLL;
  *a3 &= 0xFFFFFFFFFFFFFuLL;
  v11 = -1073741811;
  v12 = (int)a6;
  v13 = *(_BYTE *)(a1 + 376);
  *a5 = 0LL;
  *a7 = 0;
  *a6 = 0;
  if ( v13 == 127 && (v14 = *(_QWORD *)(a1 + 248), (v14 & 0x60000000) != 0) )
  {
    if ( (v14 & 0x40000000) != 0 && *(_DWORD *)(a1 + 380) )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 380);
      if ( *(_BYTE *)(a1 + 388) == 127 && *(_DWORD *)(a1 + 392) )
      {
        *a3 = *a3 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
        *(_DWORD *)a3 = *(_DWORD *)(a1 + 392);
      }
    }
    else if ( (v14 & 0x20000000) != 0 && dword_1C000EEC8 )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
      *(_DWORD *)a2 = dword_1C000EEC8;
      *a4 = qword_1C000EED0;
    }
  }
  else if ( v13 == 1 && (*(_DWORD *)(a1 + 248) & 0x10000000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 380) )
    {
      LOBYTE(v12) = 1;
      DecodeControlStatusRegisterIo(v7, v12, (_DWORD)a2, (_DWORD)a4, (__int64)a6);
      if ( *(_BYTE *)(a1 + 388) == 1 )
      {
        if ( *(_DWORD *)(a1 + 392) )
          DecodeControlStatusRegisterIo(a1 + 388, 0, v8, (_DWORD)a5, (__int64)a7);
      }
    }
  }
  if ( *a2 )
    return 0;
  return v11;
}

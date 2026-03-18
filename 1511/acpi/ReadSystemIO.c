/*
 * XREFs of ReadSystemIO @ 0x1C00188D4
 * Callers:
 *     AccessBaseField @ 0x1C0016130 (AccessBaseField.c)
 *     DebugInPort @ 0x1C0043560 (DebugInPort.c)
 * Callees:
 *     CheckSystemIOAddressValidity @ 0x1C00178B0 (CheckSystemIOAddressValidity.c)
 */

__int64 __fastcall ReadSystemIO(unsigned int a1, unsigned int a2, int a3)
{
  unsigned __int16 v5; // di
  unsigned int v6; // ebx
  unsigned __int32 v7; // eax
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v5 = a1;
  if ( !(unsigned __int8)CheckSystemIOAddressValidity(1u, a1, a2, &v10) )
  {
LABEL_5:
    v7 = v10;
    return a3 & v7;
  }
  v6 = a2 - 1;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( !v9 )
    {
      LOWORD(v7) = __inword(v5);
      v7 = (unsigned __int16)v7;
      return a3 & v7;
    }
    if ( v9 == 2 )
    {
      v7 = __indword(v5);
      return a3 & v7;
    }
    goto LABEL_5;
  }
  LOBYTE(v7) = __inbyte(v5);
  v7 = (unsigned __int8)v7;
  return a3 & v7;
}

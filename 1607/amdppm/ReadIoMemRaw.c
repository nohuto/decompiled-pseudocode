/*
 * XREFs of ReadIoMemRaw @ 0x1C0005C38
 * Callers:
 *     PerfControlCpcSingleRegister @ 0x1C0002AF0 (PerfControlCpcSingleRegister.c)
 *     ReadGenAddr @ 0x1C0005E5C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0005EB0 (WriteGenAddr.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  unsigned __int8 *v2; // rcx
  int v3; // edx
  unsigned __int64 result; // rax
  unsigned int v5; // r11d
  int v6; // edx
  __int64 v7; // r10

  v2 = *(unsigned __int8 **)(a1 + 4);
  v3 = *(unsigned __int8 *)(a1 + 3);
  if ( !*(_BYTE *)a1 )
  {
    switch ( v3 )
    {
      case 8:
        return *v2;
      case 16:
        return *(unsigned __int16 *)v2;
      case 32:
        return *(unsigned int *)v2;
    }
    return 0LL;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    switch ( v3 )
    {
      case 8:
        LOBYTE(result) = __inbyte((unsigned __int16)v2);
        return (unsigned __int8)result;
      case 16:
        LOWORD(result) = __inword((unsigned __int16)v2);
        return (unsigned __int16)result;
      case 32:
        LODWORD(result) = __indword((unsigned __int16)v2);
        return (unsigned int)result;
    }
    return 0LL;
  }
  if ( *(_BYTE *)a1 != 10 )
  {
    if ( *(_BYTE *)a1 == 127 && v3 == 64 )
      return __readmsr((unsigned int)v2);
    return 0LL;
  }
  v5 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
  if ( v5 > 8 )
  {
    if ( v5 > 0x10 )
    {
      v6 = 64;
      if ( v5 <= 0x20 )
        v6 = 32;
    }
    else
    {
      v6 = 16;
    }
  }
  else
  {
    v6 = 8;
  }
  v7 = *(_QWORD *)(qword_1C00098A0 + 72);
  switch ( v6 )
  {
    case 8:
      return v2[v7];
    case 16:
      return *(unsigned __int16 *)&v2[v7];
    case 32:
      return *(unsigned int *)&v2[v7];
  }
  return *(_QWORD *)&v2[v7];
}

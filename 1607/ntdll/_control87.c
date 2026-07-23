/*
 * XREFs of _control87 @ 0x18009E610
 * Callers:
 *     _controlfp @ 0x18009E8A8 (_controlfp.c)
 * Callees:
 *     _set_fpsr @ 0x1800A0AA0 (_set_fpsr.c)
 *     _get_fpsr @ 0x1800AC920 (_get_fpsr.c)
 */

unsigned int __cdecl control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v3; // ebx
  __int16 fpsr; // r8
  unsigned int v5; // edi
  unsigned int result; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // ebx

  v3 = Mask & 0x308031F;
  fpsr = get_fpsr();
  v5 = 0;
  result = 0;
  if ( (fpsr & 0x80u) != 0 )
    result = 16;
  if ( (fpsr & 0x200) != 0 )
    result |= 8u;
  if ( (fpsr & 0x400) != 0 )
    result |= 4u;
  if ( (fpsr & 0x800) != 0 )
    result |= 2u;
  if ( (fpsr & 0x1000) != 0 )
    result |= 1u;
  if ( (fpsr & 0x100) != 0 )
    result |= 0x80000u;
  v7 = fpsr & 0x6000;
  if ( (fpsr & 0x6000) != 0 )
  {
    switch ( v7 )
    {
      case 8192:
        result |= 0x100u;
        break;
      case 16384:
        result |= 0x200u;
        break;
      case 24576:
        result |= 0x300u;
        break;
    }
  }
  v8 = (fpsr & 0x8040) - 64;
  if ( v8 )
  {
    v9 = v8 - 32704;
    if ( v9 )
    {
      if ( v9 == 64 )
        result |= 0x1000000u;
    }
    else
    {
      result |= 0x3000000u;
    }
  }
  else
  {
    result |= 0x2000000u;
  }
  v10 = v3 & NewValue | result & ~v3;
  if ( v10 != result )
  {
    v11 = 0;
    if ( (v10 & 0x10) != 0 )
      v11 = 128;
    if ( (v10 & 8) != 0 )
      v11 |= 0x200u;
    if ( (v10 & 4) != 0 )
      v11 |= 0x400u;
    if ( (v10 & 2) != 0 )
      v11 |= 0x800u;
    if ( (v10 & 1) != 0 )
      v11 |= 0x1000u;
    if ( (v10 & 0x80000) != 0 )
      v11 |= 0x100u;
    v12 = v10 & 0x300;
    if ( (v10 & 0x300) != 0 )
    {
      switch ( v12 )
      {
        case 256:
          v11 |= 0x2000u;
          break;
        case 512:
          v11 |= 0x4000u;
          break;
        case 768:
          v11 |= 0x6000u;
          break;
      }
    }
    v13 = v10 & 0x3000000;
    switch ( v13 )
    {
      case 16777216:
        v11 |= 0x8040u;
        break;
      case 33554432:
        v11 |= 0x40u;
        break;
      case 50331648:
        v11 |= 0x8000u;
        break;
    }
    if ( `_control87'::`2'::dazSupported && (v11 & 0x40) != 0 )
    {
      set_fpsr(v11);
    }
    else
    {
      v11 &= ~0x40u;
      set_fpsr(v11);
    }
    if ( (v11 & 0x80u) != 0 )
      v5 = 16;
    if ( (v11 & 0x200) != 0 )
      v5 |= 8u;
    if ( (v11 & 0x400) != 0 )
      v5 |= 4u;
    if ( (v11 & 0x800) != 0 )
      v5 |= 2u;
    if ( (v11 & 0x1000) != 0 )
      v5 |= 1u;
    if ( (v11 & 0x100) != 0 )
      v5 |= 0x80000u;
    v14 = v11 & 0x6000;
    if ( (v11 & 0x6000) != 0 )
    {
      switch ( v14 )
      {
        case 8192:
          v5 |= 0x100u;
          break;
        case 16384:
          v5 |= 0x200u;
          break;
        case 24576:
          v5 |= 0x300u;
          break;
      }
    }
    v15 = (v11 & 0x8040) - 64;
    if ( v15 )
    {
      v16 = v15 - 32704;
      if ( v16 )
      {
        if ( v16 == 64 )
          v5 |= 0x1000000u;
      }
      else
      {
        v5 |= 0x3000000u;
      }
    }
    else
    {
      v5 |= 0x2000000u;
    }
    return v5;
  }
  return result;
}

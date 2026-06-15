/*
 * XREFs of __isa_available_init @ 0x180036A3C
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x180036094 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_initialize_crt @ 0x1800361F4 (__scrt_initialize_crt.c)
 * Callees:
 *     <none>
 */

int __cdecl _isa_available_init()
{
  int v5; // r11d
  bool v7; // r8
  bool v8; // r10
  int v13; // r9d
  bool v14; // zf
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  int v24; // eax
  char v26; // [rsp+8h] [rbp-18h]

  v26 = 0;
  _RAX = 0LL;
  _isa_enabled = 2;
  __asm { cpuid }
  _isa_available = 1;
  v5 = _RAX;
  _RAX = 1LL;
  v7 = ((unsigned int)_RBX ^ 0x756E6547 | (unsigned int)_RCX ^ 0x6C65746E | (unsigned int)_RDX ^ 0x49656E69) == 0;
  v8 = ((unsigned int)_RCX ^ 0x444D4163 | (unsigned int)_RDX ^ 0x69746E65 | (unsigned int)_RBX ^ 0x68747541) == 0;
  __asm { cpuid }
  v13 = _RCX;
  v14 = !v7;
  v15 = _favor;
  v16 = _RAX;
  if ( !v14 )
  {
    _memcpy_nt_iters = -1LL;
    v15 = _favor | 4;
    v17 = _RAX & 0xFFF3FF0;
    _favor |= 4u;
    if ( v17 == 67264
      || v17 == 132704
      || v17 == 132720
      || (v18 = (unsigned int)(v17 - 198224), (unsigned int)v18 <= 0x20) && (v19 = 0x100010001LL, _bittest64(&v19, v18)) )
    {
      v15 |= 1u;
      _favor = v15;
    }
  }
  if ( v8 && (v16 & 0xFF00F00u) >= 0x600F00 )
  {
    v15 |= 4u;
    _favor = v15;
  }
  _RAX = 7LL;
  if ( v5 >= 7 )
  {
    __asm { cpuid }
    v26 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      _favor = v15 | 2;
  }
  if ( (v13 & 0x100000) != 0 )
  {
    _isa_available = 2;
    _isa_enabled = 6;
    if ( (v13 & 0x8000000) != 0 && (v13 & 0x10000000) != 0 )
    {
      __asm { xgetbv }
      if ( (_RAX & 6) == 6 )
      {
        v24 = _isa_enabled | 8;
        _isa_available = 3;
        _isa_enabled |= 8u;
        if ( (v26 & 0x20) != 0 )
        {
          _isa_available = 5;
          _isa_enabled = v24 | 0x20;
        }
      }
    }
  }
  return 0;
}

/*
 * XREFs of __isa_available_init @ 0x18002142C
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x180020D24 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180020E54 (__scrt_initialize_crt.c)
 * Callees:
 *     <none>
 */

int __cdecl _isa_available_init()
{
  int v5; // esi
  int v6; // edi
  int v8; // r8d
  bool v9; // zf
  int v14; // r11d
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  int v23; // eax
  char v25; // [rsp+8h] [rbp-18h]

  v25 = 0;
  _RAX = 0LL;
  _isa_enabled = 2;
  __asm { cpuid }
  _isa_available = 1;
  v5 = _RAX;
  v6 = _RCX ^ 0x444D4163 | _RDX ^ 0x69746E65 | _RBX ^ 0x68747541;
  _RAX = 1LL;
  v8 = _favor;
  v9 = ((unsigned int)_RCX ^ 0x6C65746E | (unsigned int)_RBX ^ 0x756E6547 | (unsigned int)_RDX ^ 0x49656E69) == 0;
  __asm { cpuid }
  v14 = _RCX;
  v15 = _RAX;
  if ( v9 )
  {
    _memcpy_nt_iters = -1LL;
    v8 = _favor | 4;
    v16 = _RAX & 0xFFF3FF0;
    _favor |= 4u;
    if ( v16 == 67264
      || v16 == 132704
      || v16 == 132720
      || (v17 = (unsigned int)(v16 - 198224), (unsigned int)v17 <= 0x20) && (v18 = 0x100010001LL, _bittest64(&v18, v17)) )
    {
      v8 |= 1u;
      _favor = v8;
    }
  }
  if ( !v6 && (v15 & 0xFF00F00u) >= 0x600F00 )
  {
    v8 |= 4u;
    _favor = v8;
  }
  _RAX = 7LL;
  if ( v5 >= 7 )
  {
    __asm { cpuid }
    v25 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      _favor = v8 | 2;
  }
  if ( (v14 & 0x100000) != 0 )
  {
    _isa_available = 2;
    _isa_enabled = 6;
    if ( (v14 & 0x8000000) != 0 && (v14 & 0x10000000) != 0 )
    {
      __asm { xgetbv }
      if ( (_RAX & 6) == 6 )
      {
        v23 = _isa_enabled | 8;
        _isa_available = 3;
        _isa_enabled |= 8u;
        if ( (v25 & 0x20) != 0 )
        {
          _isa_available = 5;
          _isa_enabled = v23 | 0x20;
        }
      }
    }
  }
  return 0;
}

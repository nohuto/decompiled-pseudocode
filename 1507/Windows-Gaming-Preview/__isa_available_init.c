/*
 * XREFs of __isa_available_init @ 0x180026514
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x180025C78 (__scrt_dllmain_after_initialize_c.c)
 * Callees:
 *     <none>
 */

int __cdecl _isa_available_init()
{
  int v5; // edi
  bool v7; // r8
  bool v8; // r11
  int v13; // r9d
  int v14; // ecx
  int v15; // edx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  int v23; // eax
  char v25; // [rsp+8h] [rbp-18h]

  v25 = 0;
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
  v14 = _RAX;
  if ( v7
    && ((v15 = _RAX & 0xFFF3FF0, (_RAX & 0xFFF3FF0) == 0x106C0)
     || v15 == 132704
     || v15 == 132720
     || (v16 = (unsigned int)(v15 - 198224), (unsigned int)v16 <= 0x20) && (v17 = 0x100010001LL, _bittest64(&v17, v16))) )
  {
    v18 = _favor | 1;
    _favor |= 1u;
  }
  else
  {
    v18 = _favor;
  }
  if ( v8 && (v14 & 0xFF00F00u) >= 0x600F00 )
  {
    v18 |= 4u;
    _favor = v18;
  }
  _RAX = 7LL;
  if ( v5 >= 7 )
  {
    __asm { cpuid }
    v25 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      _favor = v18 | 2;
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

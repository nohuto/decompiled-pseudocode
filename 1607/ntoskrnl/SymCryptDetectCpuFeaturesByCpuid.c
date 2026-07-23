/*
 * XREFs of SymCryptDetectCpuFeaturesByCpuid @ 0x14013E434
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14013E388 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 SymCryptDetectCpuFeaturesByCpuid()
{
  int v0; // edi
  unsigned __int8 *v1; // r9
  int v3; // r8d
  int v4; // r11d
  int v9; // esi
  int v10; // r10d
  int v11; // eax
  __int64 result; // rax
  unsigned int v37; // edx
  int v38; // [rsp+0h] [rbp-20h]
  int v39; // [rsp+4h] [rbp-1Ch]
  int v40; // [rsp+8h] [rbp-18h]
  int v41; // [rsp+Ch] [rbp-14h]

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_140279462;
  _RAX = 0LL;
  v3 = -2016;
  v4 = 0;
  __asm { cpuid }
  v9 = _RAX;
  v38 = _RAX;
  v39 = _RBX;
  v40 = _RCX;
  v41 = _RDX;
  do
  {
    v10 = *(v1 - 2);
    if ( v10 != v0 )
    {
      _RAX = *(v1 - 2);
      __asm { cpuid }
      v38 = _RAX;
      v0 = v10;
      v39 = _RBX;
      v40 = _RCX;
      v41 = _RDX;
    }
    if ( v10 > v9 || (v11 = *(&v38 + *(v1 - 1)), !_bittest(&v11, *v1)) )
      v3 |= *(_DWORD *)(v1 + 2);
    ++v4;
    v1 += 8;
  }
  while ( (unsigned __int64)v4 < 0xD );
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x8000000) == 0 )
    goto LABEL_13;
  __asm { xgetbv }
  if ( (_RAX & 6) != 6 )
LABEL_13:
    v3 |= 0x10u;
  if ( (v3 & 4) == 0 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RCX == 1145913699 && (_DWORD)_RDX == 1769238117 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      v37 = ((int)_RAX >> 8) & 0xF;
      if ( v37 == 15 )
        v37 = (unsigned __int8)((int)_RAX >> 20) + 15;
      if ( v37 < 0x15 )
        v3 |= 4u;
    }
  }
  _RAX = 1LL;
  g_SymCryptCpuFeaturesNotPresent = v3;
  __asm { cpuid }
  g_SymCryptCpuid1 = result;
  dword_1402FA8B4 = _RBX;
  dword_1402FA8B8 = _RCX;
  dword_1402FA8BC = _RDX;
  return result;
}

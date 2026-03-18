/*
 * XREFs of SymCryptDetectCpuFeaturesByCpuid @ 0x14013054C
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401304B0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 SymCryptDetectCpuFeaturesByCpuid()
{
  int v0; // edi
  unsigned __int8 *v1; // r9
  char v3; // r8
  int v4; // r11d
  int v9; // esi
  int v10; // r10d
  int v11; // eax
  __int64 result; // rax
  unsigned int v30; // ecx
  int v31; // [rsp+0h] [rbp-20h]
  int v32; // [rsp+4h] [rbp-1Ch]
  int v33; // [rsp+8h] [rbp-18h]
  int v34; // [rsp+Ch] [rbp-14h]

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_14024FC92;
  _RAX = 0LL;
  v3 = 64;
  v4 = 0;
  __asm { cpuid }
  v9 = _RAX;
  v31 = _RAX;
  v32 = _RBX;
  v33 = _RCX;
  v34 = _RDX;
  do
  {
    v10 = *(v1 - 2);
    if ( v10 != v0 )
    {
      _RAX = *(v1 - 2);
      __asm { cpuid }
      v31 = _RAX;
      v0 = v10;
      v32 = _RBX;
      v33 = _RCX;
      v34 = _RDX;
    }
    if ( v10 > v9 || (v11 = *(&v31 + *(v1 - 1)), !_bittest(&v11, *v1)) )
      v3 |= v1[1];
    ++v4;
    v1 += 4;
  }
  while ( (unsigned __int64)v4 < 0xA );
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x8000000) == 0 )
    goto LABEL_13;
  __asm { xgetbv }
  if ( (result & 6) != 6 )
LABEL_13:
    v3 |= 0x20u;
  if ( (v3 & 4) == 0 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RCX == 1145913699 && (_DWORD)_RDX == 1769238117 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      v30 = ((int)result >> 8) & 0xF;
      if ( v30 == 15 )
      {
        result = (unsigned __int8)((int)result >> 20);
        v30 = result + 15;
      }
      if ( v30 < 0x15 )
        v3 |= 4u;
    }
  }
  g_SymCryptCpuFeaturesNotPresent = v3;
  return result;
}

/*
 * XREFs of KiGetXSaveSupportedFeatures @ 0x140146424
 * Callers:
 *     KiInitializeXSave @ 0x1403D6360 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiGetXSaveSupportedFeatures(__int64 a1)
{
  __int64 result; // rax
  unsigned int v7; // r9d
  unsigned __int64 v12; // rdx
  unsigned __int64 v18; // rcx
  unsigned int *v19; // rdi
  _DWORD *v20; // rsi
  unsigned int v21; // ebp
  unsigned int i; // r10d
  unsigned int v28; // eax
  _DWORD *v29; // r11

  _RAX = 1LL;
  __asm { cpuid }
  v7 = 0;
  if ( (_RCX & 0x4000000) == 0 )
    goto LABEL_14;
  _RAX = 13LL;
  __asm { cpuid }
  result = (unsigned int)result;
  v12 = (unsigned int)result | ((unsigned __int64)(unsigned int)_RDX << 32);
  *(_QWORD *)a1 = v12;
  if ( (v12 & 3) == 3 )
  {
    *(_DWORD *)(a1 + 16) = _RCX;
    _RAX = 13LL;
    __asm { cpuid }
    *(_DWORD *)(a1 + 20) ^= (*(_DWORD *)(a1 + 20) ^ _RAX) & 1;
    LODWORD(_RAX) = *(_DWORD *)(a1 + 20) ^ (*(_DWORD *)(a1 + 20) ^ (2 * ((_RAX & 0xA) == 10))) & 2;
    *(_DWORD *)(a1 + 20) = _RAX;
    if ( (_RAX & 2) != 0 )
      v18 = (unsigned int)_RCX | ((unsigned __int64)(unsigned int)_RDX << 32);
    else
      v18 = 0LL;
    *(_QWORD *)(a1 + 536) = v18;
    v19 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 160;
    v20 = (_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 32) = 160;
    v21 = 576;
    *(_DWORD *)(a1 + 36) = 256;
    for ( i = 2; i < 0x40; ++i )
    {
      if ( ((1LL << i) & *(_QWORD *)a1) != 0 )
      {
        _RAX = 13LL;
        __asm { cpuid }
        *v20 = _RAX;
        v28 = _RBX + _RAX;
        *(v20 - 1) = _RBX;
        if ( v21 < v28 )
          v21 = v28;
        if ( (_RCX & 2) != 0 )
          *(_QWORD *)(a1 + 544) |= 1LL << i;
      }
      v20 += 2;
    }
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v21;
    if ( (result & 2) != 0 )
    {
      v29 = (_DWORD *)(a1 + 556);
      do
      {
        if ( ((1LL << v7) & *(_QWORD *)(a1 + 536)) != 0 )
        {
          _RAX = 13LL;
          __asm { cpuid }
          *v29 = result;
          if ( (_RCX & 2) != 0 )
            *(_QWORD *)(a1 + 544) |= 1LL << v7;
        }
        else
        {
          result = *v19;
          *v29 = result;
        }
        ++v7;
        ++v29;
        v19 += 2;
      }
      while ( v7 < 0x40 );
    }
  }
  else
  {
LABEL_14:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}

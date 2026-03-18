/*
 * XREFs of ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800024B4
 * Callers:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800024B4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180002534 (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800024B4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  int v3; // esi
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+70h] [rbp+18h]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v3 = -2147467259;
  v4 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v4;
  if ( (v4 & 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, a2) )
    {
      v3 = 0;
    }
    else if ( *(int *)(a1 + 136) > 0 )
    {
      v6 = 0LL;
      v11 = *(int *)(a1 + 136);
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v6);
        v7 = *(_QWORD *)(v10 + 48);
        if ( v7 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 9LL) )
          {
            v8 = *(_QWORD *)(v10 + 48);
            if ( v8 )
            {
              v3 = CFilterEffect::ContainEffectInChainInputs(v8, a2);
              if ( v3 >= 0 )
                break;
            }
          }
        }
        ++v6;
      }
      while ( v6 < v11 );
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x255u);
  }
  result = (unsigned int)v3;
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return result;
}

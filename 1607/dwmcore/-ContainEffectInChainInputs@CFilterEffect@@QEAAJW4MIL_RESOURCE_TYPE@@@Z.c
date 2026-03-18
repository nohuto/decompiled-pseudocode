/*
 * XREFs of ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800147D0
 * Callers:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800147D0 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001484C (-ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800147D0 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h]

  v3 = -2147467259;
  v4 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v4;
  if ( (v4 & 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1) )
    {
      v3 = 0;
    }
    else if ( *(int *)(a1 + 232) > 0 )
    {
      v6 = 0LL;
      v7 = *(int *)(a1 + 232);
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v6);
        v8 = *(_QWORD *)(v10 + 24);
        if ( v8 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 9LL) )
          {
            v9 = *(_QWORD *)(v10 + 24);
            if ( v9 )
            {
              v3 = CFilterEffect::ContainEffectInChainInputs(v9, a2);
              if ( v3 >= 0 )
                break;
            }
          }
        }
        ++v6;
      }
      while ( v6 < v7 );
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x27Fu);
  }
  result = (unsigned int)v3;
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return result;
}

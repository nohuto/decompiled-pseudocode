/*
 * XREFs of ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00E15EC
 * Callers:
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00E142C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004D4A4 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::Initialize(
        struct CRegion **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  __int128 v4; // xmm1
  int v6; // edi
  __int128 v7; // xmm0
  struct CBufferRealization *v8; // rbx
  _OWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  struct CBufferRealization *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_OWORD *)a3 + 1);
  v10[0] = *(_OWORD *)a3;
  v10[1] = v4;
  v6 = CRegion::Create(this + 37);
  if ( v6 >= 0 )
  {
    v7 = *(_OWORD *)a2;
    DWORD1(v10[0]) = 0;
    *((_OWORD *)this + 3) = v7;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_OWORD *)this + 10) = *((_OWORD *)a2 + 7);
    *((_OWORD *)this + 11) = *((_OWORD *)a2 + 8);
    *((_OWORD *)this + 12) = *((_OWORD *)a2 + 9);
    this[26] = (struct CRegion *)*((_QWORD *)a2 + 20);
    v6 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v10, &v11);
    if ( v6 >= 0 )
    {
      v8 = v11;
      v6 = (*((__int64 (__fastcall **)(struct CRegion **, struct CBufferRealization *))*this + 20))(this, v11);
      if ( v6 < 0 )
      {
        if ( v8 )
          (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v8)(v8, 1LL);
      }
    }
  }
  return (unsigned int)v6;
}

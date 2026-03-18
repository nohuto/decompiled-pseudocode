/*
 * XREFs of ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00DF7C8
 * Callers:
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00DF60C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C001FCC4 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0047AD0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::Initialize(
        CCompositionBuffer *this,
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
  v6 = CRegion::Create((struct CRegion **)this + 36);
  if ( v6 >= 0 )
  {
    v7 = *(_OWORD *)a2;
    DWORD1(v10[0]) = 0;
    *(_OWORD *)((char *)this + 40) = v7;
    *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
    *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 4);
    *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 5);
    *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 6);
    *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 7);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 8);
    *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 9);
    *((_QWORD *)this + 25) = *((_QWORD *)a2 + 20);
    v6 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v10, &v11);
    if ( v6 >= 0 )
    {
      v8 = v11;
      v6 = (*(__int64 (__fastcall **)(CCompositionBuffer *, struct CBufferRealization *))(*(_QWORD *)this + 160LL))(
             this,
             v11);
      if ( v6 < 0 )
      {
        if ( v8 )
          (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v8)(v8, 1LL);
      }
    }
  }
  return (unsigned int)v6;
}

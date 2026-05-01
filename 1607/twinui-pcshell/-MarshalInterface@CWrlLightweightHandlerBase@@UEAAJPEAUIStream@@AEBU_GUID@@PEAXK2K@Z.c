/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18002DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002B68C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DF6C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18002E0B8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMarshal@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  void **v11; // rax
  const struct _GUID *v12; // rdx
  HRESULT StdMarshaler; // esi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  void *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  void *pv; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h] BYREF

  v21 = 0LL;
  v11 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMarshal>>(&v21);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, v11);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v21 + 40LL))(
                     v21,
                     pstm,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       (char *)this + 8);
      if ( StdMarshaler >= 0 )
      {
        StdMarshaler = IStream_Write(pstm, (char *)this + 8, 4u);
        if ( StdMarshaler >= 0 )
        {
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                           pstm,
                           0LL,
                           1LL,
                           &v24);
          if ( StdMarshaler >= 0 )
          {
            StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)this + 88LL))(
                             this,
                             pstm,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
            if ( StdMarshaler >= 0 )
            {
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                               pstm,
                               0LL,
                               1LL,
                               &v23);
              if ( StdMarshaler >= 0 )
              {
                v14 = v23 - v24;
                v15 = *((unsigned int *)this + 2);
                if ( v23 - v24 <= v15 )
                {
                  if ( v23 - v24 < v15 )
                  {
                    if ( v15 < v14 || (v16 = v15 - v14, v16 > 0xFFFFFFFF) )
                    {
                      StdMarshaler = -2147024362;
                    }
                    else
                    {
                      v17 = 0LL;
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v16, 1uLL) )
                      {
                        v18 = CTCoAllocPolicy::Alloc((IMalloc *)(unsigned int)v16, 1, (unsigned int)v16, &pv);
                        v17 = pv;
                        StdMarshaler = v18;
                        if ( v18 >= 0 )
                          StdMarshaler = IStream_Write(pstm, pv, v16);
                      }
                      else
                      {
                        StdMarshaler = -2147024362;
                      }
                      CoTaskMemFree(v17);
                    }
                  }
                }
                else
                {
                  StdMarshaler = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)StdMarshaler;
}

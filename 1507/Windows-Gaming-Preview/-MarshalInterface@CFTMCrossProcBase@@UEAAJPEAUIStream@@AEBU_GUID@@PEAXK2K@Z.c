/*
 * XREFs of ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18001F740
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000AA3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18001F194 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F9D0 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     memset @ 0x1800269AC (memset.c)
 *     CoTaskMemFree_0 @ 0x180026A50 (CoTaskMemFree_0.c)
 *     CoTaskMemAlloc_0 @ 0x180026A5C (CoTaskMemAlloc_0.c)
 */

__int64 __fastcall CFTMCrossProcBase::MarshalInterface(
        LPUNKNOWN punkOuter,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  __int64 *v11; // rax
  const struct _GUID *v12; // rdx
  HRESULT FTM; // esi
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 lpVtbl_low; // rbx
  unsigned __int64 v17; // rbx
  void *v18; // rdi
  void *v19; // rax
  size_t v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF

  v23 = 0LL;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>(&v23);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v12, (void **)v11);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v23 + 40LL))(
            v23,
            pstm,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( FTM >= 0 && a5 != 3 )
    {
      v14 = (_QWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v14 || *(_QWORD *)GUID_NULL.Data4 != v14[1] )
      {
        FTM = IStream_Write(pstm, &punkOuter[3], 4u);
        if ( FTM >= 0 )
        {
          FTM = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                  pstm,
                  0LL,
                  1LL,
                  &v25);
          if ( FTM >= 0 )
          {
            FTM = ((__int64 (__fastcall *)(LPUNKNOWN, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))punkOuter->lpVtbl[3].AddRef)(
                    punkOuter,
                    pstm,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
            if ( FTM >= 0 )
            {
              FTM = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                      pstm,
                      0LL,
                      1LL,
                      &v24);
              if ( FTM >= 0 )
              {
                v15 = v24 - v25;
                lpVtbl_low = LODWORD(punkOuter[3].lpVtbl);
                if ( v24 - v25 <= lpVtbl_low )
                {
                  if ( v24 - v25 < lpVtbl_low )
                  {
                    if ( lpVtbl_low < v15 || (v17 = lpVtbl_low - v15, v17 > 0xFFFFFFFF) )
                    {
                      FTM = -2147024362;
                    }
                    else
                    {
                      v18 = 0LL;
                      if ( is_mul_ok((unsigned int)v17, 1uLL) )
                      {
                        v19 = CoTaskMemAlloc_0((unsigned int)v17);
                        v18 = v19;
                        if ( v19 )
                        {
                          v20 = CTCoAllocPolicy::_CoTaskMemSize(v19);
                          memset(v18, 0, v20);
                          FTM = IStream_Write(pstm, v18, v17);
                        }
                        else
                        {
                          FTM = -2147024882;
                        }
                      }
                      else
                      {
                        FTM = -2147024362;
                      }
                      CoTaskMemFree_0(v18);
                    }
                  }
                }
                else
                {
                  FTM = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)FTM;
}

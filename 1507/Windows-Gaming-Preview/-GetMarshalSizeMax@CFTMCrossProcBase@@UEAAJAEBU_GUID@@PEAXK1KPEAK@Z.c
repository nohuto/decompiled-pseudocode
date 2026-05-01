/*
 * XREFs of ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18001F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000AA3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F9D0 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetMarshalSizeMax(
        LPUNKNOWN punkOuter,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  __int64 *v12; // rax
  const struct _GUID *v13; // rdx
  int FTM; // edi
  _QWORD *v15; // rax
  unsigned int lpVtbl; // ecx
  unsigned int v17; // ecx
  __int64 v18; // rsi
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v20 = 0LL;
  *a7 = 0;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>(&v20);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v13, (void **)v12);
  if ( FTM < 0 )
    goto LABEL_12;
  FTM = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v20 + 32LL))(
          v20,
          a2,
          a3,
          a4,
          a5,
          a6,
          v7);
  if ( FTM < 0 )
    goto LABEL_12;
  if ( a4 == 3 )
    goto LABEL_12;
  v15 = (_QWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
  if ( *(_QWORD *)&GUID_NULL.Data1 == *v15 && *(_QWORD *)GUID_NULL.Data4 == v15[1] )
    goto LABEL_12;
  FTM = ((__int64 (__fastcall *)(LPUNKNOWN, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))punkOuter->lpVtbl[3].QueryInterface)(
          punkOuter,
          a2,
          a3,
          a4,
          a5,
          a6,
          &a7);
  if ( FTM < 0 )
    goto LABEL_12;
  _InterlockedExchange((volatile __int32 *)&punkOuter[3], (__int32)a7);
  lpVtbl = (unsigned int)punkOuter[3].lpVtbl;
  if ( lpVtbl + 4 >= lpVtbl )
  {
    v17 = *v7 + lpVtbl + 4;
    if ( v17 >= *v7 )
    {
      *v7 = v17;
      FTM = 0;
      goto LABEL_12;
    }
    *v7 = -1;
  }
  FTM = -2147024362;
LABEL_12:
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)FTM;
}

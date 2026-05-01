/*
 * XREFs of ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F9D0
 * Callers:
 *     ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x18001F390 (-GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x18001F500 (-DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z.c)
 *     ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18001F5A0 (-GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18001F740 (-MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     CoCreateFreeThreadedMarshaler_0 @ 0x180026A68 (CoCreateFreeThreadedMarshaler_0.c)
 */

__int64 __fastcall CFTMCrossProcBase::_GetFTM(LPUNKNOWN punkOuter, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // r14
  int v6; // ebx
  HRESULT v7; // eax
  HRESULT v8; // ebp
  signed int v9; // edi
  struct IUnknownVtbl *v10; // rdi
  struct IUnknownVtbl *lpVtbl; // rbx
  LPUNKNOWN v12; // r14
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp+10h] BYREF

  ppunkMarshal = a2;
  *a3 = 0LL;
  v3 = (RTL_SRWLOCK *)&punkOuter[4];
  AcquireSRWLockShared((PSRWLOCK)&punkOuter[4]);
  v6 = -(punkOuter[5].lpVtbl == 0LL);
  ReleaseSRWLockShared(v3);
  if ( v6 >= 0 )
    return (*(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, void **))punkOuter[5].lpVtbl->QueryInterface)(
             punkOuter[5].lpVtbl,
             &GUID_00000003_0000_0000_c000_000000000046,
             a3);
  ppunkMarshal = 0LL;
  v7 = CoCreateFreeThreadedMarshaler_0(punkOuter, &ppunkMarshal);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = v7;
  }
  else
  {
    AcquireSRWLockExclusive(v3);
    v9 = punkOuter[5].lpVtbl == 0LL ? 0x80004005 : 0;
    if ( !punkOuter[5].lpVtbl )
    {
      v10 = (struct IUnknownVtbl *)ppunkMarshal;
      if ( (LPUNKNOWN)punkOuter[5].lpVtbl != ppunkMarshal )
      {
        if ( ppunkMarshal )
          ((void (__fastcall *)(LPUNKNOWN))ppunkMarshal->lpVtbl->AddRef)(ppunkMarshal);
        lpVtbl = punkOuter[5].lpVtbl;
        punkOuter[5].lpVtbl = v10;
        if ( lpVtbl )
          (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
      }
      v9 = v8;
    }
    ReleaseSRWLockExclusive(v3);
  }
  v12 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v12->lpVtbl->Release)(v12);
  }
  if ( v9 >= 0 )
    return (*(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, void **))punkOuter[5].lpVtbl->QueryInterface)(
             punkOuter[5].lpVtbl,
             &GUID_00000003_0000_0000_c000_000000000046,
             a3);
  return (unsigned int)v9;
}

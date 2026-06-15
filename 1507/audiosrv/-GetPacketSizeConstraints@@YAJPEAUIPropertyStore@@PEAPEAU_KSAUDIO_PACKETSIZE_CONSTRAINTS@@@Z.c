/*
 * XREFs of ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@@Z @ 0x1800A8E94
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B4FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800690C4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetPacketSizeConstraints(struct IPropertyStore *a1, struct _KSAUDIO_PACKETSIZE_CONSTRAINTS **a2)
{
  struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *v4; // r14
  void *v5; // rcx
  int v6; // esi
  __int64 v7; // rbx
  __int64 v9; // [rsp+38h] [rbp-49h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-41h] BYREF
  __int64 v11; // [rsp+48h] [rbp-39h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-31h] BYREF
  size_t Size; // [rsp+58h] [rbp-29h]
  void *Src; // [rsp+60h] [rbp-21h]
  void *v15; // [rsp+68h] [rbp-19h] BYREF
  PROPVARIANT v16; // [rsp+70h] [rbp-11h] BYREF
  __int64 v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  __int64 v19; // [rsp+88h] [rbp+7h]
  _DWORD v20[6]; // [rsp+90h] [rbp+Fh] BYREF

  v19 = -2LL;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  pvar = 0LL;
  Size = 0LL;
  Src = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         &DEVPKEY_KsAudio_PacketSize_Constraints,
         &pvar);
  if ( v6 < 0 )
    goto LABEL_31;
  if ( !(_WORD)pvar )
  {
    v20[0] = 590439624;
    v20[1] = 1283267372;
    v20[2] = 1907779772;
    v20[3] = 1730509416;
    v20[4] = 1;
    ppv = 0LL;
    v9 = 0LL;
    v11 = 0LL;
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v6 < 0 )
      goto LABEL_4;
    v6 = ((__int64 (__fastcall *)(struct IPropertyStore *, _DWORD *, PROPVARIANT *))a1->lpVtbl->GetValue)(a1, v20, &v16);
    if ( v6 < 0 )
      goto LABEL_4;
    if ( (_WORD)v16 != 31 )
    {
      v6 = -2147023728;
LABEL_4:
      v7 = v11;
LABEL_5:
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      goto LABEL_31;
    }
    v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v17, &v9);
    if ( v6 < 0 )
      goto LABEL_4;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, 0LL, &v11);
    if ( v6 < 0 )
      goto LABEL_4;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &DEVPKEY_KsAudio_PacketSize_Constraints,
           &pvar);
    v7 = v11;
    if ( v6 < 0 )
      goto LABEL_5;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  if ( (_WORD)pvar != 65 || (unsigned int)Size < 0x28 )
    goto LABEL_30;
  v6 = CTCoAllocPolicy::Alloc(v5, 1, (unsigned int)Size, &v15);
  v4 = (struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *)v15;
  if ( v6 < 0 )
    goto LABEL_31;
  memcpy_0(v15, Src, (unsigned int)Size);
  if ( (unsigned int)Size < 24 * *((_DWORD *)v4 + 3) + 16 )
  {
LABEL_30:
    v6 = -2147023728;
    goto LABEL_31;
  }
  if ( a2 )
  {
    *a2 = v4;
    v4 = 0LL;
  }
  v6 = 0;
LABEL_31:
  CoTaskMemFree(v4);
  PropVariantClear(&pvar);
  PropVariantClear(&v16);
  return (unsigned int)v6;
}

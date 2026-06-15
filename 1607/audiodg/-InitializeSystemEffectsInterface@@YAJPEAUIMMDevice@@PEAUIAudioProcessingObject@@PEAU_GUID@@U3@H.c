/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000ED50
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     Template_jjt @ 0x140011698 (Template_jjt.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140011710 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  __int64 v8; // rcx
  GUID *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  APOInitSystemEffects2 *v13; // r8
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v18; // [rsp+50h] [rbp-B0h] BYREF
  APOInitSystemEffects2 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-40h] BYREF
  int v21; // [rsp+D0h] [rbp-30h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+D8h] [rbp-28h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+E0h] [rbp-20h]
  void *pReserved; // [rsp+E8h] [rbp-18h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+F0h] [rbp-10h]

  v17[1] = -2LL;
  v17[0] = 0LL;
  v16 = 0LL;
  memset_0(&v19, 0, sizeof(v19));
  v8 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v8 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v8 )
    v9 = a4;
  *a4 = *v9;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v16) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         v17) < 0 )
  {
    goto LABEL_15;
  }
  v18 = *a4;
  v12 = FillAPOInitSystemEffectsStructure(a1, a3, &v18, 0, eHostProcessConnector, &v19);
  if ( v12 < 0 )
    goto LABEL_16;
  if ( v16 )
  {
    v13 = &v19;
    v14 = 88LL;
  }
  else
  {
    if ( !v17[0] )
      goto LABEL_10;
    memset_0((char *)&v20 + 4, 0, 0x34uLL);
    v20 = *(_OWORD *)&v19.APOInit.cbSize;
    v21 = *(_DWORD *)&v19.APOInit.clsid.Data4[4];
    LODWORD(v20) = 56;
    pAPOEndpointProperties = v19.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v19.pAPOSystemEffectsProperties;
    pReserved = v19.pReserved;
    pDeviceCollection = v19.pDeviceCollection;
    v13 = (APOInitSystemEffects2 *)&v20;
    v14 = 56LL;
  }
  v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
          a2,
          v14,
          v13);
LABEL_10:
  if ( v12 < 0 )
    goto LABEL_16;
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
  {
    if ( !v16 )
      a4 = &GUID_00000000_0000_0000_0000_000000000000;
    Template_jjt(v11, v10, a3, a4);
  }
LABEL_15:
  v12 = 0;
LABEL_16:
  if ( v19.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v19.pAPOEndpointProperties->lpVtbl->Release)(v19.pAPOEndpointProperties);
    v19.pAPOEndpointProperties = 0LL;
  }
  if ( v19.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v19.pAPOSystemEffectsProperties->lpVtbl->Release)(v19.pAPOSystemEffectsProperties);
    v19.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v19.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v19.pDeviceCollection->lpVtbl->Release)(v19.pDeviceCollection);
    v19.pDeviceCollection = 0LL;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  return (unsigned int)v12;
}

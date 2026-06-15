/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140012FC0
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400133E0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     Template_jjt @ 0x14003D104 (Template_jjt.c)
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
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  GUID *v16; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // [rsp+20h] [rbp-D1h]
  __int64 v18; // [rsp+30h] [rbp-C1h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-B9h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-A1h] BYREF
  APOInitSystemEffects2 v21; // [rsp+60h] [rbp-91h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-31h] BYREF
  int v23; // [rsp+D0h] [rbp-21h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+D8h] [rbp-19h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+E0h] [rbp-11h]
  void *pReserved; // [rsp+E8h] [rbp-9h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+F0h] [rbp-1h]

  v19[1] = -2LL;
  v19[0] = 0LL;
  v18 = 0LL;
  v21.APOInit.cbSize = 0;
  memset_0(&v21.APOInit.clsid, 0, 0x54uLL);
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
         &v18) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         v19) < 0 )
  {
    goto LABEL_12;
  }
  v20 = *a4;
  v13 = FillAPOInitSystemEffectsStructure(a1, a3, &v20, v10, v17, &v21);
  if ( v13 < 0 )
    goto LABEL_13;
  if ( v18 )
  {
    v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
            a2,
            88LL,
            &v21);
  }
  else
  {
    if ( !v19[0] )
      goto LABEL_10;
    memset_0((char *)&v22 + 4, 0, 0x34uLL);
    v22 = *(_OWORD *)&v21.APOInit.cbSize;
    v23 = *(_DWORD *)&v21.APOInit.clsid.Data4[4];
    LODWORD(v22) = 56;
    pAPOEndpointProperties = v21.pAPOEndpointProperties;
    pAPOSystemEffectsProperties = v21.pAPOSystemEffectsProperties;
    pReserved = v21.pReserved;
    pDeviceCollection = v21.pDeviceCollection;
    v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
            a2,
            56LL,
            &v22);
  }
  v13 = v14;
LABEL_10:
  if ( v13 < 0 )
    goto LABEL_13;
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
  {
    v16 = &GUID_00000000_0000_0000_0000_000000000000;
    if ( v18 )
      v16 = a4;
    Template_jjt(v12, v11, a3, v16);
  }
LABEL_12:
  v13 = 0;
LABEL_13:
  if ( v21.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v21.pAPOEndpointProperties->lpVtbl->Release)(v21.pAPOEndpointProperties);
    v21.pAPOEndpointProperties = 0LL;
  }
  if ( v21.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v21.pAPOSystemEffectsProperties->lpVtbl->Release)(v21.pAPOSystemEffectsProperties);
    v21.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v21.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v21.pDeviceCollection->lpVtbl->Release)(v21.pDeviceCollection);
    v21.pDeviceCollection = 0LL;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
  return (unsigned int)v13;
}

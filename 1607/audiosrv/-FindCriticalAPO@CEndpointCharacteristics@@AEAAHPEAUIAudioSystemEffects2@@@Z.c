/*
 * XREFs of ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x18001D6D4
 * Callers:
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18001D3E0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180016A40 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::FindCriticalAPO(
        CEndpointCharacteristics *this,
        struct IAudioSystemEffects2 *a2)
{
  HRESULT (__stdcall *GetEffectsList)(IAudioSystemEffects2 *, LPGUID *, UINT *, HANDLE); // rax
  int EffectsList; // eax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  CEndpointCharacteristics *v8; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+10h] BYREF

  v8 = this;
  pv = 0LL;
  GetEffectsList = a2->lpVtbl->GetEffectsList;
  if ( (char *)GetEffectsList == (char *)CAPOWrapperClient::GetEffectsList )
    EffectsList = CAPOWrapperClient::GetEffectsList(
                    (CAPOWrapperClient *)a2,
                    (struct _GUID **)&pv,
                    (unsigned int *)&v8,
                    0LL);
  else
    EffectsList = ((__int64 (__fastcall *)(struct IAudioSystemEffects2 *, LPVOID *, CEndpointCharacteristics **, _QWORD))GetEffectsList)(
                    a2,
                    &pv,
                    &v8,
                    0LL);
  if ( EffectsList >= 0 && (v4 = 0, (_DWORD)v8) )
  {
    v5 = 1;
    while ( 1 )
    {
      v7 = *((_QWORD *)pv + 2 * v4) - *(_QWORD *)&GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data1;
      if ( !v7 )
        v7 = *((_QWORD *)pv + 2 * v4 + 1) - *(_QWORD *)GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data4;
      if ( !v7 )
        break;
      if ( ++v4 >= (unsigned int)v8 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  CoTaskMemFree(pv);
  return v5;
}

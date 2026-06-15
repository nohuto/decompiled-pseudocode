/*
 * XREFs of ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@1@@Z @ 0x18003C0A0
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18003B8D8 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     _recalloc @ 0x180043990 (_recalloc.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
        CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        char a4,
        struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *a5)
{
  HRESULT v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // esi
  GUID *p_pclsid; // rbp
  int v11; // r14d
  int v12; // eax
  bool v13; // sf
  int v14; // r14d
  void *v15; // rax
  GUID *v16; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  GUID pclsid; // [rsp+38h] [rbp-40h] BYREF

  pvar = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = 0;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a2->lpVtbl->GetValue)(
         a2,
         a3,
         &pvar) >= 0
    && (_WORD)pvar == 4127
    && (_DWORD)v19 )
  {
    v7 = 0LL;
    do
    {
      v6 = CLSIDFromString(*(LPCOLESTR *)(v20 + 8 * v7), &pclsid);
      if ( v6 < 0 )
        break;
      if ( a4 )
        goto LABEL_10;
      v8 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v8 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v8 )
      {
LABEL_10:
        v9 = 0;
        p_pclsid = &pclsid;
        while ( 1 )
        {
          v11 = *((_DWORD *)a5 + 2);
          v12 = *((_DWORD *)a5 + 3);
          if ( v11 == v12 )
          {
            if ( v12 )
            {
              v13 = (v11 & 0x40000000) != 0;
              v14 = 2 * v11;
              if ( v13 )
                goto LABEL_24;
            }
            else
            {
              v14 = 1;
            }
            if ( (unsigned __int64)v14 > 0x7FFFFFF || (v15 = _recalloc(*(void **)a5, v14, 0x10uLL)) == 0LL )
            {
LABEL_24:
              v6 = -2147024882;
              goto LABEL_22;
            }
            *((_DWORD *)a5 + 3) = v14;
            *(_QWORD *)a5 = v15;
          }
          v16 = (GUID *)(*(_QWORD *)a5 + 16LL * *((int *)a5 + 2));
          if ( v16 )
            *v16 = *p_pclsid;
          ++*((_DWORD *)a5 + 2);
          ++v9;
          ++p_pclsid;
          if ( v9 )
          {
            v6 = 0;
            break;
          }
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < (unsigned int)v19 );
  }
LABEL_22:
  PropVariantClear(&pvar);
  return (unsigned int)v6;
}

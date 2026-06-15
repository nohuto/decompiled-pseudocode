/*
 * XREFs of ??$FindFirstMatchingPreferredFormat@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@CEndpointCharacteristics@@AEAAJPEAUWAVEFORMATEXTENSIBLE@@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@Z @ 0x18008510C
 * Callers:
 *     ??$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180085CB4 (--$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristic.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520 (_lambda_54c77e54e42ef152cdcef462696c326e_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_33f85ea5a64814e7f8077c61f279f339_>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r15
  char *v12; // rdi
  __int16 v13; // dx
  bool v14; // r13
  int v15; // r8d
  unsigned __int16 v16; // cx
  int v17; // ebx
  _BYTE v19[4]; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+34h] [rbp-3Ch] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 372) )
  {
    v7 = *(_QWORD *)(a1 + 32);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_33f85ea5a64814e7f8077c61f279f339_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v6 = 8;
    v23 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      v8 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
        v8 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
        if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
          v9 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
        if ( !v9 )
          v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_33f85ea5a64814e7f8077c61f279f339_>'::`2'::PreferredFormatsLineIn;
      }
      else
      {
        v5 = 0LL;
        v6 = 0;
      }
    }
    PropVariantClear(&pvar);
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_33f85ea5a64814e7f8077c61f279f339_>'::`2'::PreferredFormatsRender;
    v6 = 4;
  }
  v10 = 0LL;
  v11 = v6;
  if ( v6 <= 0 )
    return 0LL;
  v12 = v5 + 4;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 + 2);
    v20 = 0;
    v14 = 0;
    *(_WORD *)(a2 + 2) = v13;
    v15 = *((_DWORD *)v12 - 1);
    *(_DWORD *)(a2 + 4) = v15;
    v16 = *(_WORD *)v12;
    *(_WORD *)(a2 + 14) = *(_WORD *)v12;
    *(_WORD *)(a2 + 18) = *((_WORD *)v12 + 1);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v12 + 2);
    *(_WORD *)(a2 + 12) = v13 * (v16 >> 3);
    *(_DWORD *)(a2 + 8) = v15 * (unsigned __int16)(v13 * (v16 >> 3));
    *(_WORD *)(a2 + 16) = 22;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*a3 + 24LL))(
            *a3,
            a3[1],
            *(unsigned int *)a3[1],
            &v20);
    if ( v17 < 0 )
      break;
    if ( v20 )
    {
      v19[0] = 0;
      lambda_54c77e54e42ef152cdcef462696c326e_::operator()(a3 + 3, a2, v19);
      if ( v19[0] )
      {
        v17 = CloneWaveFormat((const struct tWAVEFORMATEX *)a2, (struct tWAVEFORMATEX **)a3[2]);
        v14 = v17 >= 0;
      }
    }
    if ( v17 < 0 )
      break;
    if ( !v14 )
    {
      ++v10;
      v12 += 16;
      if ( v10 < v11 )
        continue;
    }
    return 0LL;
  }
  return (unsigned int)v17;
}

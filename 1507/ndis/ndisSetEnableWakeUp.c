/*
 * XREFs of ndisSetEnableWakeUp @ 0x1C00CB9C4
 * Callers:
 *     ndisOidPreEnableWakeUp @ 0x1C00C9EA0 (ndisOidPreEnableWakeUp.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     Template_jqxtpp @ 0x1C0043D14 (Template_jqxtpp.c)
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C0045A20 (ndisXlateWakeUpEnableToPMParametersOid.c)
 *     ndisPreSetPMParameters @ 0x1C00AC91C (ndisPreSetPMParameters.c)
 *     ndisSetMiniportEnableWakeUp @ 0x1C00CBBD8 (ndisSetMiniportEnableWakeUp.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00CBE60 (ndisSetOpenEnableWakeUp.c)
 */

unsigned __int8 __fastcall ndisSetEnableWakeUp(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 v2; // di
  _DWORD *v3; // rsi
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // zf
  unsigned __int8 v10; // al
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(_DWORD **)(a1 + 32);
  v5 = *(_QWORD *)a1;
  v15 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0xCu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v5, v1, v3);
  *(_DWORD *)(a1 + 40) = 0;
  if ( v3[12] < 4u )
  {
    v3[14] = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    v3[13] = 0;
LABEL_7:
    v2 = 1;
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = ndisSetOpenEnableWakeUp(v1, v3, &v15);
    v9 = v15 == 1;
    *(_DWORD *)(a1 + 40) = v7;
    if ( v9 )
    {
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_(0xDu, &WPP_fbb1998797815902974a7c4233493709_Traceguids);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
        Template_jqxtpp(
          *(_QWORD *)(v1 + 16),
          v8,
          (const GUID *)(*(_QWORD *)(v1 + 16) + 4064LL),
          *(_QWORD *)(v1 + 16) + 4064LL,
          *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4112LL),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 4096LL) + 1312LL),
          1,
          v1,
          (char)v3);
    }
    goto LABEL_7;
  }
  if ( *(_QWORD *)a1 )
  {
    v10 = *(_BYTE *)(v5 + 32);
    if ( v10 > 6u || v10 == 6 && *(_BYTE *)(v5 + 33) >= 0x14u )
    {
      ndisXlateWakeUpEnableToPMParametersOid((__int64)v3);
      *(_DWORD *)(a1 + 40) = v14;
      if ( v14 )
        goto LABEL_7;
      v2 = ndisPreSetPMParameters(a1);
    }
    else
    {
      v11 = ndisSetMiniportEnableWakeUp(v5, v3, &v15);
      v2 = v15;
      *(_DWORD *)(a1 + 40) = v11;
      if ( v2 == 1 )
      {
        if ( (unsigned __int8)byte_1C0085312 >= 4u )
          WPP_SF_qqq(0xEu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v5, v1, v3);
        if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
          Template_jqxtpp(
            v13,
            v12,
            (const GUID *)(v5 + 4064),
            v5 + 4064,
            *(_DWORD *)(v5 + 4112),
            *(_QWORD *)(v5 + 4080),
            0,
            v1,
            (char)v3);
      }
    }
  }
LABEL_8:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0xFu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v5, v1, v3);
  return v2;
}

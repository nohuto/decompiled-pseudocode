/*
 * XREFs of ndisOidPreIovCreateNicSwitch @ 0x1C00D9930
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qqqDD @ 0x1C0044730 (WPP_SF_qqqDD.c)
 *     WPP_SF_qqqq @ 0x1C0044798 (WPP_SF_qqqq.c)
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D876C (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreIovCreateNicSwitch(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v4; // di
  char v5; // r10
  unsigned __int8 v6; // r11
  int v7; // r11d
  bool v8; // zf
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  wchar_t *Buffer; // r8
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  v5 = byte_1C00895E1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
  {
    WPP_SF_qqqq(0xCu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v1, a1[3], a1[1], v3);
    v5 = byte_1C00895E1;
  }
  v6 = 0;
  if ( !*a1 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported((__int64)v1) )
  {
    v8 = ndisGetOidSourceHandle((__int64)a1[4]) == (_QWORD)&ndisIntReqGeneric;
    goto LABEL_7;
  }
  NicSwitchCurrentCapabilities = v1->NicSwitchCurrentCapabilities;
  if ( !NicSwitchCurrentCapabilities
    || NicSwitchCurrentCapabilities->Header.Revision < 2u
    || NicSwitchCurrentCapabilities->Header.Size < 0x74u
    || !NicSwitchCurrentCapabilities->MaxNumSwitches
    || *((_DWORD *)&v3->Header + 1) != 12 )
  {
    goto LABEL_8;
  }
  *((_DWORD *)a1 + 10) = v7;
  if ( v3->PcwDatapathEventMask >= 0x224u )
  {
    if ( HIDWORD(v3->Reserved28) < 0x224 )
    {
      HIDWORD(v3->ShortRef.SpinLock) = 548;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
  else
  {
    HIDWORD(v3->ShortRef.SpinLock) = 548;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  if ( *((_DWORD *)a1 + 10) == v7 )
  {
    Buffer = v3->Reserved4.Buffer;
    v12 = *((_BYTE *)Buffer + 1);
    if ( v12
      && *((_DWORD *)Buffer + 3) == v7
      && *((_DWORD *)Buffer + 2) == 1
      && *((_DWORD *)Buffer + 133) <= v1->NicSwitchCurrentCapabilities->MaxNumVFs )
    {
      if ( v12 < 2u )
      {
        v8 = ndisIovHWvRSSSupported(v1) == 0;
LABEL_7:
        if ( !v8 )
        {
LABEL_8:
          *((_DWORD *)a1 + 10) = -1073741637;
          goto LABEL_9;
        }
LABEL_4:
        v4 = v6;
        goto LABEL_9;
      }
      if ( !ndisIovHWvRSSSupported(v1) )
      {
        if ( *(_DWORD *)(v13 + 548) != 1 )
          goto LABEL_8;
        goto LABEL_4;
      }
      v15 = *(_DWORD *)(v13 + 548);
      if ( v15 && v15 <= *(_DWORD *)(v14 + 128) )
        goto LABEL_4;
    }
    *((_DWORD *)a1 + 10) = -1073741811;
  }
LABEL_9:
  if ( (unsigned __int8)v5 >= 4u )
  {
    v17 = *((_DWORD *)a1 + 10);
    LODWORD(v16) = v4;
    WPP_SF_qqqDD(0xDu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, *a1, a1[3], a1[1], v16, v17);
  }
  return v4;
}

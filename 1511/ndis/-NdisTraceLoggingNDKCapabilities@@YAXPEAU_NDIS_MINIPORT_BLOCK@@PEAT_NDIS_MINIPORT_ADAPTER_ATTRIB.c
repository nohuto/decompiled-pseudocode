/*
 * XREFs of ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C006DC64
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C009A930 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingNDKCapabilities(
        const struct _TlgProvider_t *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  _DWORD *MiniportAddDeviceContext; // rax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // r10d
  int v12; // r11d
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  __int64 *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  int *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]

  LOBYTE(v13) = 0;
  v22 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      LOBYTE(v13) = a2->NDKAttributes.Enabled;
      if ( (_BYTE)v13 )
      {
        MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
        if ( MiniportAddDeviceContext )
        {
          v2 = MiniportAddDeviceContext[5];
          v3 = MiniportAddDeviceContext[6];
          v4 = MiniportAddDeviceContext[7];
          v5 = MiniportAddDeviceContext[8];
          v6 = MiniportAddDeviceContext[9];
          v22 = *((_QWORD *)MiniportAddDeviceContext + 5);
        }
      }
    }
  }
  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v25 = 16LL;
      p_RegHandle = &v8[63].RegHandle;
      v26 = &v13;
      v28 = &v21;
      v30 = &v16;
      v32 = &v20;
      v34 = &v18;
      v36 = &v14;
      v38 = &v15;
      v40 = &v17;
      v42 = &v19;
      v44 = &v22;
      v27 = 1LL;
      LODWORD(v21) = (_DWORD)v10;
      v29 = 4LL;
      v16 = v11;
      v31 = 4LL;
      v20 = v12;
      v33 = 4LL;
      v18 = v2;
      v35 = 4LL;
      v14 = v3;
      v37 = 4LL;
      v15 = v4;
      v39 = 4LL;
      v17 = v5;
      v41 = 4LL;
      v19 = v6;
      v43 = 4LL;
      v45 = 8LL;
      TlgWrite(v8, &unk_1C0072CE6, v9, v10, 0xDu, &pData);
    }
  }
}

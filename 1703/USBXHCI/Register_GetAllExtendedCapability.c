/*
 * XREFs of Register_GetAllExtendedCapability @ 0x1C000AED8
 * Callers:
 *     Wmi_CreateControllerCapabilities @ 0x1C0008090 (Wmi_CreateControllerCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 */

void __fastcall Register_GetAllExtendedCapability(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  int v5; // ecx
  _DWORD *v6; // rdi
  _DWORD *v7; // rsi
  __int64 i; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  _DWORD *v12; // rsi
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD **)(a1 + 56);
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *v2;
      *(_DWORD *)a2 = *v2;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v16) = *(unsigned __int8 *)(a2 + 1);
        LODWORD(v15) = (unsigned __int8)v5;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          5u,
          5u,
          0x44u,
          (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
          v15,
          v16);
      }
      if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
        break;
      if ( (unsigned __int8)*(_DWORD *)a2 == 2 )
      {
        v6 = (_DWORD *)a2;
        v7 = v2;
        for ( i = 4LL; i; --i )
          *v6++ = *v7++;
        v9 = *(_DWORD *)(a2 + 8);
        if ( v9 >= 0x10000000 )
        {
          v10 = v9 >> 28;
          v11 = (_DWORD *)(a2 + 16);
          goto LABEL_11;
        }
      }
LABEL_14:
      v13 = *(_BYTE *)(a2 + 1);
      if ( !v13 )
        return;
      v14 = 4LL * v13;
      v2 = (_DWORD *)((char *)v2 + v14);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return;
      a2 += v14;
    }
    v11 = (_DWORD *)a2;
    v10 = 2LL;
LABEL_11:
    v12 = v2;
    while ( v10 )
    {
      *v11++ = *v12++;
      --v10;
    }
    goto LABEL_14;
  }
}

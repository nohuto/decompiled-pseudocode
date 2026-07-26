/*
 * XREFs of ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00D94C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_qLLd @ 0x1C006C8B8 (WPP_SF_qLLd.c)
 */

__int64 __fastcall NdisPDPIQueueControl(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  int v11; // r15d
  __int64 v13; // rbx
  int v14; // ecx
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned __int16 v18; // cx
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+90h] [rbp+18h] BYREF

  v8 = *(_QWORD *)(a1 + 24);
  v11 = a2;
  v13 = *(_QWORD *)(v8 + 40);
  v21 = 0;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qdD(0x34u, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, a2, a3);
  if ( a3 != 1 )
  {
    if ( a3 <= 1 )
      goto LABEL_35;
    if ( a3 <= 3 )
    {
      if ( *(_BYTE *)(v8 + 68) )
        goto LABEL_8;
    }
    else
    {
      if ( a3 != 4 )
      {
        if ( a3 == 5 )
          goto LABEL_8;
LABEL_35:
        v15 = -1073741637;
        goto LABEL_12;
      }
      if ( *(_BYTE *)(v8 + 68) )
      {
        if ( *(_BYTE *)(v8 + 69) )
        {
          v15 = -1073741436;
          goto LABEL_12;
        }
        if ( v11 || !a4 || a5 < 4 )
          goto LABEL_11;
        a2 = (unsigned int)*a4;
        v21 = a2;
        if ( (unsigned int)a2 > 0xFFFF )
        {
          v15 = -1073741585;
          goto LABEL_12;
        }
        if ( (_DWORD)a2 )
          v21 = (*(unsigned __int16 *)(*(_QWORD *)(v13 + 64) + 112LL) << 16) | a2;
        a4 = &v21;
        v14 = 4;
        goto LABEL_26;
      }
    }
    v15 = -1073741808;
    goto LABEL_12;
  }
LABEL_8:
  if ( v11 || !a4 || (v14 = a5, a5 < 4) )
  {
LABEL_11:
    v15 = -1073741811;
    goto LABEL_12;
  }
LABEL_26:
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *, int, __int64, int, __int64))(*(_QWORD *)(v13 + 88)
                                                                                              + 88LL))(
          a1,
          0LL,
          (unsigned int)a3,
          a4,
          v14,
          a6,
          a7,
          a8);
  if ( (v15 & 0x80000000) == 0 )
  {
    switch ( a3 )
    {
      case 1:
        v17 = *a4;
        *(_DWORD *)(v8 + 200) = *a4;
        if ( (unsigned __int8)byte_1C0083724 < 4u )
          return v15;
        v18 = 53;
        break;
      case 2:
        v17 = *a4;
        *(_DWORD *)(v8 + 80) = *a4;
        if ( (unsigned __int8)byte_1C0083724 < 4u )
          return v15;
        v18 = 55;
        break;
      case 3:
        v17 = *a4;
        *(_DWORD *)(v8 + 84) = *a4;
        if ( (unsigned __int8)byte_1C0083724 < 4u )
          return v15;
        v18 = 56;
        break;
      case 4:
        v17 = *a4;
        *(_DWORD *)(v8 + 88) = *a4;
        if ( (unsigned __int8)byte_1C0083724 < 4u )
          return v15;
        v18 = 54;
        break;
      default:
        v17 = *a4;
        *(_DWORD *)(v8 + 204) = *a4;
        if ( (unsigned __int8)byte_1C0083724 < 4u )
          return v15;
        v18 = 57;
        break;
    }
    WPP_SF_qD(v18, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, a1, v17);
  }
LABEL_12:
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    LODWORD(v20) = v15;
    LODWORD(v19) = a3;
    WPP_SF_qLLd(0x3Au, a2, a1, v11, v19, v20);
  }
  return v15;
}

/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C002EA58
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0030304 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0021908 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002B214 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002B6AC (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  unsigned __int8 *v8; // rdi
  int v9; // ebp
  char v10; // si
  __int64 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 v17; // al
  unsigned __int16 v18; // r9
  ULONG v19; // edx
  __int64 v20; // r12
  unsigned __int8 *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // rdx
  unsigned __int8 *v25; // rcx
  ULONG *v26; // rdi
  unsigned __int8 v27; // cl
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v31; // [rsp+50h] [rbp-58h]
  unsigned __int8 *v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h]
  __int64 v34; // [rsp+68h] [rbp-40h]
  ULONG v36; // [rsp+B8h] [rbp+10h]
  int v37; // [rsp+C8h] [rbp+20h] BYREF

  v5 = a4;
  v8 = a1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v37 = 0;
    v5 = &v37;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = 1;
  v11 = a5;
  v12 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x14u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 251LL);
    if ( v12 < 0x14 )
    {
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v11, 2u, v14, 0x8Du, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v9, *v8, 20);
      goto LABEL_14;
    }
    *v5 = 2;
    *a3 = 20;
    WPP_RECORDER_SF_DDDD(v11, v13, v14, 0x8Cu, v29);
  }
  if ( *a3 > v12 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x8Eu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v9);
    v15 = 253LL;
    goto LABEL_12;
  }
  if ( v8[3] )
  {
    if ( *(_BYTE *)(a2 + 15) )
      *v5 = 2;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0x8Fu, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v8[3]);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 195LL);
  }
  if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_NULL.Data4 )
  {
    *v5 = 1;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0x90u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v15 = 196LL;
LABEL_12:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
    && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) )
    {
      *v5 = 1;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x91u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
      v15 = 197LL;
      goto LABEL_12;
    }
    v17 = *v8;
    if ( *v8 < 0x1Cu )
    {
      v18 = 146;
LABEL_30:
      *v5 = 1;
      LODWORD(v30) = *v8;
      WPP_RECORDER_SF_d(v11, 2u, 5u, v18, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v30);
      v15 = 198LL;
      goto LABEL_12;
    }
    if ( ((v17 - 4) & 7) != 0 )
    {
      v18 = 147;
      goto LABEL_30;
    }
    v19 = 0;
    v36 = 0;
    v20 = (unsigned int)(((unsigned __int64)v17 - 28) >> 3) + 1;
    if ( (unsigned int)(((unsigned __int64)v17 - 28) >> 3) != -1 )
    {
      v21 = v8 + 20;
      v22 = (unsigned int)v20;
      v31 = v8 + 20;
      v23 = 1;
      v34 = (unsigned int)v20;
      do
      {
        if ( v23 < (unsigned int)v20 )
        {
          v24 = (unsigned int)v20 - v23;
          v33 = v24;
          v25 = &v8[8 * v23 + 20];
          v32 = v25;
          do
          {
            if ( *(_DWORD *)v25 == *(_DWORD *)v31 )
            {
              *v5 = 1;
              *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = 0LL;
              LODWORD(v30) = *(_DWORD *)v31;
              WPP_RECORDER_SF_d(v11, 2u, 5u, 0x94u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v30);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 199LL);
              v25 = v32;
              v24 = v33;
            }
            v25 += 8;
            --v24;
            v32 = v25;
            v33 = v24;
          }
          while ( v24 );
          v8 = a1;
          v21 = v31;
          v22 = v34;
        }
        v21 += 8;
        ++v23;
        --v22;
        v31 = v21;
        v34 = v22;
      }
      while ( v22 );
      v19 = 0;
    }
    if ( !(_DWORD)v20 )
      goto LABEL_51;
    v26 = (ULONG *)(v8 + 20);
    do
    {
      if ( *v26 > v19 )
      {
        if ( RtlIsNtDdiVersionAvailable(*v26) )
        {
          v19 = *v26;
          v36 = *v26;
          *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = v26;
        }
        else
        {
          v19 = v36;
        }
      }
      v26 += 2;
      --v20;
    }
    while ( v20 );
    if ( !v19 )
    {
LABEL_51:
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x95u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 200LL);
    }
  }
  else if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
         && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
  {
    if ( *v8 < 0x1Au )
    {
      *v5 = 1;
      LODWORD(v30) = *v8;
      WPP_RECORDER_SF_d(v11, 2u, 5u, 0x96u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v30);
      v15 = 250LL;
      goto LABEL_12;
    }
    v27 = v8[20];
    if ( v27 == 1 )
    {
      if ( *v8 != 26 )
      {
        *v5 = 1;
        LODWORD(v30) = *v8;
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0x97u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v30);
        v15 = 247LL;
        goto LABEL_12;
      }
    }
    else if ( !v27 )
    {
      *v5 = 1;
      LODWORD(v30) = v8[20];
      WPP_RECORDER_SF_d(v11, 2u, 5u, 0x98u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v30);
      v15 = 249LL;
      goto LABEL_12;
    }
    v28 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v28 + 56) )
    {
      *v5 = 1;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0x99u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
      v15 = 248LL;
      goto LABEL_12;
    }
    *(_QWORD *)(v28 + 56) = v8;
  }
LABEL_14:
  if ( *v5 )
  {
    v10 = 0;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0x9Au, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
  }
  return v10;
}

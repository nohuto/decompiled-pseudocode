/*
 * XREFs of ndisWmiQuerySingleInstance @ 0x1C00A8144
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A7D9C (ndisWMIDispatch.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisWmiGetGuid @ 0x1C001A4CC (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisQueryGuidDataSize @ 0x1C00A835C (ndisQueryGuidDataSize.c)
 *     ndisQueryGuidData @ 0x1C00A84E8 (ndisQueryGuidData.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C00F9C4C (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C00F9EA0 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  PVOID v8; // rcx
  signed __int32 v9; // eax
  _LIST_ENTRY *v10; // r12
  __int64 v11; // rax
  wchar_t *v12; // rdx
  int GuidData; // ebx
  _LIST_ENTRY *v14; // r13
  _NDIS_BIND_PATHS *BindPaths; // rcx
  __int64 v17; // r15
  unsigned int v18; // r14d
  size_t v19; // rdx
  void *v20; // rcx
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // r14
  __int64 v23; // rdx
  unsigned __int16 v24; // cx
  unsigned int *v25; // rax
  int v26; // [rsp+28h] [rbp-38h]
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-18h] BYREF
  size_t Size; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+50h]
  unsigned int *v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  a5 = 0LL;
  if ( (unsigned __int8)byte_1C0085319 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
  v8 = ImageSectionHandle;
  v9 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v9 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v8 = ImageSectionHandle;
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v8 = ImageSectionHandle;
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(v8);
  *a4 = 0;
  v10 = 0LL;
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
    goto LABEL_19;
  v11 = *(unsigned int *)(a2 + 48);
  v12 = (wchar_t *)(v11 + a2 + 2);
  GuidData = 0;
  v14 = 0LL;
  String2.Buffer = v12;
  String2.MaximumLength = *(_WORD *)(v11 + a2);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v12 && v12[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v14 = Flink - 20;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(&Flink[-20], v23) )
        {
          if ( (unsigned __int8)byte_1C0085319 >= 2u )
            WPP_SF_q(0xAu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
          GuidData = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v14 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( (unsigned __int8)byte_1C0085319 >= 4u )
        WPP_SF_qZ(0xBu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1, (__int64 *)&String2);
      GuidData = -1073741162;
    }
    if ( GuidData < 0 )
      goto LABEL_13;
    v10 = v14;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C0085319 >= 2u )
      WPP_SF_q(0xCu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
    GuidData = -1073741162;
  }
  if ( GuidData < 0 )
  {
LABEL_13:
    if ( (unsigned __int8)byte_1C0085319 >= 2u )
      WPP_SF_q(0x2Cu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
    goto LABEL_15;
  }
  if ( !v10 )
  {
LABEL_19:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths);
  }
  if ( (int)ndisWmiGetGuid(&v28, (__int64)a1, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C0085319 >= 2u )
      WPP_SF_q(0x2Du, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
    v17 = a5;
    GuidData = -1073741811;
    goto LABEL_28;
  }
  v17 = a5;
  GuidData = ndisQueryGuidDataSize(&Size, a1, v10, a2 + 24, a5);
  if ( GuidData < 0 )
  {
    if ( (unsigned __int8)byte_1C0085319 < 2u )
      goto LABEL_28;
    v24 = 46;
LABEL_57:
    WPP_SF_q(v24, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1);
    goto LABEL_28;
  }
  v18 = Size + *(_DWORD *)(a2 + 56);
  if ( v18 < (unsigned int)Size )
  {
    GuidData = -1073741823;
    goto LABEL_28;
  }
  if ( v31 < v18 )
  {
    v25 = v32;
    if ( v31 < 0x38 )
    {
      GuidData = -1073741789;
      *v32 = 4;
      goto LABEL_28;
    }
    *(_DWORD *)(a2 + 44) |= 0x20u;
    *(_DWORD *)a2 = 56;
    *(_DWORD *)(a2 + 48) = v18;
    *v25 = 56;
    goto LABEL_27;
  }
  v19 = (unsigned int)Size;
  v20 = (void *)(a2 + *(unsigned int *)(a2 + 56));
  v17 = a5;
  v27 = a5;
  *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)a2 = v18;
  *(_DWORD *)(a2 + 60) = v19;
  GuidData = ndisQueryGuidData(v20, v19, a1, a2 + 24, v26, v27);
  if ( GuidData < 0 )
  {
    if ( (unsigned __int8)byte_1C0085319 < 2u )
      goto LABEL_28;
    v24 = 47;
    goto LABEL_57;
  }
  *v32 = v18;
LABEL_27:
  GuidData = 0;
LABEL_28:
  if ( v10 )
    ndisDereferenceVcPtr(v10);
  if ( v17 )
    ndisDereferenceMiniport(v17, 0x5Eu);
LABEL_15:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085319 >= 4u )
    WPP_SF_qD(0x30u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a1, GuidData);
  return (unsigned int)GuidData;
}

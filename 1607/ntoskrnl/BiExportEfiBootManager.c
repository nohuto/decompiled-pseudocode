/*
 * XREFs of BiExportEfiBootManager @ 0x1406D4BB8
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x1406D4EEC (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BiGetElement @ 0x1406D2944 (BiGetElement.c)
 *     BiDeleteEfiVariable @ 0x1406D4940 (BiDeleteEfiVariable.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D54D0 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D5704 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D57B4 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1406D5868 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1406D58BC (BiSetBootOptions.c)
 *     BiTranslateDisplayOrder @ 0x1406D59C4 (BiTranslateDisplayOrder.c)
 *     BiTranslateObjectIdentifier @ 0x1406D5B04 (BiTranslateObjectIdentifier.c)
 */

__int64 __fastcall BiExportEfiBootManager(void *a1, __int64 a2)
{
  void *v2; // r13
  ULONG v3; // edi
  ULONG *v4; // r14
  void *v5; // r15
  void *v6; // rsi
  NTSTATUS v7; // eax
  int v8; // ebx
  int Element; // eax
  SIZE_T v10; // rdx
  PVOID PoolWithTag; // rax
  __int64 v12; // rbx
  int v13; // r15d
  unsigned int v14; // ebx
  int v15; // eax
  ULONG v16; // eax
  int v17; // eax
  int v18; // eax
  ULONG v20; // [rsp+20h] [rbp-39h] BYREF
  _DWORD Count[3]; // [rsp+24h] [rbp-35h] BYREF
  void *Buf1; // [rsp+30h] [rbp-29h] BYREF
  void *Buf2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v24; // [rsp+40h] [rbp-19h]
  PVOID P; // [rsp+48h] [rbp-11h] BYREF
  ULONG *v26; // [rsp+50h] [rbp-9h] BYREF
  void *v27; // [rsp+58h] [rbp-1h] BYREF
  _DWORD *v28; // [rsp+60h] [rbp+7h] BYREF
  _BOOT_OPTIONS BootOptions; // [rsp+68h] [rbp+Fh] BYREF

  v24 = a2;
  Buf1 = 0LL;
  v27 = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0;
  *(_QWORD *)&Count[1] = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  Buf2 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, (PHANDLE)&Count[1]);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      v8 = 0;
    goto LABEL_46;
  }
  Element = BiGetElement(*(HANDLE *)&Count[1], 0x24000001u, &P, Count);
  v8 = Element;
  if ( Element >= 0 )
  {
    v10 = 4LL * (Count[0] >> 4);
    Count[0] >>= 4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
    Buf1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_44;
    }
    v12 = v24;
    BiTranslateDisplayOrder(v24, P, PoolWithTag, Count);
LABEL_10:
    v13 = BiQueryBootEntryOrder(&Buf2, &v20);
    v8 = BiHandleFirmwareDefaultEntry(v12, *(_QWORD *)&Count[1], &Buf1, Count);
    if ( v8 < 0 )
      goto LABEL_39;
    v14 = Count[0];
    if ( v13 < 0 || !Count[0] || v20 != Count[0] || memcmp(Buf1, Buf2, 4LL * Count[0]) )
    {
      v8 = BiSetBootEntryOrder((PULONG)Buf1, (PULONG)v14);
      if ( v8 < 0 )
        goto LABEL_39;
    }
    BootOptions.Length = 24;
    BootOptions.Version = 1;
    v15 = BiGetElement(*(HANDLE *)&Count[1], 0x25000004u, &v26, &v20);
    v4 = v26;
    v8 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741275 )
        goto LABEL_39;
      v8 = BiDeleteEfiVariable(L"Timeout");
      if ( v8 < 0 )
        goto LABEL_39;
      BootOptions.Timeout = 0;
    }
    else
    {
      v16 = -1;
      v3 = 1;
      if ( *(_QWORD *)v26 <= 0xFFFFFFFFuLL )
        v16 = *v26;
      BootOptions.Timeout = v16;
    }
    v17 = BiGetElement(*(HANDLE *)&Count[1], 0x24000002u, &v27, &v20);
    v2 = v27;
    v8 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741275 )
      {
        v8 = BiDeleteEfiVariable(L"BootNext");
        if ( v8 >= 0 )
        {
          BootOptions.NextBootEntryId = 0;
LABEL_29:
          v20 = 0;
          v18 = BiQueryBootOptions(&v28, &v20);
          v6 = v28;
          if ( v18 >= 0 && *v28 == BootOptions.Version )
          {
            if ( (v3 & 1) != 0 && v28[2] == BootOptions.Timeout )
              v3 &= ~1u;
            if ( (v3 & 2) != 0 && v28[4] == BootOptions.NextBootEntryId )
              v3 &= ~2u;
          }
          if ( v3 )
            v8 = BiSetBootOptions(&BootOptions, v3);
        }
      }
    }
    else
    {
      v3 |= 2u;
      v8 = BiTranslateObjectIdentifier(v24, v27, &v20);
      if ( v8 >= 0 )
      {
        BootOptions.NextBootEntryId = v20;
        goto LABEL_29;
      }
    }
LABEL_39:
    if ( Buf1 )
      ExFreePoolWithTag(Buf1, 0x4B444342u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4B444342u);
    v5 = Buf2;
    goto LABEL_44;
  }
  if ( Element == -1073741275 )
  {
    Count[0] = 0;
    v12 = v24;
    goto LABEL_10;
  }
LABEL_44:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_46:
  if ( *(_QWORD *)&Count[1] )
    BcdCloseObject(*(HANDLE *)&Count[1]);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v8;
}

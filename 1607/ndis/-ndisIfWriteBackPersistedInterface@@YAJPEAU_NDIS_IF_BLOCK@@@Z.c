/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00C3E60
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00C4B80 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x1C0042E80 (WPP_SF__guid_d.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AB064 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z @ 0x1C00E28C4 (-SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2950 (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  _GUID *p_InterfaceGuid; // rsi
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  p_InterfaceGuid = &a1->InterfaceGuid;
  v3 = ndisIfOpenInterfacePersistedStorage(&a1->InterfaceGuid, (struct KRegKey *)&Handle, 2u);
  if ( v3 >= 0 )
  {
    v4 = KRegKey::SetValueUlong((KRegKey *)&Handle, L"MediaType", a1->MediaType);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( (unsigned __int8)byte_1C00895DD < 2u )
        goto LABEL_16;
      v6 = 174;
      goto LABEL_11;
    }
    v4 = KRegKey::SetValueUlong((KRegKey *)&Handle, L"PhysicalMediaType", a1->PhysicalMediumType);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( (unsigned __int8)byte_1C00895DD < 2u )
        goto LABEL_16;
      v6 = 175;
      goto LABEL_11;
    }
    v4 = KRegKey::SetValueBlob(
           (KRegKey *)&Handle,
           L"CurrentAddress",
           a1->ifPhysAddress.Length,
           a1->ifPhysAddress.Address);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( (unsigned __int8)byte_1C00895DD < 2u )
        goto LABEL_16;
      v6 = 176;
      goto LABEL_11;
    }
    v4 = KRegKey::SetValueBlob(
           (KRegKey *)&Handle,
           L"PermanentAddress",
           a1->PermanentPhysAddress.Length,
           a1->PermanentPhysAddress.Address);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v3 = 0;
    }
    else if ( (unsigned __int8)byte_1C00895DD >= 2u )
    {
      v6 = 177;
LABEL_11:
      WPP_SF__guid_d(v6, v5, (__int64)p_InterfaceGuid, v4);
    }
  }
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}

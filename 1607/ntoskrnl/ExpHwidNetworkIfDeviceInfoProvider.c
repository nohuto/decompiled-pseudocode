/*
 * XREFs of ExpHwidNetworkIfDeviceInfoProvider @ 0x1403E247C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404D8AA8 (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140500D54 (ExpHwidSendSynchronousIrpToDevice.c)
 */

__int64 __fastcall ExpHwidNetworkIfDeviceInfoProvider(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // rdi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int appended; // esi
  unsigned int v11; // esi
  char *PoolWithTag; // rax
  unsigned __int16 v13; // ax
  _DWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+60h] [rbp-20h] BYREF
  __int16 v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    v18 = 66067;
    v7 = ExpHwidSendSynchronousIrpToDevice(a2, 1507330LL, &v18);
    v8 = v18;
    if ( v7 < 0 )
      v8 = v7;
    v18 = v8;
    v16 = 16843009;
    v9 = ExpHwidSendSynchronousIrpToDevice(a2, 1507330LL, &v16);
    if ( v9 < 0 )
    {
      *(_BYTE *)(a3 + 33) |= 0x20u;
      v16 = v9;
      v17 = 0;
    }
  }
  if ( !*(_BYTE *)(a1 + 12) )
  {
    memset(v15, 0, sizeof(v15));
    HIWORD(v15[1]) = *(_WORD *)(a3 + 32);
    BYTE1(v15[1]) = *(_BYTE *)(a3 + 34);
    v15[2] = *(_DWORD *)(a3 + 36);
    LOBYTE(v15[1]) = 2;
    *(GUID *)&v15[3] = GUID_NDIS_LAN_CLASS;
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, v15, &v16, 6LL);
  if ( appended >= 0 )
  {
    v11 = *(unsigned __int16 *)(a3 + 40) + 10;
    if ( !*(_BYTE *)(a1 + 12) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x534C53u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *(_DWORD *)PoolWithTag = v18;
      *((_DWORD *)PoolWithTag + 1) = v16;
      *((_WORD *)PoolWithTag + 4) = v17;
      v13 = *(_WORD *)(a3 + 40);
      if ( v13 )
        memmove(v6 + 10, *(const void **)(a3 + 48), v13);
      memset(v15, 0, sizeof(v15));
      HIWORD(v15[1]) = *(_WORD *)(a3 + 32);
      BYTE1(v15[1]) = *(_BYTE *)(a3 + 34);
      v15[2] = *(_DWORD *)(a3 + 36);
      LOBYTE(v15[1]) = 2;
      *(_OWORD *)&v15[3] = SL_HWID_IF_GUID_MAC;
    }
    appended = ExpHwidAppendDeviceInfoBlock(a1, v15, v6, v11);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)appended;
}

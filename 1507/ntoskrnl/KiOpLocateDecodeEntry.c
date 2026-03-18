/*
 * XREFs of KiOpLocateDecodeEntry @ 0x140118144
 * Callers:
 *     KiOpDecode @ 0x140117F50 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchBytes @ 0x14012314C (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpLocateDecodeEntry(__int64 a1)
{
  const DEVPROPKEY *v2; // rbx
  const DEVPROPKEY *v3; // rsi
  unsigned __int8 v4; // dl
  __int64 result; // rax
  int v6; // ecx
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // cl

  if ( *(_BYTE *)(a1 + 49) )
  {
    v2 = (const DEVPROPKEY *)&KiOpTwoByteTable;
    v3 = &DEVPKEY_DeviceContainer_IsConnected;
  }
  else
  {
    v2 = (const DEVPROPKEY *)&KiOpOneByteTable;
    v3 = (const DEVPROPKEY *)&KiOpTwoByteTable;
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 48);
    if ( v4 < LOBYTE(v2->fmtid.Data1) )
      goto LABEL_4;
    if ( v4 > (unsigned __int8)(LOBYTE(v2->fmtid.Data1) + BYTE1(v2->fmtid.Data1) - 1) )
      goto LABEL_4;
    v6 = *(_DWORD *)&v2->fmtid.Data2;
    if ( v6 )
    {
      if ( (*(_DWORD *)(a1 + 40) & v6) == 0 )
        goto LABEL_4;
    }
    if ( v2->fmtid.Data4[0] == 0xFF && v2->fmtid.Data4[1] == 0xFF )
      break;
    if ( !*(_BYTE *)(a1 + 72) )
    {
      result = KiOpFetchBytes(a1, 1LL, a1 + 57);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 72) = 1;
    }
    v7 = v2->fmtid.Data4[0];
    if ( v7 != 0xFF && v7 != ((*(_BYTE *)(a1 + 57) >> 3) & 7) )
      goto LABEL_4;
    v8 = v2->fmtid.Data4[1];
    if ( v8 == 0xFF )
      break;
    if ( *(_BYTE *)(a1 + 57) >> 6 == 3 )
    {
      if ( v8 == 3 )
        break;
    }
    else if ( v8 != 3 )
    {
      break;
    }
LABEL_4:
    v2 = (const DEVPROPKEY *)((char *)v2 + 24);
    if ( v2 == v3 )
      return 0LL;
  }
  if ( (*(_DWORD *)&v2->fmtid.Data4[4] & 0xF0000000) != 0
    && (*(_DWORD *)(a1 + 52) & *(_DWORD *)&v2->fmtid.Data4[4] & 0xF0000000) == 0 )
  {
    goto LABEL_4;
  }
  *(_QWORD *)(a1 + 80) = v2;
  return 0LL;
}

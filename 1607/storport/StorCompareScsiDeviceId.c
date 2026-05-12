/*
 * XREFs of StorCompareScsiDeviceId @ 0x1C0014300
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C0014164 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C0014440 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C0014488 (StorInitVPDIdEnumeration.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memcmp @ 0x1C001A940 (memcmp.c)
 *     __report_rangecheckfailure @ 0x1C0043508 (__report_rangecheckfailure.c)
 */

__int64 __fastcall StorCompareScsiDeviceId(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 i; // al
  __int64 v6; // rcx
  __int64 NextVPDIdDescriptor; // rax
  _BYTE *v8; // rdi
  char v9; // r15
  _BYTE *v10; // rax
  char v11; // r8
  unsigned __int8 v12; // cl
  bool v14; // zf
  _BYTE v15[24]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-30h]
  _BYTE v18[16]; // [rsp+60h] [rbp-20h]

  v2 = 0;
  for ( i = 0; i <= 8u; ++i )
  {
    v6 = i;
    if ( i >= 9uLL )
      _report_rangecheckfailure(i, a1);
    v17[v6] = 0;
    v18[v6] = 0;
  }
  if ( (unsigned __int8)StorInitVPDIdEnumeration(v15, a1) )
  {
    while ( 1 )
    {
      NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(v15);
      v8 = (_BYTE *)NextVPDIdDescriptor;
      if ( !NextVPDIdDescriptor )
        break;
      v9 = *(_BYTE *)(NextVPDIdDescriptor + 1);
      if ( (v9 & 0x30) == 0 && (v9 & 0xFu) <= 8 )
      {
        if ( !(unsigned __int8)StorInitVPDIdEnumeration(v16, a2) )
          break;
        while ( 1 )
        {
          v10 = (_BYTE *)StorGetNextVPDIdDescriptor(v16);
          if ( !v10 )
            break;
          v11 = v10[1];
          if ( (v11 & 0x30) == 0 && ((*v8 ^ *v10) & 0xF) == 0 && (v9 & 0xF) == (v11 & 0xF) )
          {
            v12 = v8[3];
            v17[v9 & 0xF] = 1;
            if ( v12 == v10[3] && !memcmp(v8 + 4, v10 + 4, v12) )
              v18[v9 & 0xF] = 1;
          }
        }
      }
    }
  }
  if ( v17[3] || v17[2] || v17[8] )
  {
    if ( v18[3] || v18[2] || v18[8] )
      return 0LL;
  }
  else
  {
    if ( v17[1] )
    {
      v14 = v18[1] == 0;
LABEL_24:
      LOBYTE(v2) = v14;
      return v2;
    }
    if ( v17[0] )
    {
      v14 = v18[0] == 0;
      goto LABEL_24;
    }
  }
  return 1LL;
}

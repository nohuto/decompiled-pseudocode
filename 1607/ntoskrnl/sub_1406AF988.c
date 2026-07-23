/*
 * XREFs of sub_1406AF988 @ 0x1406AF988
 * Callers:
 *     <none>
 * Callees:
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 *     sub_1406AED4C @ 0x1406AED4C (sub_1406AED4C.c)
 */

__int64 __fastcall sub_1406AF988(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int v9; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v11; // r9
  int updated; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int128 v16; // [rsp+38h] [rbp-21h] BYREF
  __int128 v17; // [rsp+48h] [rbp-11h]
  __int128 v18; // [rsp+58h] [rbp-1h]
  _OWORD v19[3]; // [rsp+68h] [rbp+Fh] BYREF

  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v19);
    if ( KernelDataProtection < 0 )
    {
      v9 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v11) = -1;
        if ( Data )
        {
          *(_QWORD *)&v16 = 0LL;
          v17 = 0uLL;
          *(_QWORD *)&v18 = 0LL;
          DWORD2(v16) = 4;
          BYTE8(v18) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v16);
          if ( updated
            || (_DWORD)v13
            && (16 * (unsigned __int64)(unsigned int)v13 > v11
             || (updated = ExpLicUpdateChecksum((__int64)qword_1407494C0, v13, &v16)) != 0) )
          {
            *(_QWORD *)&v16 = 0LL;
            updated = 0;
            DWORD2(v16) = 4;
          }
          v19[0] = v16;
          v19[1] = v17;
          v19[2] = v18;
        }
        else
        {
          updated = -1073741811;
        }
        if ( updated >= 0 )
        {
          DWORD2(v19[0]) = 4;
          ExpSetKernelDataProtection((__int64)v19, v11, 0);
        }
      }
    }
    else
    {
      v9 = DWORD2(v19[0]);
    }
  }
  else
  {
    v9 = dword_1407470B4;
  }
  if ( v9 )
  {
    *a5 = 1;
    return (unsigned int)sub_1406AED4C(a1, a2, a3, a4, 0);
  }
  else
  {
    v14 = -1073741772;
    *a5 = 0;
  }
  return v14;
}

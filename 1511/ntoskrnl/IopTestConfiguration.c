/*
 * XREFs of IopTestConfiguration @ 0x140529D00
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x140529B7C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     PnpLookupArbitersNewResources @ 0x140529DC8 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopTestConfiguration(int a1, int a2, __int64 **a3)
{
  __int64 *v3; // rdi
  int i; // r9d
  __int64 v8; // rbx
  char v9; // cl
  __int64 *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a3;
  for ( i = 0; v3 != (__int64 *)a3; v3 = (__int64 *)*v3 )
  {
    if ( *((_BYTE *)v3 + 17) )
    {
      v8 = *(v3 - 8);
      v12 = 0;
      v13[0] = 0LL;
      v11 = v3 - 6;
      LOBYTE(i) = *((_BYTE *)v3 - 72);
      PnpLookupArbitersNewResources(a1, a2, *(v3 - 7), i, (__int64)v13, (__int64)&v12);
      i = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v8 + 32))(*(_QWORD *)(v8 + 8), 0LL, &v11);
      if ( i < 0 )
      {
        *((_BYTE *)v3 + 16) |= 2u;
        return (unsigned int)i;
      }
      v9 = v3[2] & 0xFD;
      *((_BYTE *)v3 + 17) = 0;
      *((_BYTE *)v3 + 16) = v9 | 1;
    }
    else if ( (v3[2] & 2) != 0 )
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)i;
}

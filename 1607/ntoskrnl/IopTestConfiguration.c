/*
 * XREFs of IopTestConfiguration @ 0x14055645C
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14055634C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     PnpLogDeviceConflictingResource @ 0x140555A04 (PnpLogDeviceConflictingResource.c)
 *     PnpLookupArbitersNewResources @ 0x140556538 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopTestConfiguration(int a1, int a2, __int64 **a3)
{
  __int64 *v3; // rdi
  int i; // esi
  __int64 v8; // rbp
  char v9; // cl
  __int64 *v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a3;
  for ( i = 0; v3 != (__int64 *)a3; v3 = (__int64 *)*v3 )
  {
    if ( *((_BYTE *)v3 + 17) )
    {
      v8 = *(v3 - 8);
      v12 = 0;
      v13 = 0LL;
      v11 = v3 - 6;
      PnpLookupArbitersNewResources(a1, a2, *(v3 - 7), *((_BYTE *)v3 - 72), (__int64)&v13, (__int64)&v12);
      i = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v8 + 32))(*(_QWORD *)(v8 + 8), 0LL, &v11);
      if ( i < 0 )
      {
        PnpLogDeviceConflictingResource((__int64)(v3 - 11), *(_QWORD *)(v8 + 8));
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

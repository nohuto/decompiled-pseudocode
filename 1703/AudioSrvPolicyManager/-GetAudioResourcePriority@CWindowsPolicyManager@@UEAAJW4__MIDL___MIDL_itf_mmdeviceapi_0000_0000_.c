/*
 * XREFs of ?GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHHPEAK@Z @ 0x180004970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetAudioResourcePriority(
        CWindowsPolicyManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        int a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  int v6; // edx
  int v7; // ecx

  v6 = 0;
  if ( a3 == 1 )
    goto LABEL_9;
  if ( a3 == 2 )
  {
    v7 = 1;
    goto LABEL_10;
  }
  v7 = 3;
  if ( a3 == 3 )
  {
    v7 = 0;
    goto LABEL_10;
  }
  if ( a3 != 7 )
  {
    if ( (unsigned int)(a3 - 10) > 1 )
    {
      v7 = 4;
      goto LABEL_10;
    }
LABEL_9:
    v7 = 2;
  }
LABEL_10:
  LOBYTE(v6) = a4 == 0;
  *a6 = v6 + 2 * (v7 + (a5 != 0 ? 4 : 0));
  return 0LL;
}

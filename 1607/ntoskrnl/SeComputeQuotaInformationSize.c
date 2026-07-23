/*
 * XREFs of SeComputeQuotaInformationSize @ 0x14051D9E0
 * Callers:
 *     ObpCaptureObjectCreateInformation @ 0x140418630 (ObpCaptureObjectCreateInformation.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x14051D648 (ObSetSecurityDescriptorInfo.c)
 *     ObpChargeQuotaForObject @ 0x14051D85C (ObpChargeQuotaForObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeComputeQuotaInformationSize(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int16 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r8

  v2 = 0LL;
  *a2 = 0;
  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v4 )
      v5 = a1 + v4;
    else
      v5 = 0LL;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( v3 < 0 )
    {
      v6 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v6 )
        v2 = a1 + v6;
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 32);
    }
  }
  if ( v5 )
    *a2 = (4 * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFC;
  if ( v2 )
    *a2 += (*(unsigned __int16 *)(v2 + 2) + 3) & 0xFFFFFFFC;
  return 0LL;
}

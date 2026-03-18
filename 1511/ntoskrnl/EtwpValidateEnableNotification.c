/*
 * XREFs of EtwpValidateEnableNotification @ 0x1404CE7A0
 * Callers:
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 *     EtwpValidateFilterDescriptors @ 0x1406674A0 (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, char a2, __int64 a3, unsigned int **a4, __int64 a5)
{
  unsigned int v9; // edx
  unsigned int *v10; // rax
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // ecx

  *a4 = 0LL;
  if ( *(_DWORD *)(a1 + 4) < 0x78u
    || *(_DWORD *)(a1 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a1, a5)
    || *(_DWORD *)(a1 + 72) >= 3u )
  {
    return 3221225485LL;
  }
  v9 = *(unsigned __int16 *)(a1 + 78);
  *(_BYTE *)(a3 + 18) = (v9 & 0x8000) != 0;
  if ( (v9 & 0x8000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
      return 3221225485LL;
    v13 = a1 + 40;
    goto LABEL_16;
  }
  if ( v9 == 3 )
    return 3221225506LL;
  v10 = EtwpAcquireLoggerContextByLoggerId(0LL, v9, 0);
  if ( !v10 )
    goto LABEL_27;
  v11 = *(_DWORD *)(a1 + 80);
  *a4 = v10;
  if ( (v11 & 0x20) != 0 && (v10[3] & 0x1030800) != 0 )
    return 3221225485LL;
  if ( (v10[208] & 0x40) != 0 )
  {
LABEL_27:
    result = 3221226134LL;
    goto LABEL_17;
  }
  *(_OWORD *)a3 = *(_OWORD *)(v10 + 73);
  if ( (v10[3] & 0x80u) != 0 )
    *(_BYTE *)(a3 + 16) = 1;
  if ( (v10[3] & 0x1000000) != 0 )
    *(_BYTE *)(a3 + 17) = 1;
  if ( !a2 )
  {
    result = 0LL;
    goto LABEL_17;
  }
  result = EtwpCheckGuidAccess(a1 + 40, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = a3;
LABEL_16:
    result = EtwpCheckGuidAccess(v13, 128LL, 0LL);
  }
LABEL_17:
  v14 = *(_DWORD *)(a1 + 80);
  if ( (v14 & 0x10) != 0 )
    v15 = v14 & 0xFFFFFFEF;
  else
    v15 = v14 | 0x40;
  *(_DWORD *)(a1 + 80) = v15;
  return result;
}

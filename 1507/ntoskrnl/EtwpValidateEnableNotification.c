/*
 * XREFs of EtwpValidateEnableNotification @ 0x1404D5D50
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 * Callees:
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 *     EtwpValidateFilterDescriptors @ 0x1406EA75C (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, char a2, __int64 a3, __int64 *a4, __int64 a5)
{
  unsigned int v9; // ebp
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ecx
  __int64 result; // rax
  unsigned int *v14; // rcx
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

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
    v14 = (unsigned int *)(a1 + 40);
    goto LABEL_16;
  }
  PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v17, (__int64)a4);
  v10 = *(_DWORD *)(v17 + 392);
  PsDereferenceMonitorContextServerSilo(v17);
  if ( v9 == v10 )
    return 3221225506LL;
  v11 = EtwpAcquireLoggerContextByLoggerId(v9, 0);
  if ( !v11 )
    goto LABEL_27;
  v12 = *(_DWORD *)(a1 + 80);
  *a4 = v11;
  if ( (v12 & 0x20) != 0 && (*(_DWORD *)(v11 + 12) & 0x1030800) != 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v11 + 832) & 0x40) != 0 )
  {
LABEL_27:
    result = 3221226134LL;
    goto LABEL_17;
  }
  *(_OWORD *)a3 = *(_OWORD *)(v11 + 292);
  if ( (*(_DWORD *)(v11 + 12) & 0x80u) != 0 )
    *(_BYTE *)(a3 + 16) = 1;
  if ( (*(_DWORD *)(v11 + 12) & 0x1000000) != 0 )
    *(_BYTE *)(a3 + 17) = 1;
  if ( !a2 )
  {
    result = 0LL;
    goto LABEL_17;
  }
  result = EtwpCheckGuidAccess((unsigned int *)(a1 + 40), 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
    v14 = (unsigned int *)a3;
LABEL_16:
    result = EtwpCheckGuidAccess(v14, 0x80u, 0LL);
  }
LABEL_17:
  v15 = *(_DWORD *)(a1 + 80);
  if ( (v15 & 0x10) != 0 )
    v16 = v15 & 0xFFFFFFEF;
  else
    v16 = v15 | 0x40;
  *(_DWORD *)(a1 + 80) = v16;
  return result;
}

/*
 * XREFs of EtwpValidateEnableNotification @ 0x14048F810
 * Callers:
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x140491C9C (EtwpCheckNotificationAccess.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwpValidateFilterDescriptors @ 0x1406A9544 (EtwpValidateFilterDescriptors.c)
 */

__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v6; // edi
  bool v7; // cf
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a2 + 4) < 0x78u;
  *a5 = 0LL;
  if ( v7 || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a2, a6) || *(_DWORD *)(a2 + 72) >= 3u )
    return 3221225485LL;
  v12 = *(unsigned __int16 *)(a2 + 78);
  v13 = (*(_WORD *)(a2 + 78) & 0x8000) == 0;
  *(_BYTE *)(a4 + 18) = (*(_WORD *)(a2 + 78) & 0x8000) != 0;
  if ( v13 )
  {
    if ( (_DWORD)v12 == 3 )
      return 3221225506LL;
    v14 = EtwpAcquireLoggerContextByLoggerId(a1, v12, 0LL);
    if ( !v14 )
      goto LABEL_25;
    *a5 = v14;
    if ( (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (*(_DWORD *)(v14 + 12) & 0x1030800) != 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v14 + 816) & 0x40) != 0 )
    {
LABEL_25:
      v6 = -1073741162;
      goto LABEL_16;
    }
    *(_OWORD *)a4 = *(_OWORD *)(v14 + 276);
    if ( (*(_DWORD *)(v14 + 12) & 0x80u) != 0 )
      *(_BYTE *)(a4 + 16) = 1;
    if ( (*(_DWORD *)(v14 + 12) & 0x1000000) != 0 )
      *(_BYTE *)(a4 + 17) = 1;
    if ( !a3 )
      goto LABEL_16;
    v15 = EtwpCheckNotificationAccess(a2 + 40, a4);
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      return 3221225485LL;
    v15 = EtwpCheckGuidAccess(a2 + 40, 128LL, 0LL);
  }
  v6 = v15;
LABEL_16:
  v16 = *(_DWORD *)(a2 + 80);
  if ( (v16 & 0x10) != 0 )
    v17 = v16 & 0xFFFFFFEF;
  else
    v17 = v16 | 0x40;
  *(_DWORD *)(a2 + 80) = v17;
  return v6;
}

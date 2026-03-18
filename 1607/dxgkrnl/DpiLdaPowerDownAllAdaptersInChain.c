/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x1C019DCA8
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00DFFA0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C00DF6A8 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  int v4; // esi
  bool v5; // r12
  _DWORD *v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  int v19; // r15d
  int v20; // ebx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  unsigned int v27; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v6 = *(_DWORD **)(a2 + 184);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = v6[8];
  v9 = (int)v6[6];
  v10 = v6[2];
  v27 = v8;
  if ( *(_BYTE *)(v7 + 508) == 1 )
  {
    v5 = *(_DWORD *)(v7 + 236) == 2;
  }
  else
  {
    v11 = *(_QWORD *)(v7 + 2592);
    if ( !v11 )
    {
      v4 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v7 + 24),
             (POWER_STATE)v9,
             (unsigned __int16)v10 >> 12,
             HIWORD(v10) & 0xF,
             v8);
      if ( v4 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        *(_QWORD *)(v16 + 24) = v9;
        WdLogEvent5_WdWarning(v16);
      }
      return (unsigned int)v4;
    }
    v7 = *(_QWORD *)(v11 + 64);
  }
  v17 = 0LL;
  if ( *(_DWORD *)(v7 + 2600) )
  {
    v18 = (unsigned __int16)v10 >> 12;
    v19 = HIWORD(v10) & 0xF;
    v20 = (unsigned __int16)v10 >> 12;
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2592) + 8 * v17) + 64LL);
      v4 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v21 + 24),
             *(POWER_STATE *)(v21 + 4 * v18 + 1176),
             v20,
             v19,
             v8);
      if ( v4 < 0 || *(_DWORD *)(v21 + 236) != 2 && v5 )
        break;
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= *(_DWORD *)(v7 + 2600) )
        return (unsigned int)v4;
      v8 = v27;
    }
    v4 = -1071774666;
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v24);
    v25[3] = 275LL;
    v25[4] = 21LL;
    v25[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  return (unsigned int)v4;
}

/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800348E0
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034D40 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180034A10 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  int IsGpuInterfering; // edi
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // rax
  unsigned __int8 v14[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  if ( (*((_BYTE *)a1 + 816) & 8) != 0 )
  {
    if ( !a2 )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
      {
        v6 = *((_QWORD *)v3 + 3);
        v19 = 0;
        v15 = v6;
        v17 = &v15;
        v18 = 8;
        TlgWrite(v3, &unk_1800422A3, v4, v5, 3u, &pData);
      }
      *((_DWORD *)a1 + 204) &= ~8u;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, v14);
  if ( IsGpuInterfering >= 0 )
  {
    if ( v14[0] )
    {
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 1uLL) )
      {
        v12 = *((_QWORD *)a1 + 3);
        v19 = 0;
        v15 = v12;
        v17 = &v15;
        v18 = 8;
        TlgWrite(v9, &unk_180042276, v10, v11, 3u, &pData);
      }
      *((_DWORD *)a1 + 204) |= 8u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork((__int64)a1);
  return (unsigned int)IsGpuInterfering;
}

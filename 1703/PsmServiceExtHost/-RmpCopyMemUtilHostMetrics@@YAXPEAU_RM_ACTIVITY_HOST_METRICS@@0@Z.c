/*
 * XREFs of ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800037D0
 * Callers:
 *     ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180003580 (-RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCopyMemUtilHostMetrics(struct _RM_ACTIVITY_HOST_METRICS *a1, struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int16 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *((_WORD *)a2 + 31) & 0x2C;
  if ( (*((_BYTE *)a2 + 62) & 4) != 0 )
  {
    v2 = *((_WORD *)a2 + 31) & 0x28;
    v4 = *((_QWORD *)a2 + 2);
    *((_WORD *)a1 + 31) |= 4u;
    *((_QWORD *)a1 + 2) = v4;
  }
  else
  {
    *((_WORD *)a1 + 31) &= ~4u;
  }
  if ( (v2 & 8) != 0 )
  {
    LOBYTE(v2) = v2 & 0xF7;
    v3 = *((_QWORD *)a2 + 3);
    *((_WORD *)a1 + 31) |= 8u;
    *((_QWORD *)a1 + 3) = v3;
  }
  else
  {
    *((_WORD *)a1 + 31) &= ~8u;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v5 = *((_QWORD *)a2 + 4);
    *((_WORD *)a1 + 31) |= 0x20u;
    *((_QWORD *)a1 + 4) = v5;
  }
  else
  {
    *((_WORD *)a1 + 31) &= ~0x20u;
  }
  *((_WORD *)a1 + 31) &= ~0x10u;
}

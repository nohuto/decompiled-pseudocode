/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x1C01745B0
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbp
  bool v13; // al
  unsigned int v14; // esi
  __int64 v15; // rbp
  int started; // ebx
  struct _DEVICE_OBJECT *v17; // rcx
  __int64 v19; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v10 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v10 + 508) != 1 )
  {
    v11 = *(_QWORD *)(v10 + 1512);
    if ( !v11 )
    {
LABEL_22:
      started = 1075708986;
      v19 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
      *(_QWORD *)(v19 + 24) = DpiLdaStartAdapterInChain;
      *(_QWORD *)(v19 + 32) = a1;
LABEL_23:
      WdLogEvent5_WdWarning(v19);
      return (unsigned int)started;
    }
    v10 = *(_QWORD *)(v11 + 64);
  }
  v7 = *(unsigned int *)(v10 + 1520);
  if ( (_DWORD)v7 != *(_DWORD *)(v10 + 504) )
    goto LABEL_22;
  v6 = 0LL;
  *(_BYTE *)(v10 + 1524) = 0;
  if ( (_DWORD)v7 )
  {
    v9 = *(_QWORD *)(v10 + 1512);
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 8 * v6);
      v8 = *(_QWORD *)(v12 + 64);
      if ( *(_BYTE *)(v8 + 232) == 1 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v8 + 236) - 1) > 1 )
        goto LABEL_22;
      v13 = *(_BYTE *)(v10 + 1524) || *(_DWORD *)(v10 + 1060) != *(_DWORD *)(v8 + 1060);
      v6 = (unsigned int)(v6 + 1);
      *(_BYTE *)(v10 + 1524) = v13;
      if ( (unsigned int)v6 >= (unsigned int)v7 )
        goto LABEL_14;
    }
    started = -1071774669;
    v19 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v19 + 24) = DpiLdaStartAdapterInChain;
    *(_QWORD *)(v19 + 32) = v12;
    goto LABEL_23;
  }
LABEL_14:
  v14 = 1;
  if ( (unsigned int)v7 > 1 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1512) + 8LL * v14) + 64LL);
      if ( *(_DWORD *)(v15 + 236) == 1 )
      {
        started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v15 + 24), a2, a3);
        if ( started < 0 )
          break;
      }
      if ( ++v14 >= *(_DWORD *)(v10 + 1520) )
        goto LABEL_18;
    }
    v17 = *(struct _DEVICE_OBJECT **)(v15 + 152);
    goto LABEL_20;
  }
LABEL_18:
  started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v10 + 24), a2, a3);
  if ( started < 0 )
  {
    v17 = *(struct _DEVICE_OBJECT **)(v10 + 152);
LABEL_20:
    IoInvalidateDeviceState(v17);
  }
  return (unsigned int)started;
}

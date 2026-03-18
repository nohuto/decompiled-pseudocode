/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C014F450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C00209A8 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _IO_TIMER *v4; // rdi
  HANDLE *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  char *v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  PVOID Object[2]; // [rsp+30h] [rbp-268h] BYREF
  HANDLE v23[70]; // [rsp+40h] [rbp-258h] BYREF
  __int128 v24; // [rsp+270h] [rbp-28h]

  v24 = 0uLL;
  memset(v23, 0, 0x228uLL);
  v4 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v5 = v23;
  v6 = 4LL;
  do
  {
    *(_OWORD *)v5 = *a1;
    *((_OWORD *)v5 + 1) = a1[1];
    *((_OWORD *)v5 + 2) = a1[2];
    *((_OWORD *)v5 + 3) = a1[3];
    *((_OWORD *)v5 + 4) = a1[4];
    *((_OWORD *)v5 + 5) = a1[5];
    *((_OWORD *)v5 + 6) = a1[6];
    v5 += 16;
    *((_OWORD *)v5 - 1) = a1[7];
    a1 += 8;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)v5 = *a1;
  *((_OWORD *)v5 + 1) = a1[1];
  v5[4] = (HANDLE)*((_QWORD *)a1 + 4);
  if ( LODWORD(v23[0]) != 552 )
  {
    v7 = -2147483640;
    v8 = WdLogNewEntry5_WdWarning(v5, 128LL, v2, v3);
    *(_QWORD *)(v8 + 24) = -2147483640LL;
LABEL_7:
    WdLogEvent5_WdWarning(v8);
    return v7;
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v10);
  LODWORD(Object[0]) = DxgkNetDispAccessCheck(ProcessDxgProcess);
  if ( SLODWORD(Object[0]) < 0 )
  {
    v16 = -2147483643LL;
LABEL_10:
    v7 = v16;
    v8 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v8 + 24) = v16;
    goto LABEL_7;
  }
  v17 = (char *)v23[67] - v24;
  if ( v23[67] == (HANDLE)v24 )
    v17 = (char *)v23[68] - *((_QWORD *)&v24 + 1);
  if ( !v17 )
  {
    LODWORD(Object[0]) = ExUuidCreate((UUID *)&v23[67]);
    if ( SLODWORD(Object[0]) < 0 )
    {
      v16 = -2147483647LL;
      goto LABEL_10;
    }
  }
  if ( v23[66]
    && (v18 = ObReferenceObjectByHandle(v23[66], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL),
        v4 = (struct _IO_TIMER *)Object[0],
        LODWORD(Object[0]) = v18,
        v18 < 0) )
  {
    v7 = -2147483640;
    v20 = WdLogNewEntry5_WdError(v19);
    *(HANDLE *)(v20 + 24) = v23[66];
    WdLogEvent5_WdError(v20);
  }
  else
  {
    return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v23, v4, Object);
  }
  return v7;
}

/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C0130CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdi
  HANDLE *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rax
  __int64 v16; // rdi
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  HANDLE v21[70]; // [rsp+30h] [rbp-258h] BYREF
  __int128 Object; // [rsp+260h] [rbp-28h] BYREF

  v4 = (_OWORD *)a1;
  Object = 0uLL;
  memset(v21, 0, 552);
  v5 = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  v6 = v21;
  v7 = 4LL;
  do
  {
    *(_OWORD *)v6 = *v4;
    *((_OWORD *)v6 + 1) = v4[1];
    *((_OWORD *)v6 + 2) = v4[2];
    *((_OWORD *)v6 + 3) = v4[3];
    *((_OWORD *)v6 + 4) = v4[4];
    *((_OWORD *)v6 + 5) = v4[5];
    *((_OWORD *)v6 + 6) = v4[6];
    v6 += 16;
    *((_OWORD *)v6 - 1) = v4[7];
    v4 += 8;
    --v7;
  }
  while ( v7 );
  *(_OWORD *)v6 = *v4;
  *((_OWORD *)v6 + 1) = v4[1];
  v6[4] = (HANDLE)*((_QWORD *)v4 + 4);
  if ( LODWORD(v21[0]) != 552 )
  {
    v8 = -2147483640;
    v9 = WdLogNewEntry5_WdWarning(v6, 128LL, a3, a4);
    *(_QWORD *)(v9 + 24) = -2147483640LL;
LABEL_7:
    WdLogEvent5_WdWarning(v9);
    return v8;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current
    || (!g_OSTestSigningEnabled || (unsigned int)PsGetCurrentProcessSessionId(v11, v10, v13, v14))
    && (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v16 = -2147483643LL;
    goto LABEL_22;
  }
  v15 = (char *)v21[67] - Object;
  if ( v21[67] == (HANDLE)Object )
    v15 = (char *)v21[68] - *((_QWORD *)&Object + 1);
  if ( !v15 )
  {
    LODWORD(Object) = ExUuidCreate((UUID *)&v21[67]);
    if ( (int)Object < 0 )
    {
      v16 = -2147483647LL;
LABEL_22:
      v8 = v16;
      v9 = WdLogNewEntry5_WdWarning(v11, v10, v13, v14);
      *(_QWORD *)(v9 + 24) = v16;
      goto LABEL_7;
    }
  }
  if ( v21[66]
    && (v17 = ObReferenceObjectByHandle(v21[66], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&Object, 0LL),
        v5 = Object,
        LODWORD(Object) = v17,
        v17 < 0) )
  {
    v8 = -2147483640;
    v19 = WdLogNewEntry5_WdError(v18);
    *(HANDLE *)(v19 + 24) = v21[66];
    WdLogEvent5_WdError(v19);
  }
  else
  {
    return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v21, v5, &Object);
  }
  return v8;
}

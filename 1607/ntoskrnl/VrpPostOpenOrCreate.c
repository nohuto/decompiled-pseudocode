/*
 * XREFs of VrpPostOpenOrCreate @ 0x14061563C
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmSetCallbackObjectContext @ 0x1405FB060 (CmSetCallbackObjectContext.c)
 *     VrpFreeCallbackContext @ 0x140612F78 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140612FBC (VrpFreeKeyContext.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 a1)
{
  int v2; // eax
  unsigned __int16 *v3; // r13
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  unsigned __int16 **v6; // rsi
  PVOID PoolWithTag; // rax
  __int64 v8; // r14
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rcx
  bool v11; // zf
  int v12; // edx
  unsigned __int16 *v13; // rcx
  void *v14; // rcx
  unsigned __int16 *v15; // rax
  int v16; // edx
  PVOID OldContext; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  int *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+90h] [rbp+Fh] BYREF
  int v25; // [rsp+94h] [rbp+13h]
  PVOID *p_OldContext; // [rsp+98h] [rbp+17h]
  __int64 v27; // [rsp+A0h] [rbp+1Fh]

  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  ActivityId.Data1 = 0;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = *(unsigned __int16 ***)(a1 + 16);
  if ( v2 >= 0 && v2 != 260 )
  {
    if ( !v4 )
      return (unsigned int)v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x67655256u);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
LABEL_8:
      if ( stru_1402F3520.LevelPlus1 > 2 )
      {
        v9 = *v6;
        v10 = (unsigned __int16 *)&EmptyUnicodeString;
        v11 = *((_QWORD *)*v6 + 1) == 0LL;
        LODWORD(OldContext) = v5;
        if ( !v11 )
          v10 = v9;
        v12 = *v10;
        v23 = *((_QWORD *)v10 + 1);
        p_OldContext = &OldContext;
        v21 = &v24;
        v22 = 2LL;
        v24 = v12;
        v25 = 0;
        v27 = 4LL;
        TlgWrite(&stru_1402F3520, &unk_14027B601, &ActivityId, 0LL, 5u, &pData);
      }
      if ( v8 )
      {
        VrpFreeKeyContext(v8);
        ExFreePoolWithTag((PVOID)v8, 0x67655256u);
      }
      goto LABEL_14;
    }
    memset(PoolWithTag, 0, 0x28uLL);
    v5 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v4 + 40), (PUNICODE_STRING)(v8 + 16));
    if ( v5 < 0 )
      goto LABEL_8;
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v4 + 56);
    v5 = CmSetCallbackObjectContext(*(PVOID *)v6[9], &gCallbackCookie, (PVOID)v8, &OldContext);
    if ( v5 < 0 )
      goto LABEL_8;
  }
LABEL_14:
  if ( v4 )
  {
    v13 = v6[1];
    if ( v13 )
      ObfDereferenceObject(v13);
    v6[1] = *(unsigned __int16 **)v4;
    *(_QWORD *)v4 = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 260 )
    {
      if ( stru_1402F3520.LevelPlus1 > 5 )
      {
        v15 = *v6;
        v11 = *((_QWORD *)*v6 + 1) == 0LL;
        LODWORD(OldContext) = v5;
        if ( !v11 )
          v3 = v15;
        v16 = *v3;
        v23 = *((_QWORD *)v3 + 1);
        p_OldContext = &OldContext;
        v21 = &v24;
        v22 = 2LL;
        v24 = v16;
        v25 = 0;
        v27 = 4LL;
        TlgWrite(&stru_1402F3520, &unk_14027B866, &ActivityId, 0LL, 5u, &pData);
      }
    }
    else
    {
      v14 = (void *)*((_QWORD *)*v6 + 1);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      *(_OWORD *)*v6 = *(_OWORD *)(v4 + 8);
      *(_OWORD *)v6[14] = *(_OWORD *)(v4 + 24);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    VrpFreeCallbackContext((_QWORD *)v4);
  }
  if ( v5 < 0 )
  {
    *(_DWORD *)(a1 + 24) = v5;
    return (unsigned int)-1073740541;
  }
  return (unsigned int)v5;
}

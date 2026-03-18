/*
 * XREFs of NtUserfnDDEINIT @ 0x1C0221F40
 * Callers:
 *     <none>
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02178E0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C021795C (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 Prop; // rdi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  TOKEN_TYPE v18; // eax
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-30h] BYREF

  v10 = ValidateHwnd(a3);
  v11 = 0LL;
  v12 = v10;
  if ( v10 )
  {
    v13 = (unsigned __int16)atomDDEImp;
    v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v23;
    v23[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    Prop = GetProp(v10, v13, 1LL);
    if ( !Prop )
    {
      if ( *(char *)(v12 + 43) < 0 || *(char *)(v12 + 44) < 0 )
      {
LABEL_15:
        v16 = 87;
        goto LABEL_16;
      }
      v15 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v15;
      if ( !v15 )
      {
LABEL_6:
        v16 = 8;
LABEL_16:
        UserSetLastError(v16);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v15 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v15 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v17 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp(v12, v17, Prop, 1) )
      {
        v18 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v19 = *(void **)(Prop + 32);
        if ( v18 == TokenPrimary )
          PsDereferencePrimaryToken(v19);
        else
          PsDereferenceImpersonationToken(v19);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v12, (struct tagDDEIMP *)Prop, (struct _TL *)v24) == 1 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      PopW32ThreadLock(v24);
      DDEImpDecRefInitWorker(*(_QWORD *)v12);
LABEL_17:
      ThreadUnlock1(v21, v20);
      return v11;
    }
    goto LABEL_15;
  }
  return v11;
}

/*
 * XREFs of NtUserfnDDEINIT @ 0x1C021C2A0
 * Callers:
 *     <none>
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02102E0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C0210368 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 Prop; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  TOKEN_TYPE v20; // eax
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD v31[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-30h] BYREF

  v10 = ValidateHwnd(a3);
  v11 = 0LL;
  v12 = v10;
  if ( v10 )
  {
    v13 = (unsigned __int16)atomDDEImp;
    v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v31;
    v31[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    Prop = GetProp(v10, v13, 1LL);
    if ( !Prop )
    {
      if ( *(char *)(v12 + 43) < 0 || *(char *)(v12 + 44) < 0 )
      {
LABEL_15:
        v16 = 87LL;
        goto LABEL_16;
      }
      v15 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v15;
      if ( !v15 )
      {
LABEL_6:
        v16 = 8LL;
LABEL_16:
        UserSetLastError(v16);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v15 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v15 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop, v17, v18);
        goto LABEL_6;
      }
      v19 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp(v12, v19, Prop, 1) )
      {
        v20 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v21 = *(void **)(Prop + 32);
        if ( v20 == TokenPrimary )
          PsDereferencePrimaryToken(v21);
        else
          PsDereferenceImpersonationToken(v21);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v12, (struct tagDDEIMP *)Prop, (struct _TL *)v32) == 1 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      PopW32ThreadLock(v32, v22, v23, v24);
      DDEImpDecRefInitWorker(*(_QWORD *)v12, v25, v26, v27);
LABEL_17:
      ThreadUnlock1(v29, v28);
      return v11;
    }
    goto LABEL_15;
  }
  return v11;
}

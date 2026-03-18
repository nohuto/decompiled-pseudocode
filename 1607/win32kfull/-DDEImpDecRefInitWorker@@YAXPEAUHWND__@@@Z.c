/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02102E0
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C021C2A0 (NtUserfnDDEINIT.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 Prop; // rax
  unsigned __int16 v6; // r8
  __int64 v7; // rbx
  bool v8; // zf
  TOKEN_TYPE v9; // eax
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8

  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v4 )
  {
    Prop = GetProp(v4, (unsigned __int16)atomDDEImp, 1LL);
    v7 = Prop;
    if ( Prop )
    {
      v8 = *(_WORD *)(Prop + 88) == v6;
      *(_WORD *)(Prop + 88) -= v6;
      if ( v8 )
      {
        InternalRemoveProp();
        if ( !*(_WORD *)(v7 + 90) )
        {
          v9 = SeTokenType(*(PACCESS_TOKEN *)(v7 + 32));
          v10 = *(void **)(v7 + 32);
          if ( v9 == TokenPrimary )
            PsDereferencePrimaryToken(v10);
          else
            PsDereferenceImpersonationToken(v10);
          Win32FreePool(v7, v11, v12);
        }
      }
    }
  }
}

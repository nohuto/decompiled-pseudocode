/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02178E0
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C0221F40 (NtUserfnDDEINIT.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1)
{
  __int64 v1; // rcx
  __int64 Prop; // rax
  __int64 v3; // rcx
  int v4; // r8d
  __int16 v5; // r10
  __int64 v6; // rbx
  bool v7; // zf
  __int16 v8; // r11
  TOKEN_TYPE v9; // eax
  void *v10; // rcx

  v1 = HMValidateHandleNoSecure(a1, 1);
  if ( v1 )
  {
    Prop = GetProp(v1, (unsigned __int16)atomDDEImp, 1LL);
    v6 = Prop;
    if ( Prop )
    {
      v7 = *(_WORD *)(Prop + 88) == (unsigned __int16)v4;
      *(_WORD *)(Prop + 88) -= v4;
      if ( v7 )
      {
        InternalRemoveProp(v3, v5, v4);
        if ( *(_WORD *)(v6 + 90) == v8 )
        {
          v9 = SeTokenType(*(PACCESS_TOKEN *)(v6 + 32));
          v10 = *(void **)(v6 + 32);
          if ( v9 == TokenPrimary )
            PsDereferencePrimaryToken(v10);
          else
            PsDereferenceImpersonationToken(v10);
          Win32FreePool(v6);
        }
      }
    }
  }
}

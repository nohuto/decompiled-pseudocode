/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0217740
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C0222110 (NtUserfnDDEINIT.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 Prop; // rax
  int v3; // r8d
  __int64 v4; // r10
  __int16 v5; // r11
  __int64 v6; // rbx
  bool v7; // zf
  TOKEN_TYPE v8; // eax
  void *v9; // rcx

  v1 = HMValidateHandleNoSecure(a1, 1);
  if ( v1 )
  {
    Prop = GetProp(v1, (unsigned __int16)atomDDEImp, 1LL);
    v6 = Prop;
    if ( Prop )
    {
      v7 = *(_WORD *)(Prop + 88) == (unsigned __int16)v3;
      *(_WORD *)(Prop + 88) -= v3;
      if ( v7 )
      {
        InternalRemoveProp(v4, v5, v3);
        if ( !*(_WORD *)(v6 + 90) )
        {
          v8 = SeTokenType(*(PACCESS_TOKEN *)(v6 + 32));
          v9 = *(void **)(v6 + 32);
          if ( v8 == TokenPrimary )
            PsDereferencePrimaryToken(v9);
          else
            PsDereferenceImpersonationToken(v9);
          Win32FreePool(v6);
        }
      }
    }
  }
}

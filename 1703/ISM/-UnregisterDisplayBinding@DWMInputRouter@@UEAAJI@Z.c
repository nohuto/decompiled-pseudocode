/*
 * XREFs of ?UnregisterDisplayBinding@DWMInputRouter@@UEAAJI@Z @ 0x180016880
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x180016D7C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterDisplayBinding(DWMInputRouter *this, unsigned int a2)
{
  int DisplayBindingFromId; // eax
  __int64 v5; // rcx
  struct DisplayBinding *v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  int v11; // r9d
  struct DisplayBinding *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId((DWMInputRouter *)((char *)this - 48), a2, &v13);
  v6 = v13;
  if ( DisplayBindingFromId < 0 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_13;
    v11 = 2092;
    goto LABEL_12;
  }
  v7 = *((_DWORD *)this + 186);
  v8 = 0LL;
  if ( !v7 )
  {
LABEL_6:
    v10 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_13;
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 220, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_13;
    v11 = 2085;
LABEL_12:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v11, v10);
    goto LABEL_13;
  }
  v9 = *((_QWORD *)this + 92);
  while ( *(_DWORD *)(v9 + 16LL * (unsigned int)v8) != a2 )
  {
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v7 )
      goto LABEL_6;
  }
  *(_DWORD *)(v9 + 16 * v8) = *((_DWORD *)this + 188);
  --*((_DWORD *)this + 187);
  v10 = 0;
  (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_13:
  if ( v6 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}

/*
 * XREFs of ?DeliverInput@InputServiceComponent@@UEAAJPEAUInputInfo@@@Z @ 0x180025570
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceComponent::DeliverInput(InputServiceComponent *this, struct InputInfo *a2)
{
  int v2; // r11d
  __int16 v3; // bx
  __int16 v5; // ax
  __int16 v6; // r8
  __int16 v7; // cx
  __int16 v8; // r10
  __int16 v9; // r9
  __int16 v10; // ax
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-20h] BYREF
  __int16 v14; // [rsp+38h] [rbp-18h]
  __int16 v15; // [rsp+3Ah] [rbp-16h]
  int v16; // [rsp+3Ch] [rbp-14h]
  __int64 v17; // [rsp+40h] [rbp-10h]

  v2 = *((_DWORD *)a2 + 2);
  v3 = *((_WORD *)a2 + 2);
  v5 = 0x4000;
  v6 = 0;
  v7 = *((_WORD *)a2 + 354);
  v8 = 0;
  if ( *((_WORD *)a2 + 352) != 0xFFFE )
    v5 = 0;
  v9 = 0;
  if ( (v7 & 0x20) != 0 )
  {
    v9 = *((_WORD *)a2 + 353);
  }
  else if ( (v7 & 0x40) != 0 )
  {
    v8 = *((_WORD *)a2 + 353);
  }
  else
  {
    v6 = *((_WORD *)a2 + 353);
    if ( (v7 & 2) != 0 )
      v6 |= 0xE000u;
    if ( (v7 & 4) != 0 )
      v6 |= 0xE100u;
  }
  if ( (v7 & 1) != 0 )
    v10 = v5 | 4;
  else
    v10 = v5 | 1;
  if ( v9 )
  {
    v13 = 2;
    v14 = 16389;
    v15 = v9;
    v16 = v2;
  }
  else if ( v8 )
  {
    v14 = v10;
    v17 = *((_QWORD *)a2 + 84);
    v13 = 1;
    v15 = v8;
  }
  else
  {
    v13 = 0;
    v14 = v3;
    v15 = v10;
    LOWORD(v16) = v6;
    LODWORD(v17) = v2;
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, int *))(*(_QWORD *)InputDeliveryServer::s_pInputDeliveryServer
                                                                                            + 40LL))(
                      InputDeliveryServer::s_pInputDeliveryServer,
                      (char *)this + 24,
                      &v13);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 264, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}

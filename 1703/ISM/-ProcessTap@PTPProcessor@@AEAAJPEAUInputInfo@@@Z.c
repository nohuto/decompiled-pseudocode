/*
 * XREFs of ?ProcessTap@PTPProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18005BD74
 * Callers:
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005B680 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18005BFE8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::ProcessTap(PTPProcessor *this, struct InputInfo *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  struct InputInfo *v4; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d

  v2 = *((_DWORD *)this + 152);
  v3 = 0;
  v4 = a2;
  if ( (v2 & 1) != 0 )
  {
    *((_BYTE *)this + 672) = 1;
    v6 = (_OWORD *)((char *)this + 680);
    v7 = 14LL;
    do
    {
      *v6 = *(_OWORD *)v4;
      v6[1] = *((_OWORD *)v4 + 1);
      v6[2] = *((_OWORD *)v4 + 2);
      v6[3] = *((_OWORD *)v4 + 3);
      v6[4] = *((_OWORD *)v4 + 4);
      v6[5] = *((_OWORD *)v4 + 5);
      v6[6] = *((_OWORD *)v4 + 6);
      v6 += 8;
      v8 = *((_OWORD *)v4 + 7);
      v4 = (struct InputInfo *)((char *)v4 + 128);
      *(v6 - 1) = v8;
      --v7;
    }
    while ( v7 );
    v9 = *((_QWORD *)this + 83);
    *v6 = *(_OWORD *)v4;
    v6[1] = *((_OWORD *)v4 + 1);
    v6[2] = *((_OWORD *)v4 + 2);
    v6[3] = *((_OWORD *)v4 + 3);
    v6[4] = *((_OWORD *)v4 + 4);
    v6[5] = *((_OWORD *)v4 + 5);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 80LL))(v9, 3000000LL, 0LL);
    v3 = v10;
    if ( v10 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 600;
LABEL_14:
      Template_qqq(v11, &MinInput_Warning_CheckResult, 11, v12, v10);
    }
  }
  else if ( (v2 & 0x800) != 0 )
  {
    v10 = PTPProcessor::DeliverMouseMessage(this, a2, 4u, 1);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v10 = PTPProcessor::DeliverMouseMessage(this, v4, 8u, 0);
      v3 = v10;
      if ( v10 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v12 = 605;
        goto LABEL_14;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v12 = 604;
      goto LABEL_14;
    }
  }
  return v3;
}

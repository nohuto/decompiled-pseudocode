/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180059560
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x180059894 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005DBB0 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  __int16 v8; // ax
  char *v9; // r14
  __int16 v10; // r15
  __int16 v11; // di
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int SystemMetrics; // edi
  int v17; // eax
  char v18; // dl
  DWORD v19; // r8d
  int v20; // ecx
  int v21; // r10d
  unsigned int v22; // eax
  struct tagINPUT pInputs; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v25[236]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = 0;
  if ( (gdwMitConfig & 1) != 0 )
  {
    if ( *((_DWORD *)a3 + 469) )
    {
      if ( *((_BYTE *)a3 + 1881) )
      {
        *((_DWORD *)a3 + 469) = 1;
      }
      else
      {
        *((_DWORD *)a3 + 469) = 2;
        *((_DWORD *)a3 + 179) = *((_DWORD *)a3 + 16);
        *((_DWORD *)a3 + 180) = *((_DWORD *)a3 + 17);
      }
      return v4;
    }
    v5 = MouseProcessor::SynthesizeMouseInput(a3);
    v4 = v5;
    if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 508;
LABEL_44:
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, v5);
      return v4;
    }
    return v4;
  }
  v8 = *((_WORD *)a3 + 354);
  v9 = (char *)this - 176;
  v10 = 0;
  if ( (v8 & 3) != 0 )
  {
    v11 = 1;
    if ( !v9[584] )
      goto LABEL_15;
LABEL_14:
    v11 = 2;
    goto LABEL_15;
  }
  if ( (v8 & 0xC) == 0 )
    goto LABEL_26;
  if ( !v9[584] )
    goto LABEL_14;
  v11 = 1;
LABEL_15:
  if ( (v8 & 5) != 0 )
  {
    v10 = 0;
  }
  else if ( (v8 & 2) != 0 || (v8 & 8) != 0 )
  {
    v10 = 1;
  }
  memset(v25, 0, sizeof(v25));
  v12 = **((_DWORD **)v9 + 4);
  LODWORD(v25[1]) = *((_DWORD *)a3 + 2);
  v13 = *((_QWORD *)a3 + 2);
  HIDWORD(v25[0]) = v12;
  v14 = *((_QWORD *)v9 + 72);
  v25[2] = v13;
  LODWORD(v25[0]) = 4;
  LODWORD(v25[5]) = 1888;
  WORD1(v25[88]) = v11;
  WORD2(v25[88]) = v10 | 0x40;
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 48LL))(v14, v25);
  v4 = v15;
  if ( v15 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 825, v15);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
LABEL_26:
  if ( (v4 & 0x80000000) == 0 )
  {
    if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
    {
      memset(&pInputs, 0, sizeof(pInputs));
      SystemMetrics = GetSystemMetrics(0);
      v17 = GetSystemMetrics(1);
      v18 = v9[585];
      v19 = 0x8000;
      v20 = *((_DWORD *)a3 + 135);
      v21 = v17;
      pInputs.mi.dwFlags = 0x8000;
      if ( v18 )
      {
        if ( (v20 & 0x10) != 0 )
        {
          if ( (v20 & 0x10) != 0 )
            v19 = 32769;
          pInputs.mi.dwFlags = v19;
        }
        else
        {
          pInputs.mi.dwFlags = 32772;
          v9[585] = 0;
        }
      }
      else if ( (v20 & 0x10) != 0 )
      {
        pInputs.mi.dwFlags = 32770;
        v9[585] = 1;
      }
      else
      {
        pInputs.mi.dwFlags = 32769;
      }
      v22 = 0xFFFF * *((_DWORD *)a3 + 16);
      pInputs.type = 0;
      pInputs.mi.dx = v22 / (SystemMetrics - 1);
      pInputs.mi.dy = 0xFFFF * *((_DWORD *)a3 + 17) / (unsigned int)(v21 - 1);
      SendInput(1u, &pInputs, 40);
      return 0;
    }
    else
    {
      v5 = PointerProcessor::OnInputReport((PointerProcessor *)v9, a3);
      v4 = v5;
      if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 526;
        goto LABEL_44;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 518, v4);
  }
  return v4;
}

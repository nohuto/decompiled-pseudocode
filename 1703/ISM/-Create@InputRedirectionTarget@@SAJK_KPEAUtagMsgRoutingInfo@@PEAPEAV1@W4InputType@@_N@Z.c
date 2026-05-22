/*
 * XREFs of ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x18008341C
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180082D60 (-EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::Create(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, char a6)
{
  int v9; // r12d
  int v10; // edi
  int v11; // r9d
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r9d

  v9 = a1;
  if ( a4 )
  {
    v12 = malloc(0x48uLL);
    v13 = v12;
    if ( v12 )
      memset(v12, 0, 0x48uLL);
    if ( !v13 )
    {
      v10 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v10;
      v11 = 64;
      goto LABEL_4;
    }
    v13[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v13 + 6) = 1;
    *v13 = &InputRedirectionTarget::`vftable'{for `IInputTarget'};
    v13[1] = &InputRedirectionTarget::`vftable'{for `IBufferedInputClient'};
    v13[2] = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
    v13[4] = 0LL;
    *((_DWORD *)v13 + 10) = 0;
    v14 = CoreUICreate(v13 + 4);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)v13[4] + 96LL))(v13[4], a3, v13 + 5);
      v10 = v14;
      if ( v14 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_18;
      v16 = 37;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_18:
        if ( v10 >= 0 )
        {
          *((_BYTE *)v13 + 48) = a6;
          *((_DWORD *)v13 + 11) = a5;
          v13[7] = a2;
          *((_DWORD *)v13 + 16) = v9;
          *a4 = v13;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 67, v10);
        }
        if ( v10 < 0 )
          (*(void (__fastcall **)(_QWORD *, __int64))(v13[2] + 24LL))(v13 + 2, 1LL);
        return (unsigned int)v10;
      }
      v16 = 34;
    }
    Template_qqq(v15, &MinInput_Warning_CheckResult, 0, v16, v14);
    goto LABEL_18;
  }
  v10 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 57;
LABEL_4:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
  }
  return (unsigned int)v10;
}

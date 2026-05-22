/*
 * XREFs of ?DestroyInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18006FFE4
 * Callers:
 *     ??_GLegacyInjectionRawInputProvider@@MEAAPEAXI@Z @ 0x18006F00C (--_GLegacyInjectionRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::DestroyInjectionDevices(LegacyInjectionRawInputProvider *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 14) && (*((_QWORD *)this + 10) || (gdwMitConfig & 4) != 0) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    v4 = v2;
    if ( v2 >= 0 )
    {
      operator delete(*((void **)this + 14));
      *((_QWORD *)this + 14) = 0LL;
      if ( (gdwMitConfig & 4) == 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 48LL))(
               *((_QWORD *)this + 5),
               *((_QWORD *)this + 10));
        v4 = v5;
        if ( v5 >= 0 )
        {
          operator delete(*((void **)this + 10));
          *((_QWORD *)this + 10) = 0LL;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 865, v5);
        }
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v3, &MinInput_Warning_CheckResult, 0, 849, v2);
    }
  }
  else
  {
    v4 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 841, 255);
  }
  return v4;
}

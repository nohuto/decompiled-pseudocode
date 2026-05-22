/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800148E0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800843C0 (-HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18008444C (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800092F0 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?FindHitTestHandlerForDisplayBinding@DWMInputRouter@@IEAAJPEAUIDisplayBinding@@PEAV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x180015DC4 (-FindHitTestHandlerForDisplayBinding@DWMInputRouter@@IEAAJPEAUIDisplayBinding@@PEAV-$function@$$.c)
 *     ??$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget@@AEAV?$RefPtr@UIInputTarget@@@@AEAUInputInfo@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHitTestRequest@@@WRL@Microsoft@@@012@$$QEAPEAUIDisplayBinding@@AEAPEAUIInputTarget@@AEAV?$RefPtr@UIInputTarget@@@@AEAUInputInfo@@AEAK@Z @ 0x180018F84 (--$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        unsigned int a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  int PointerAtIndex; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  struct Pointer *v14; // rcx
  int HitTestHandlerForDisplayBinding; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  char *v22; // rsi
  char *v23; // rbx
  struct IInputTarget *v24; // rax
  __int64 v25; // rcx
  struct Pointer *v27; // [rsp+30h] [rbp-89h] BYREF
  int v28[2]; // [rsp+38h] [rbp-81h] BYREF
  struct Pointer *v29; // [rsp+40h] [rbp-79h] BYREF
  __int64 v30; // [rsp+48h] [rbp-71h] BYREF
  int v31[2]; // [rsp+50h] [rbp-69h] BYREF
  void *v32[2]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v33; // [rsp+68h] [rbp-51h]
  __int64 v34; // [rsp+70h] [rbp-49h]
  _BYTE v35[56]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE *v36; // [rsp+B8h] [rbp-1h]

  v34 = -2LL;
  LODWORD(v30) = a4;
  *(_QWORD *)v31 = a5;
  if ( a6 && a2 )
  {
    PointerAtIndex = GetPointerAtIndex(a3, a4, &v29);
    v11 = PointerAtIndex;
    if ( PointerAtIndex >= 0 )
    {
      v27 = 0LL;
      v12 = (**(__int64 (__fastcall ***)(struct IInputDisplay *, GUID *, struct Pointer **))a2)(
              a2,
              &GUID_f1798ff6_a596_4193_b735_afad9d3d8348,
              &v27);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v36 = 0LL;
        HitTestHandlerForDisplayBinding = DWMInputRouter::FindHitTestHandlerForDisplayBinding(this, v27, v35);
        v11 = HitTestHandlerForDisplayBinding;
        if ( HitTestHandlerForDisplayBinding >= 0 )
        {
          *(_QWORD *)v28 = 0LL;
          v29 = v27;
          v18 = Microsoft::WRL::Details::MakeAndInitialize<HitTestRequest,IHitTestRequest,IDisplayBinding *,IInputTarget * &,RefPtr<IInputTarget> &,InputInfo &,unsigned long &>(
                  (int)v28,
                  (int)&v29,
                  (int)v31,
                  (int)this + 232,
                  a3,
                  (__int64)&v30);
          v11 = v18;
          if ( v18 >= 0 )
          {
            *(_OWORD *)v32 = 0LL;
            v33 = 0LL;
            v29 = (struct Pointer *)v32;
            *(_QWORD *)v31 = this;
            v30 = *(_QWORD *)v28;
            if ( !v36 )
            {
              std::_Xbad_function_call();
              __debugbreak();
            }
            v21 = (*(__int64 (__fastcall **)(_BYTE *, __int64 *, int *, struct Pointer **))(*(_QWORD *)v36 + 16LL))(
                    v36,
                    &v30,
                    v31,
                    &v29);
            v22 = (char *)v32[1];
            v23 = (char *)v32[0];
            if ( v21 >= 0 && ((char *)v32[1] - (char *)v32[0]) >> 3 )
            {
              v24 = *(struct IInputTarget **)v32[0];
              *(_QWORD *)v32[0] = 0LL;
              *a6 = v24;
              v22 = (char *)v32[1];
              v23 = (char *)v32[0];
            }
            else
            {
              *a6 = 0LL;
            }
            if ( v23 )
            {
              if ( v23 != v22 )
              {
                do
                {
                  v25 = *(_QWORD *)v23;
                  if ( *(_QWORD *)v23 )
                  {
                    *(_QWORD *)v23 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
                  }
                  v23 += 8;
                }
                while ( v23 != v22 );
                v23 = (char *)v32[0];
              }
              std::_Deallocate(v23, (v33 - (__int64)v23) >> 3, 8uLL);
              *(_OWORD *)v32 = 0LL;
              v33 = 0LL;
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 1219, v18);
          }
          v20 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 )
          {
            *(_QWORD *)v28 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 1210, HitTestHandlerForDisplayBinding);
        }
        if ( v36 )
        {
          v17 = v35;
          LOBYTE(v17) = v36 != v35;
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v36 + 32LL))(v36, v17);
          v36 = 0LL;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 1205, v12);
      }
      v14 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 1202, PointerAtIndex);
    }
  }
  else
  {
    v11 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1197, 87);
  }
  return v11;
}

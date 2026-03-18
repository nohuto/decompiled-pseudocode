/*
 * XREFs of ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02DA604
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C02DAD90 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?ULongAdd@@YAJKKPEAK@Z @ 0x1C02D8D50 (-ULongAdd@@YAJKKPEAK@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D9D0C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C02DC248 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 */

void __fastcall QueryFontTreeRequest::CaptureKerningPairs(QueryFontTreeRequest *this)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = 0;
    v10 = 0;
    Win32ProbeForRead(v2, 6uLL, 2u);
    while ( 1 )
    {
      v4 = 3LL * v3;
      if ( !*(_WORD *)&v2[6 * v3] && !*(_WORD *)&v2[6 * v3 + 2] && !*(_WORD *)&v2[6 * v3 + 4] )
        break;
      if ( (int)ULongAdd(v3, 1, &v10) < 0 )
        return;
      v3 = v10;
      Win32ProbeForRead(&v2[6 * v10], 6uLL, 2u);
    }
    v5 = v3 + 1;
    if ( (unsigned int)v5 >= v3 )
    {
      v6 = 6 * v5;
      if ( (unsigned __int64)(6 * v5) <= 0xFFFFFFFF )
      {
        v7 = (__int64 *)*((_QWORD *)this + 6);
        v8 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
        v9 = UmfdAllocation::ObtainKernelmodeAllocation(
               v8,
               *v7,
               v2,
               v6,
               0LL,
               (__int64)UmfdAllocation::TryBufferHasSameContent);
        if ( v9 )
        {
          *(_DWORD *)&v9[2 * v4] = 0;
          *(_WORD *)&v9[2 * v4 + 4] = 0;
          *((_QWORD *)this + 7) = v9;
        }
      }
    }
  }
}

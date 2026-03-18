/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C02D67D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D584C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C02D5A28 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C02D7BF0 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C02D7D98 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 */

void __fastcall QueryFontRequest::CaptureUsermodeParameters(QueryFontRequest *this, _QWORD *a2)
{
  _QWORD *v3; // r8
  void *v4; // rcx
  unsigned int *v5; // r15
  unsigned int v6; // esi
  ULONG v7; // r14d
  __int64 *v8; // rbx
  unsigned int v9; // eax
  struct _IFIMETRICS *v10; // rax
  char *v11; // rbx

  v3 = (_QWORD *)a2[3];
  *((_QWORD *)this + 9) = a2[4];
  if ( v3 == *((_QWORD **)this + 8) )
  {
    **((_QWORD **)this + 6) = *v3;
    v4 = (void *)*((_QWORD *)this + 9);
    if ( v4 )
    {
      Win32ProbeForRead(v4, 0xC0uLL, 8u);
      v5 = (unsigned int *)*((_QWORD *)this + 9);
      v6 = *v5;
      v7 = v5[1];
      if ( *v5 >= 0xB6 && (!v7 || v6 >= 0xC0 && v7 < v6 && v6 - v7 >= 0xC0) )
      {
        v8 = (__int64 *)*((_QWORD *)this + 6);
        v9 = (**(__int64 (__fastcall ***)(QueryFontRequest *))this)(this);
        v10 = (struct _IFIMETRICS *)UmfdAllocation::ObtainKernelmodeAllocation(
                                      v9,
                                      *v8,
                                      v5,
                                      v6,
                                      0LL,
                                      (__int64)UmfdAllocation::TryBufferHasSameContent);
        v11 = (char *)v10;
        if ( v10 )
        {
          v10->cjThis = v6;
          v10->cjIfiExtra = v7;
          if ( ValidateIFIMETRICS(v10) )
            *((_QWORD *)this + 7) = v11;
          else
            UmfdAllocation::ReleaseKernelmodeAllocation(v11);
        }
      }
    }
  }
}

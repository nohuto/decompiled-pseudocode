/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800A3478
 * Callers:
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x180075CE8 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(char **a1, unsigned int a2, int a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  char *v6; // r9
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  unsigned __int64 v12; // r11
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ebp
  unsigned __int64 v17; // r8
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  char *v19; // rax
  int v20; // eax
  int v22; // eax
  unsigned __int64 v23; // rdx
  char *v24; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_DWORD *)a1 + 6);
  v6 = 0LL;
  v24 = 0LL;
  v9 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE7u);
  }
  else
  {
    v10 = *((_DWORD *)a1 + 5);
    v11 = 0;
    if ( v9 > v10 )
    {
      v12 = a2 * (unsigned __int64)v9;
      if ( v12 > 0xFFFFFFFF )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xF0u);
      }
      else
      {
        v13 = 16;
        v14 = 8092;
        v15 = v9 - v10;
        if ( v10 > 0x10 )
          v13 = v10;
        if ( v13 < 0x1F9C )
          v14 = v13;
        if ( v15 <= v14 )
          v15 = v14;
        v16 = v10 + v15;
        if ( v10 + v15 < v10 || (v17 = a2 * (unsigned __int64)v16, v17 > 0xFFFFFFFF) )
        {
          v16 = v9;
          LODWORD(v17) = v12;
        }
        if ( v16 > 0xFFFFFFFF / a2 )
        {
          v11 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x10Au);
        }
        else
        {
          if ( *a1 == a1[1] )
          {
            v11 = 0;
            if ( (_DWORD)v17 )
            {
              v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
              if ( v18 == WPF::ProcessHeapImpl::Alloc )
                v19 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v17);
              else
                v19 = (char *)v18(WPF::g_pProcessHeap, (unsigned int)v17);
              v24 = v19;
              v6 = v19;
              if ( !v19 )
                v11 = -2147024882;
            }
            else
            {
              v11 = -2147024809;
            }
            if ( (v11 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x111u);
              return v11;
            }
            v20 = *((_DWORD *)a1 + 6);
            if ( v20 )
            {
              memcpy_0(v6, *a1, a2 * v20);
              v6 = v24;
            }
          }
          else
          {
            v24 = *a1;
            v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, char **, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 24LL))(
                    WPF::g_pProcessHeap,
                    &v24,
                    (unsigned int)v17);
            v11 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x12Au);
              return v11;
            }
            v6 = v24;
            if ( v24 != *a1 )
            {
              if ( a5 )
              {
                v23 = *a5;
                if ( *a5 >= (unsigned __int64)*a1 && v23 < (unsigned __int64)&(*a1)[a2 * *((_DWORD *)a1 + 5)] )
                  *a5 = (unsigned __int64)&v24[v23 - (_QWORD)*a1];
              }
            }
          }
          memset_0(&v6[a2 * *((_DWORD *)a1 + 5)], 0, a2 * (v16 - *((_DWORD *)a1 + 5)));
          *a1 = v24;
          *((_DWORD *)a1 + 5) = v16;
        }
      }
    }
  }
  return v11;
}

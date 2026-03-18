/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800A1ACC
 * Callers:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A1A58 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x1800B308C (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v6; // eax
  void **v8; // r9
  unsigned int v9; // r10d
  unsigned int v10; // ebx
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  char *v19; // r9
  unsigned __int64 v21; // rdx
  unsigned int v22; // [rsp+20h] [rbp-28h]
  void *v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  v8 = (void **)(v6 + a3);
  if ( (unsigned int)v8 < v6 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE7u);
    return v10;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( (unsigned int)v8 > v9 )
  {
    v11 = a2 * (unsigned __int64)(unsigned int)v8;
    if ( v11 > 0xFFFFFFFF )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xF0u);
      return v10;
    }
    v12 = 16;
    v13 = 8092;
    v14 = (_DWORD)v8 - v9;
    if ( v9 > 0x10 )
      v12 = v9;
    if ( v12 < 0x1F9C )
      v13 = v12;
    if ( v14 <= v13 )
      v14 = v13;
    v15 = v9 + v14;
    if ( v9 + v14 < v9 || (v16 = a2 * (unsigned __int64)v15, v16 > 0xFFFFFFFF) )
    {
      v15 = (unsigned int)v8;
      v16 = (unsigned int)v11;
    }
    if ( v15 > 0xFFFFFFFF / a2 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x10Au);
      return v10;
    }
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    {
      v17 = WPF::HrAlloc((WPF *)v16, (unsigned int)v16, (unsigned __int64)&v23, v8);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v18 = *(_DWORD *)(a1 + 24);
        if ( v18 )
          memcpy_0(v23, *(const void **)a1, a2 * v18);
        v19 = (char *)v23;
LABEL_18:
        memset_0(&v19[a2 * *(_DWORD *)(a1 + 20)], 0, a2 * (v15 - *(_DWORD *)(a1 + 20)));
        *(_QWORD *)a1 = v23;
        *(_DWORD *)(a1 + 20) = v15;
        return v10;
      }
      v22 = 273;
    }
    else
    {
      v23 = *(void **)a1;
      v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, void **, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
              WPF::g_pProcessHeap,
              &v23,
              (unsigned int)v16);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v19 = (char *)v23;
        if ( v23 != *(void **)a1 )
        {
          if ( a5 )
          {
            v21 = *a5;
            if ( *a5 >= *(_QWORD *)a1 && v21 < *(_QWORD *)a1 + (unsigned __int64)(a2 * *(_DWORD *)(a1 + 20)) )
              *a5 = (unsigned __int64)v23 + v21 - *(_QWORD *)a1;
          }
        }
        goto LABEL_18;
      }
      v22 = 298;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v22);
  }
  return v10;
}

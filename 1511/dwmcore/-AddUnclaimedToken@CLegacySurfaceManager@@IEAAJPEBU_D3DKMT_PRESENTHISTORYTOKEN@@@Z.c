/*
 * XREFs of ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180109A88
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        __int64 a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // esi
  void *v8; // rbp
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ebx
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  void *v16; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v15) = 0;
  *((_QWORD *)&v15 + 1) = 0LL;
  v16 = 0LL;
  v6 = WPF::HrAlloc(this, *((unsigned int *)a2 + 1), &v16, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8Au);
    v8 = v16;
    goto LABEL_8;
  }
  v8 = v16;
  memcpy_0(v16, a2, *((unsigned int *)a2 + 1));
  v9 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)&v15 + 1) = v8;
  v10 = *((unsigned int *)this + 32);
  v11 = v10 + 1;
  if ( (int)v10 + 1 >= (unsigned int)v10 )
  {
    v7 = 0;
    if ( v11 > *((_DWORD *)this + 31) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 16, 1, &v15);
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
      v7 = v12;
      if ( v12 < 0 )
        goto LABEL_14;
    }
    else
    {
      *(_OWORD *)(*v9 + 16 * v10) = v15;
      *((_DWORD *)this + 32) = v11;
    }
    v8 = 0LL;
    goto LABEL_8;
  }
  v12 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v7 = -2147024362;
LABEL_14:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x8Fu);
LABEL_8:
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
  return v7;
}

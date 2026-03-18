/*
 * XREFs of ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A590
 * Callers:
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A834 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTokenManager::ReleaseCompositionHandleTokensToFrame(
        CTokenManager *this,
        struct DirectComposition::CCompositionFrame *a2)
{
  char *v2; // rbx
  char v3; // di
  char *v5; // rax
  __int64 v6; // rcx
  char *v7; // rax
  char *v9; // rsi
  __int64 v10; // r14
  struct DirectComposition::CCompositionFrame *v11; // rax
  struct DirectComposition::CCompositionFrame **v12; // rdx
  struct DirectComposition::CCompositionFrame **v13; // rcx
  char *v14; // rcx
  char **v15; // rcx
  char *v16; // [rsp+20h] [rbp-10h] BYREF
  struct DirectComposition::CCompositionFrame **v17; // [rsp+28h] [rbp-8h]
  char v18; // [rsp+50h] [rbp+20h] BYREF

  v2 = (char *)this + 200;
  v3 = 0;
  v17 = (struct DirectComposition::CCompositionFrame **)&v16;
  v16 = (char *)&v16;
  v5 = (char *)*((_QWORD *)this + 25);
  v6 = *(_QWORD *)v5;
  if ( *((char **)v5 + 1) != v2 || *(char **)(v6 + 8) != v5 )
    __fastfail(3u);
  while ( 1 )
  {
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v6 + 8) = v2;
    if ( v5 == v2 )
      break;
    v9 = v5 - 40;
    v10 = (__int64)(v5 - 8);
    if ( (*(int (__fastcall **)(__int64, struct DirectComposition::CCompositionFrame *, char *))(*(_QWORD *)v10 + 32LL))(
           v10,
           a2,
           &v18) < 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
      ObfDereferenceObject(v9);
    }
    else
    {
      v11 = (struct DirectComposition::CCompositionFrame *)(v9 + 40);
      if ( v18 )
      {
        v12 = (struct DirectComposition::CCompositionFrame **)*((_QWORD *)a2 + 20);
        if ( *v12 != (struct DirectComposition::CCompositionFrame *)((char *)a2 + 152) )
          __fastfail(3u);
        *(_QWORD *)v11 = (char *)a2 + 152;
        *((_QWORD *)v9 + 6) = v12;
        *v12 = v11;
        *((_QWORD *)a2 + 20) = v11;
      }
      else
      {
        v13 = v17;
        if ( *v17 != (struct DirectComposition::CCompositionFrame *)&v16 )
          __fastfail(3u);
        *((_QWORD *)v9 + 6) = v17;
        *(_QWORD *)v11 = &v16;
        *v13 = v11;
        v17 = (struct DirectComposition::CCompositionFrame **)(v9 + 40);
      }
    }
    v5 = *(char **)v2;
    v6 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(char **)(v6 + 8) != v5 )
      __fastfail(3u);
  }
  v7 = v16;
  if ( v16 != (char *)&v16 )
  {
    v14 = *(char **)v16;
    if ( *((char ***)v16 + 1) != &v16 || *((char **)v14 + 1) != v16 )
      __fastfail(3u);
    while ( 1 )
    {
      v16 = v14;
      *((_QWORD *)v14 + 1) = &v16;
      if ( v7 == (char *)&v16 )
        break;
      v15 = (char **)*((_QWORD *)v2 + 1);
      if ( *v15 != v2 )
        __fastfail(3u);
      *(_QWORD *)v7 = v2;
      *((_QWORD *)v7 + 1) = v15;
      *v15 = v7;
      *((_QWORD *)v2 + 1) = v7;
      v7 = v16;
      v14 = *(char **)v16;
      if ( *((char ***)v16 + 1) != &v16 || *((char **)v14 + 1) != v16 )
        __fastfail(3u);
    }
    return 1;
  }
  return v3;
}

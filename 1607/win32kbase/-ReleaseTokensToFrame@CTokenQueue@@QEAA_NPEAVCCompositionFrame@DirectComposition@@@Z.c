/*
 * XREFs of ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001BD04
 * Callers:
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C001A834 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CTokenQueue::ReleaseTokensToFrame(CTokenQueue *this, struct DirectComposition::CCompositionFrame *a2)
{
  CTokenQueue **v2; // rax
  bool v4; // si
  CTokenQueue ***v6; // rcx
  CTokenQueue **v8; // rdi
  struct DirectComposition::CCompositionFrame *v9; // rdi
  struct DirectComposition::CCompositionFrame **v10; // rcx
  CTokenQueue ***v11; // rcx
  CTokenQueue *v12; // rax
  CTokenQueue **v13; // rcx
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CTokenQueue **)*((_QWORD *)this + 1);
  v4 = 0;
  v6 = (CTokenQueue ***)v2[1];
  if ( *v2 != this || *v6 != v2 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v6;
  for ( *v6 = (CTokenQueue **)this; v2 != (CTokenQueue **)this; *v11 = (CTokenQueue **)this )
  {
    v8 = v2 - 1;
    if ( (*((int (__fastcall **)(CTokenQueue **, struct DirectComposition::CCompositionFrame *, char *))*(v2 - 1) + 4))(
           v2 - 1,
           a2,
           &v14) < 0 )
    {
      (*((void (__fastcall **)(CTokenQueue **))*v8 + 7))(v8);
      (*(void (__fastcall **)(CTokenQueue **, __int64))*v8)(v8, 1LL);
    }
    else
    {
      if ( !v14 )
      {
        v12 = (CTokenQueue *)(v8 + 1);
        v13 = (CTokenQueue **)*((_QWORD *)this + 1);
        v4 = *((_DWORD *)v8 + 6) == 2;
        if ( *v13 != this )
          __fastfail(3u);
        *(_QWORD *)v12 = this;
        v8[2] = (CTokenQueue *)v13;
        *v13 = v12;
        *((_QWORD *)this + 1) = v12;
        return v4;
      }
      v9 = (struct DirectComposition::CCompositionFrame *)(v8 + 1);
      v10 = (struct DirectComposition::CCompositionFrame **)*((_QWORD *)a2 + 18);
      if ( *v10 != (struct DirectComposition::CCompositionFrame *)((char *)a2 + 136) )
        __fastfail(3u);
      *(_QWORD *)v9 = (char *)a2 + 136;
      *((_QWORD *)v9 + 1) = v10;
      *v10 = v9;
      *((_QWORD *)a2 + 18) = v9;
    }
    v2 = (CTokenQueue **)*((_QWORD *)this + 1);
    v11 = (CTokenQueue ***)v2[1];
    if ( *v2 != this || *v11 != v2 )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v11;
  }
  return v4;
}
